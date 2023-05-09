/*
 * SPDX-FileCopyrightText: Copyright 2010-2023 Arm Limited and/or its affiliates <open-source-office@arm.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../test_arm_convolve_s8.c"
#include "unity.h"

#ifdef USING_FVP_CORSTONE_300
extern void uart_init(void);
#endif

/* This function is called from the autogenerated file.
 * The name must be exactly like this
 */
void setUp(void)
{ /* This is run before EACH TEST */
#ifdef USING_FVP_CORSTONE_300
    uart_init();
#endif
}

/* This function is called from the autogenerated file.
 * The name must be exactly like this
 */
void tearDown(void) {}

void test_basic_arm_convolve_s8(void) { basic_arm_convolve_s8(); }

void test_stride2pad1_arm_convolve_s8(void) { stride2pad1_arm_convolve_s8(); }

void test_conv_2_arm_convolve_s8(void) { conv_2_arm_convolve_s8(); }

void test_conv_3_arm_convolve_s8(void) { conv_3_arm_convolve_s8(); }

void test_conv_4_arm_convolve_s8(void) { conv_4_arm_convolve_s8(); }

void test_conv_5_arm_convolve_s8(void) { conv_5_arm_convolve_s8(); }

void test_conv_1_x_n_1_arm_convolve_s8(void) { conv_1_x_n_1_arm_convolve_s8(); }

void test_conv_1_x_n_2_arm_convolve_s8(void) { conv_1_x_n_2_arm_convolve_s8(); }

void test_conv_1_x_n_3_arm_convolve_s8(void) { conv_1_x_n_3_arm_convolve_s8(); }

void test_conv_out_activation_arm_convolve_s8(void) { conv_out_activation_arm_convolve_s8(); }

void test_conv_dilation_golden_arm_convolve_s8(void) { conv_dilation_golden_arm_convolve_s8(); }

void test_conv_2x2_dilation_arm_convolve_s8(void) { conv_2x2_dilation_arm_convolve_s8(); }

void test_conv_2x3_dilation_arm_convolve_s8(void) { conv_2x3_dilation_arm_convolve_s8(); }

void test_conv_3x2_dilation_arm_convolve_s8(void) { conv_3x2_dilation_arm_convolve_s8(); }

void test_conv_3x3_dilation_5x5_input_arm_convolve_s8(void) { conv_3x3_dilation_5x5_input_arm_convolve_s8(); }

void test_conv_2x2_dilation_5x5_input_arm_convolve_s8(void) { conv_2x2_dilation_5x5_input_arm_convolve_s8(); }

void test_buffer_size_arm_convolve_s8(void) { buffer_size_arm_convolve_s8(); }

void test_buffer_size_mve_arm_convolve_s8(void) { buffer_size_mve_arm_convolve_s8(); }

void test_buffer_size_dsp_arm_convolve_s8(void) { buffer_size_dsp_arm_convolve_s8(); }
