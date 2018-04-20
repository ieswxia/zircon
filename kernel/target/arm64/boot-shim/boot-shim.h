// Copyright 2018 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include <zircon/boot/bootdata.h>

extern bootdata_t* bootdata_return;

uint64_t boot_shim(void* device_tree, zircon_kernel_t* kernel_bootdata);
