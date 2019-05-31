/* Copyright (c) 2009-2019 Arm Limited
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*************************************************************************************************/
/*!
 *  \brief Controller HCI serial transport interface file.
 */
/*************************************************************************************************/

#ifndef CHCI_TR_SERIAL_H
#define CHCI_TR_SERIAL_H

#include "wsf_types.h"

#ifdef __cplusplus
extern "C" {
#endif

/*************************************************************************************************/
/*!
 *  \brief  Receive function.  Gets called by external code when bytes are received.
 *
 *  \param  pBuf   Pointer to buffer of incoming bytes.
 *  \param  len    Number of bytes in incoming buffer.
 *
 *  \return None.
 */
/*************************************************************************************************/
void chciTrSerialRxIncoming(uint8_t *pBuf, uint8_t len);

#ifdef __cplusplus
};
#endif

#endif /* CHCI_TR_SERIAL_H */