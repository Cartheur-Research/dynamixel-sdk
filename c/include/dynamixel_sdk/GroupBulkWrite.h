/*******************************************************************************
* Copyright (c) 2016, ROBOTIS CO., LTD.
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* * Redistributions of source code must retain the above copyright notice, this
*   list of conditions and the following disclaimer.
*
* * Redistributions in binary form must reproduce the above copyright notice,
*   this list of conditions and the following disclaimer in the documentation
*   and/or other materials provided with the distribution.
*
* * Neither the name of ROBOTIS nor the names of its
*   contributors may be used to endorse or promote products derived from
*   this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*******************************************************************************/

/* Author: Leon Ryu Woon Jung */

/*
* GroupBulkWrite.h
*
*  Created on: 2016. 5. 4.
*/

#ifndef DYNAMIXEL_SDK_INCLUDE_DYNAMIXEL_SDK_GROUPBULKWRITE_C_H_
#define DYNAMIXEL_SDK_INCLUDE_DYNAMIXEL_SDK_GROUPBULKWRITE_C_H_

#include "RobotisDef.h"
#include "PortHandler.h"
#include "PacketHandler.h"

WINDECLSPEC int     GroupBulkWrite              (int port_num, int protocol_version);

WINDECLSPEC void    GroupBulkWrite_MakeParam    (int group_num);
WINDECLSPEC bool    GroupBulkWrite_AddParam     (int group_num, UINT8_T id, UINT16_T start_address, UINT16_T data_length, UINT32_T data, UINT16_T input_length);
WINDECLSPEC void    GroupBulkWrite_RemoveParam  (int group_num, UINT8_T id);
WINDECLSPEC bool    GroupBulkWrite_ChangeParam  (int group_num, UINT8_T id, UINT16_T start_address, UINT16_T data_length, UINT32_T data, UINT16_T input_length, UINT16_T data_pos);
WINDECLSPEC void    GroupBulkWrite_ClearParam   (int group_num);

WINDECLSPEC void    GroupBulkWrite_TxPacket     (int group_num);

#endif /* DYNAMIXEL_SDK_INCLUDE_DYNAMIXEL_SDK_GROUPBULKWRITE_C_H_ */
