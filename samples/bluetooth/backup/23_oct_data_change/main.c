/* main.c - Application main entry point */

/*
 * Copyright (c) 2015-2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/types.h>
#include <stddef.h>
#include <misc/printk.h>
#include <misc/util.h>

#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>

#define DEVICE_NAME CONFIG_BT_DEVICE_NAME
#define DEVICE_NAME_LEN (sizeof(DEVICE_NAME) - 1)

 

/*
 * Set Advertisement data. Based on the Eddystone specification:
 * https://github.com/google/eddystone/blob/master/protocol-specification.md
 * https://github.com/google/eddystone/tree/master/eddystone-url
 */


//static u8_t mfg_data[250];

static u8_t mfg_data_1[] = { 0x48,0x45,0x4c,0x4c,0x4f,0x06,0x07,0x08,0x09,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17//,0x18,0x19//,0x20//,0x21
							,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29, 0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x40,
							0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x20,0x21,
							0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29, 0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x40,
							0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x20,0x21,
							0x22,0x21,0x23,0x24,0x25,0x26,0x27,0x28,0x29, 0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x40 ,
							0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x20,0x21,
							0x22,0x21,0x23,0x24,0x25,0x26,0x27,0x28,0x29, 0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x40 ,
							0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x20,0x21,
							0x22,0x21,0x23,0x24,0x25,0x26,0x27,0x28,0x29, 0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x40,
							0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x20,0x21,
							0x22,0x21,0x23,0x24,0x25,0x26,0x27,0x28,0x29, 0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x40
							};

static u8_t mfg_data_2[] = { 
							0x22,0x21,0x23,0x24,0x25,0x26,0x27,0x28,0x29, 0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x40,
							0x22,0x21,0x23,0x24,0x25,0x26,0x27,0x28,0x29, 0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x40 ,
							0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x20,0x21,
							0x22,0x21,0x23,0x24,0x25,0x26,0x27,0x28,0x29, 0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x40,
							0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x20,0x21,
							0x22,0x21,0x23,0x24,0x25,0x26,0x27,0x28,0x29, 0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x40,
								0x22,0x21,0x23,0x24,0x25,0x26,0x27,0x28,0x29, 0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x40,
							0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x20,0x21,
							0x22,0x21,0x23,0x24,0x25,0x26,0x27,0x28,0x29, 0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x40
							};

static struct bt_data ad[] = {
	BT_DATA(BT_DATA_MANUFACTURER_DATA, mfg_data_2, 16)
	//BT_DATA_BYTES(BT_DATA_FLAGS, BT_LE_AD_NO_BREDR),
	//BT_DATA_BYTES(BT_DATA_UUID16_ALL, 0xaa, 0xfe),
	//BT_DATA_BYTES(BT_DATA_SVC_DATA16,
	//	      0xaa, 0xfe, /* Eddystone UUID */
	//	      0x10, /* Eddystone-URL frame type */
	//	      0x00, /* Calibrated Tx power at 0m */
	//	      0x00, /* URL Scheme Prefix http://www. */
	//	      'z', 'e', 'p', 'h', 'y', 'r',
	//	      'p', 'r', 'o', 'j', 'e', 'c', 't',
	//	      0x09)
	
};

//static struct bt_data ad[1];

/* Set Scan Response data */
static const struct bt_data sd[] = {
	BT_DATA(BT_DATA_NAME_COMPLETE, DEVICE_NAME, DEVICE_NAME_LEN),
};

static void bt_ready(int err)
{
	if (err) {
		printk("Bluetooth init failed (err %d)\n", err);
		return;
	}

	printk("Bluetooth initialized\n");

	/* Start advertising */
	err = bt_le_adv_start(BT_LE_ADV_NCONN, ad, ARRAY_SIZE(ad),
			      sd, ARRAY_SIZE(sd));
	if (err) {
		printk("Advertising failed to start (err %d)\n", err);
		return;
	}

	printk("Beacon started\n");
}

static void bt_ext_ready(int err)
{
	if (err) {
		printk("Bluetooth init failed (err %d)\n", err);
		return;
	}

	printk("Bluetooth initialized\n");

	/* Start advertising */
	err = bt_le_ext_adv_start(BT_LE_ADV_NCONN, ad, ARRAY_SIZE(ad),
			      sd, ARRAY_SIZE(sd));
	if (err) {
		printk("Advertising failed to start (err %d)\n", err);
		return;
	}

	printk("Beacon started\n");
}


void main(void)
{
	int err;

	printk("Starting Beacon Demo\n");
 	ad[0].type = BT_DATA_MANUFACTURER_DATA, 
		ad[0].data = mfg_data_1;
		ad[0].data_len = 16;

	/* Initialize the Bluetooth Subsystem */
	err = bt_enable(bt_ext_ready);
	if (err) {
		printk("Bluetooth init failed (err %d)\n", err);
	}

	while(1){
		k_sleep(1000);
		ad[0].type = BT_DATA_MANUFACTURER_DATA, 
		ad[0].data = mfg_data_2;
		ad[0].data_len =  16;

		set_ext_ad(BT_HCI_OP_LE_SET_EXT_ADV_DATA, ad, ARRAY_SIZE(ad));

	//	bt_le_ext_adv_start(BT_LE_ADV_NCONN, ad, ARRAY_SIZE(ad),
	//		      sd, ARRAY_SIZE(sd));
		
		k_sleep(1000);

		ad[0].type = BT_DATA_MANUFACTURER_DATA, 
		ad[0].data = mfg_data_1;
		ad[0].data_len =  16;

		set_ext_ad(BT_HCI_OP_LE_SET_EXT_ADV_DATA, ad, ARRAY_SIZE(ad));
	
		
	}
}