// Copyright 2017 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD_style license that can be
// found in the LICENSE file.

#pragma once

/* iomg bit definition */
#define MUX_M0      0
#define MUX_M1      1
#define MUX_M2      2
#define MUX_M3      3
#define MUX_M4      4
#define MUX_M5      5
#define MUX_M6      6
#define MUX_M7      7

/* iocg bit definition */
#define PULL_MASK   (3)
#define PULL_DIS    (0)
#define PULL_UP     (1 << 0)
#define PULL_DOWN   (1 << 1)

/* drive strength definition */
#define DRIVE_MASK  (7 << 4)
#define DRIVE1_02MA (0 << 4)
#define DRIVE1_04MA (1 << 4)
#define DRIVE1_08MA (2 << 4)
#define DRIVE1_10MA (3 << 4)
#define DRIVE2_02MA (0 << 4)
#define DRIVE2_04MA (1 << 4)
#define DRIVE2_08MA (2 << 4)
#define DRIVE2_10MA (3 << 4)
#define DRIVE3_04MA (0 << 4)
#define DRIVE3_08MA (1 << 4)
#define DRIVE3_12MA (2 << 4)
#define DRIVE3_16MA (3 << 4)
#define DRIVE3_20MA (4 << 4)
#define DRIVE3_24MA (5 << 4)
#define DRIVE3_32MA (6 << 4)
#define DRIVE3_40MA (7 << 4)
#define DRIVE4_02MA (0 << 4)
#define DRIVE4_04MA (2 << 4)
#define DRIVE4_08MA (4 << 4)
#define DRIVE4_10MA (6 << 4)

/* drive strength definition for hi3660 */
#define DRIVE6_MASK (15 << 4)
#define DRIVE6_04MA (0 << 4)
#define DRIVE6_12MA (4 << 4)
#define DRIVE6_19MA (8 << 4)
#define DRIVE6_27MA (10 << 4)
#define DRIVE6_32MA (15 << 4)
#define DRIVE7_02MA (0 << 4)
#define DRIVE7_04MA (1 << 4)
#define DRIVE7_06MA (2 << 4)
#define DRIVE7_08MA (3 << 4)
#define DRIVE7_10MA (4 << 4)
#define DRIVE7_12MA (5 << 4)
#define DRIVE7_14MA (6 << 4)
#define DRIVE7_16MA (7 << 4)

/* I2C0 and I2C1 pinxmux and pincfg offsets */
#define I2C0_SCL_MUX_OFFSET            0x14
#define I2C0_SDA_MUX_OFFSET            0x18
#define I2C1_SCL_MUX_OFFSET            0x1C
#define I2C1_SDA_MUX_OFFSET            0x20

#define I2C0_SCL_CFG_OFFSET            0x1C
#define I2C0_SDA_CFG_OFFSET            0x20
#define I2C1_SCL_CFG_OFFSET            0x24
#define I2C1_SDA_CFG_OFFSET            0x28
