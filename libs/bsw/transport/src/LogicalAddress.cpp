/********************************************************************************
 * Copyright (c) 2024 Accenture
 *
 * This program and the accompanying materials are made available under the
 * terms of the Apache License Version 2.0 which is available at
 * https://www.apache.org/licenses/LICENSE-2.0
 *
 * SPDX-License-Identifier: Apache-2.0
 ********************************************************************************/

#include "transport/LogicalAddress.h"

#include <etl/algorithm.h>

namespace transport
{
namespace addressfinder
{
::etl::optional<LogicalAddress>
findDoipAddressInSlice(uint16_t const address, ::etl::span<LogicalAddress const> const& list)
{
    auto* const iter = etl::find_if(
        list.begin(),
        list.end(),
        [address](LogicalAddress const addr) -> bool { return addr.addressDoip == address; });
    if (iter != list.end())
    {
        return *iter;
    }
    return {};
}

::etl::optional<LogicalAddress>
find8BitAddressInSlice(uint16_t const address, ::etl::span<LogicalAddress const> const& list)
{
    auto* const iter = etl::find_if(
        list.begin(),
        list.end(),
        [address](LogicalAddress const addr) -> bool { return addr.address8Bit == address; });
    if (iter != list.end())
    {
        return *iter;
    }
    return {};
}
} // namespace addressfinder
} // namespace transport
