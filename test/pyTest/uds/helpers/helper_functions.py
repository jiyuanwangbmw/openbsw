# *******************************************************************************
# Copyright (c) 2024 Accenture
#
# This program and the accompanying materials are made available under the
# terms of the Apache License Version 2.0 which is available at
# https://www.apache.org/licenses/LICENSE-2.0
#
# SPDX-License-Identifier: Apache-2.0
# *******************************************************************************

import binascii
import udsoncan

class ByteCodec(udsoncan.DidCodec):
    def encode(self, value: bytes) -> bytes:
        return value

    def decode(self, data: bytes) -> bytes:
        return data

def hexlify(value):
    response = binascii.hexlify(value).decode("ascii")
    formatted_response = ' '.join(response[i:i+2] for i in range(0, len(response), 2))
    return formatted_response