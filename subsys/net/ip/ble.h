
#ifndef __BLE_H
#define __BLE_H


#ifdef __cplusplus
extern "C" {
#endif

#include <toolchain.h>
#include <zephyr/types.h>
#include <stdbool.h>
#include <string.h>
#include <misc/util.h>

extern bool ble_connected;
extern struct bt_conn *default_conn;
extern struct bt_context *bt_ctxt; 

struct aux_pkt{
    u8_t data[1300];
    u16_t len;
};

#ifdef __cplusplus
}
#endif

/**
 * @}
 */

#endif /* __BLE_H */