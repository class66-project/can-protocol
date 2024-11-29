/* Copyright (C) 2024 Richard Franks - All Rights Reserved
 *
 * You may use, distribute and modify this code under the
 * terms of the Apache 2.0 license.
 *
 * See LICENSE for details
 */
#pragma once

enum CANID_FUNCTION {
  EMCY        = 0x01,
  SENSOR      = 0x02,
  SETACTUATOR = 0x03,
  SETCONFIG   = 0x04,
  GETCONFIG   = 0x05,
  HBEAT       = 0x07
};

enum CANID_STOCK {
  LOCO1       = 0x00,
  LOCO2       = 0x01,
  UNPOWERED   = 0x10,
  BROADCAST   = 0x11
};
