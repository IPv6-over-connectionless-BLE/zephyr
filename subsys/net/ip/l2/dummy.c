/*
 * Copyright (c) 2016 Intel Corporation.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <net/net_core.h>
#include <net/net_l2.h>
#include <net/net_if.h>
#include <net/net_pkt.h>

static inline enum net_verdict dummy_recv(struct net_if *iface,
					  struct net_pkt *pkt)
{
	net_pkt_ll_src(pkt)->addr = NULL;
	net_pkt_ll_src(pkt)->len = 0;
	net_pkt_ll_src(pkt)->type = NET_LINK_DUMMY;
	net_pkt_ll_dst(pkt)->addr = NULL;
	net_pkt_ll_dst(pkt)->len = 0;
	net_pkt_ll_dst(pkt)->type = NET_LINK_DUMMY;

	return NET_CONTINUE;
}

static inline enum net_verdict dummy_send(struct net_if *iface,
					  struct net_pkt *pkt)
{
	net_if_queue_tx(iface, pkt);

	return NET_OK;
}

static inline u16_t dummy_reserve(struct net_if *iface, void *unused)
{
	ARG_UNUSED(iface);
	ARG_UNUSED(unused);

	return 0;
}

NET_L2_INIT(DUMMY_L2, dummy_recv, dummy_send, dummy_reserve, NULL);


static struct bt_context bt_context_data = {
	.iface			= NULL,
};

static int btless_iface_send(struct net_if *iface, struct net_pkt *pkt)
{
	struct bt_context *ctxt = net_if_get_device(iface)->driver_data;
	struct net_buf *frags;
	int ret;

	NET_DBG("iface %p pkt %p len %zu", iface, pkt, net_pkt_get_len(pkt));

	/* Dettach data fragments for packet */
	frags = pkt->frags;
	pkt->frags = NULL;

	net_pkt_unref(pkt);

//	net_buf_frag_del(NULL, &frags);
	return ret;
}


	#define DEVICE_NAME		CONFIG_BT_DEVICE_NAME
	#define DEVICE_NAME_LEN		(sizeof(DEVICE_NAME) - 1)
	#define UNKNOWN_APPEARANCE	0x0000

		static const struct bt_data ad[] = {
		BT_DATA_BYTES(BT_DATA_UUID16_ALL, 0x20, 0x18),
	};

	static const struct bt_data sd[] = {
		BT_DATA(BT_DATA_NAME_COMPLETE, DEVICE_NAME, DEVICE_NAME_LEN),
	};


static void btless_iface_init(struct net_if *iface)
{
	struct bt_context *ctxt = net_if_get_device(iface)->driver_data;

	NET_DBG("iface %p", iface);

	ctxt->iface = iface;

#if defined(CONFIG_NET_L2_BT_ZEP1656)
	/* Workaround Linux bug, see:
	 * https://jira.zephyrproject.org/browse/ZEP-1656
	 */
	atomic_set_bit(iface->flags, NET_IF_POINTOPOINT);
#endif


	bt_le_adv_start(BT_LE_ADV_CONN, ad, ARRAY_SIZE(ad),
				sd, ARRAY_SIZE(sd));
}

static struct net_if_api bt_if_api = {
	.init = btless_iface_init,
	.send = btless_iface_send,
};


static int net_btless_init(struct device *dev)
{
	NET_DBG("dev %p driver_data %p", dev, dev->driver_data);

	return 0;
}

/* this initializes the network interface */

NET_DEVICE_INIT_INSTANCE(net_btless, "net_btless",1, net_btless_init,  &bt_context_data, NULL,
		CONFIG_KERNEL_INIT_PRIORITY_DEFAULT,
		&bt_if_api, DUMMY_L2,
		NET_L2_GET_CTX_TYPE(DUMMY_L2), 1280);
