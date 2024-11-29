/* Copyright (C) 2024 Richard Franks - All Rights Reserved
 *
 * You may use, distribute and modify this code under the
 * terms of the Apache 2.0 license.
 *
 * See LICENSE for details
 */

#pragma once

#define MASK_FUNC                     0x0700

#define MATCH_FUNC_EMCY               0x0100
#define MATCH_FUNC_SENSOR             0x0200
#define MATCH_FUNC_ACTUATOR           0x0300
#define MATCH_FUNC_CONFIG_SET         0x0400
#define MATCH_FUNC_CONFIG_GET         0x0500
#define MATCH_FUNC_HBEAT              0x0700

#define MASK_STOCK                    0x00C0

#define MATCH_STOCK_LOCO1             0x0000
#define MATCH_STOCK_LOCO2             0x0040
#define MATCH_STOCK_CARRIAGE          0x0080
#define MATCH_STOCK_BROADCAST         0x00C0

#define MASK_NODE                     0x003F

#define MATCH_NODE_CORE_CONTROLLERS   0x0000
#define MATCH_NODE_BATTERY            0x0004
#define MATCH_NODE_LOCO               0x0008
#define MATCH_NODE_SENSORS            0x0010
#define MATCH_NODE_CONTROLLERS        0x0020
#define MATCH_NODE_PROGRAMMING        0x003F
