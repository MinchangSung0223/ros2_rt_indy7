#ifndef LR_CONTROL_RUN_H
#define LR_CONTROL_RUN_H

#include "../main.h"
//Control
void rt_lr_control_run(void* param);
#endif // LR_CONTROL_RUN_H


// set bias sudo ethercat download -p7 -t uint16 0x2001 1 1
// set unbias sudo ethercat download -p7 -t uint16 0x2001 1 0
//set LPF 100hz sudo ethercat download -p7 -t uint16 0x2001 2 100