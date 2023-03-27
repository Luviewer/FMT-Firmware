#ifndef __DRONECAN_H__
#define __DRONECAN_H__
#include <firmament.h>

void processTxRxOnce(int32_t timeout_msec);

void setRGB(uint8_t red, uint8_t green, uint8_t blue);
fmt_err_t dronecan_init(void);

#endif