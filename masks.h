/* Copyright (C) 2024 Richard Franks - All Rights Reserved
 *
 * You may use, distribute and modify this code under the
 * terms of the Apache 2.0 license.
 *
 * See LICENSE for details
 */

#pragma once

#define MASK_FUNC               0x0700

#define FUNC_EMCY               0x0100
#define FUNC_SENSOR             0x0200
#define FUNC_ACTUATOR           0x0300
#define FUNC_CONFIG_TX          0x0400
#define FUNC_CONFIG_RX          0x0500
#define FUNC_HBEAT              0x0700

#define MASK_STOCK              0x00C0

#define STOCK_LOCO1             0x0000
#define STOCK_LOCO2             0x0040
#define STOCK_CARRIAGE          0x0080
#define STOCK_BROADCAST         0x00C0

#define MASK_NODE               0x003F

#define NODE_CORE_CONTROLLERS   0x0000
#define NODE_BATTERY            0x0004
#define NODE_LOCO               0x0008
#define NODE_SENSORS            0x0010
#define NODE_CONTROLLERS        0x0020
#define NODE_BROADCAST          0x003E
#define NODE_PROGRAMMING        0x003F

#define MASK_CONFIG_DIRECTION   0x0080

#define CONFIG_DOWNLOAD         0x0080
#define CONFIG_UPLOAD           0x0000

#define MASK_CONFIG_LENGTH      0x0007
