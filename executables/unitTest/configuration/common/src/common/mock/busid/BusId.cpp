/********************************************************************************
 * Copyright (c) 2024 Accenture
 *
 * This program and the accompanying materials are made available under the
 * terms of the Apache License Version 2.0 which is available at
 * https://www.apache.org/licenses/LICENSE-2.0
 *
 * SPDX-License-Identifier: Apache-2.0
 ********************************************************************************/

#include "common/mock/busid/BusId.h"
using namespace std;

namespace common
{
namespace busid
{

#define BUS_ID_NAME(BUS) \
    case ::common::mock::busid::BUS: return #BUS

char const* BusIdTraits::getName(uint8_t index)
{
    switch (index)
    {
        BUS_ID_NAME(BUS0);
        BUS_ID_NAME(BUS1);
        BUS_ID_NAME(BUS2);
        default: return "INVALID";
    }
}

} // namespace busid
} // namespace common
