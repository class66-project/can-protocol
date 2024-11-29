
/* Copyright (C) 2024 Richard Franks - All Rights Reserved
 *
 * You may use, distribute and modify this code under the
 * terms of the Apache 2.0 license.
 *
 * See LICENSE for details
 */

#pragma once
#define VOLTAGE_MAIN                  0x01  // Size: 4 bytes
#define VOLTAGE_CELL_AVERAGE          0x02  // Size: 2 bytes
#define VOLTAGE_CELL_DEVIATION        0x03  // Size: 2 bytes
#define VOLTAGE_SENSE_1               0x04  // Size: 2 bytes
#define VOLTAGE_SENSE_2               0x05  // Size: 2 bytes

#define VOLTAGE_CELL_1                0x10  // Size: 2 bytes
#define VOLTAGE_CELL_2                0x11  // Size: 2 bytes
#define VOLTAGE_CELL_3                0x12  // Size: 2 bytes
#define VOLTAGE_CELL_4                0x13  // Size: 2 bytes
#define VOLTAGE_CELL_5                0x14  // Size: 2 bytes
#define VOLTAGE_CELL_6                0x15  // Size: 2 bytes
#define VOLTAGE_CELL_7                0x16  // Size: 2 bytes
#define VOLTAGE_CELL_8                0x17  // Size: 2 bytes
#define VOLTAGE_CELL_9                0x18  // Size: 2 bytes
#define VOLTAGE_CELL_10               0x19  // Size: 2 bytes
#define VOLTAGE_CELL_11               0x1A  // Size: 2 bytes
#define VOLTAGE_CELL_12               0x1B  // Size: 2 bytes
#define VOLTAGE_CELL_13               0x1C  // Size: 2 bytes
#define VOLTAGE_CELL_14               0x1D  // Size: 2 bytes
#define VOLTAGE_CELL_15               0x1E  // Size: 2 bytes
#define VOLTAGE_CELL_16               0x1F  // Size: 2 bytes

#define CURRENT_MAIN                  0x20  // Size: 4 bytes
#define CURRENT_BALANCE               0x21  // Size: 2 bytes
#define CURRENT_MAIN_2                0x22  // Size: 4 byes

#define PRESSURE_LOCO_BRAKE           0x30  // Size: 1 byte

#define TEMPERATURE_SENSOR_1          0x40  // Size: 2 bytes
#define TEMPERATURE_SENSOR_2          0x41  // Size: 2 bytes
#define TEMPERATURE_SENSOR_3          0x42  // Size: 2 bytes
#define TEMPERATURE_SENSOR_4          0x43  // Size: 2 bytes
#define TEMPERATURE_SENSOR_5          0x44  // Size: 2 bytes
#define TEMPERATURE_SENSOR_6          0x45  // Size: 2 bytes
#define TEMPERATURE_SENSOR_7          0x46  // Size: 2 bytes
#define TEMPERATURE_SENSOR_8          0x47  // Size: 2 bytes

#define SPEED_MAIN_RPM                0x50  // Size: 2 bytes
#define SPEED_MAIN_MPH                0x51  // Size: 1 byte

#define CAPACITY_REMAINING_PERCENT    0x60  // Size: 1 byte
#define CAPACITY_REMAINING_AMP_HOURS  0x61  // Size: 2 bytes
#define CAPACITY_NOMINAL              0x62  // Size: 4 bytes

#define CELL_COUNT                    0xC0  // Size: 1 bytes
#define POWER_MAIN                    0xC1  // Size: 4 bytes
#define ALARMS                        0xC2  // Size: 4 bytes
#define CHARGE_ENABLED                0xC3  // Size: 1 byte
#define DISCHARGE_ENABLED             0xC4  // Size: 1 byte
#define LOCO_DIRECTION                0xC5  // Size: 1 byte
#define HIGHEST_CELL                  0xC6  // Size: 1 bytes
#define LOWEST_CELL                   0xC7  // Size: 1 bytes

#define RESISTANCE_CELL_1             0xD0  // Size: 2 bytes
#define RESISTANCE_CELL_2             0xD1  // Size: 2 bytes
#define RESISTANCE_CELL_3             0xD2  // Size: 2 bytes
#define RESISTANCE_CELL_4             0xD3  // Size: 2 bytes
#define RESISTANCE_CELL_5             0xD4  // Size: 2 bytes
#define RESISTANCE_CELL_6             0xD5  // Size: 2 bytes
#define RESISTANCE_CELL_7             0xD6  // Size: 2 bytes
#define RESISTANCE_CELL_8             0xD7  // Size: 2 bytes
#define RESISTANCE_CELL_9             0xD8  // Size: 2 bytes
#define RESISTANCE_CELL_10            0xD9  // Size: 2 bytes
#define RESISTANCE_CELL_11            0xDA  // Size: 2 bytes
#define RESISTANCE_CELL_12            0xDB  // Size: 2 bytes
#define RESISTANCE_CELL_13            0xDC  // Size: 2 bytes
#define RESISTANCE_CELL_14            0xDD  // Size: 2 bytes
#define RESISTANCE_CELL_15            0xDE  // Size: 2 bytes
#define RESISTANCE_CELL_16            0xDF  // Size: 2 bytes