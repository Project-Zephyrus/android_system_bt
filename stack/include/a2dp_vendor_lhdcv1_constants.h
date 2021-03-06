/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
// A2DP constants for LHDC codec
//

#ifndef A2DP_VENDOR_LHDCV1_CONSTANTS_H
#define A2DP_VENDOR_LHDCV1_CONSTANTS_H

#define A2DP_LHDCV1_VENDOR_CMD_MASK    0xC000

// LHDC Quality Mode Index
//LHDC not supported auto bit rate now.
//#define A2DP_LHDCV1_QUALITY_MAGIC_NUM 0x8000
//#define A2DP_LHDCV1_QUALITY_ABR    8   // ABR mode, range: 990,660,492,396,330(kbps)
//#define A2DP_LHDCV1_QUALITY_HIGH   7   // Equal to LHDCBT_EQMID_HQ 900kbps
//#define A2DP_LHDCV1_QUALITY_MID    6   // Equal to LHDCBT_EQMID_SQ 500/560kbps
//#define A2DP_LHDCV1_QUALITY_LOW    5   // Equal to LHDCBT_EQMID_MQ 400kbps
//#define A2DP_LHDCV1_QUALITY_LOW4   4   //
//#define A2DP_LHDCV1_QUALITY_LOW3   3
//#define A2DP_LHDCV1_QUALITY_LOW2   2
//#define A2DP_LHDCV1_QUALITY_LOW1   1
//#define A2DP_LHDCV1_QUALITY_LOW0   0

#define A2DP_LHDCV1_LATENCY_MAGIC_NUM 0xC000
//#define A2DP_LHDCV1_LATENCY_LOW	0	// 50-100 ms
//#define A2DP_LHDCV1_LATENCY_MID	1	// default value, 150-200 ms
//#define A2DP_LHDCV1_LATENCY_HIGH	2	// 300-500 ms

// Length of the LHDC Media Payload header
//#define A2DP_LHDCV1_MPL_HDR_LEN 2

// LHDC Media Payload Header
//#define A2DP_LHDCV1_HDR_F_MSK 0x80
//#define A2DP_LHDCV1_HDR_S_MSK 0x40
//#define A2DP_LHDCV1_HDR_L_MSK 0x20
//#define A2DP_LHDCV1_HDR_NUM_MSK 0x7
//#define A2DP_LHDCV1_HDR_NUM_SHIFT 2
//#define A2DP_LHDCV1_HDR_NUM_MAX 7

//#define A2DP_LHDCV1_HDR_LATENCY_LOW   0x00
//#define A2DP_LHDCV1_HDR_LATENCY_MID   0x01
//#define A2DP_LHDCV1_HDR_LATENCY_HIGH  0x02
//#define A2DP_LHDCV1_HDR_LATENCY_MSK   0x03

// LHDC codec specific settings
//#define A2DP_LHDCV1_CODEC_LEN 9
// [Octet 0-3] Vendor ID
//#define A2DP_LHDCV1_VENDOR_ID 0x0000053a
// [Octet 4-5] Vendor Specific Codec ID
// [Octet 6], [Bits 0-3] Sampling Frequency
//#define A2DP_LHDCV1_SAMPLING_FREQ_MASK 0x0F
//#define A2DP_LHDCV1_SAMPLING_FREQ_44100 0x08
//#define A2DP_LHDCV1_SAMPLING_FREQ_48000 0x04
//#define A2DP_LHDCV1_SAMPLING_FREQ_88200 0x02
//#define A2DP_LHDCV1_SAMPLING_FREQ_96000 0x01

// [Octet 6], [Bits 3-4] Bit dipth
#define A2DP_LHDCV1_BIT_FMT_MASK 	 0x30
//#define A2DP_LHDCV1_BIT_FMT_24	 0x10
//#define A2DP_LHDCV1_BIT_FMT_16	 0x20

#define A2DP_LHDCV1_CHANNEL_SEPARATION  0x40



//#define A2DP_LHDCV1_CHANNEL_MODE_MASK 0x07
//#define A2DP_LHDCV1_CHANNEL_MODE_MONO 0x04
//#define A2DP_LHDCV1_CHANNEL_MODE_DUAL 0x02
//#define A2DP_LHDCV1_CHANNEL_MODE_STEREO 0x01


#endif  // A2DP_VENDOR_LHDCV1_CONSTANTS_H
