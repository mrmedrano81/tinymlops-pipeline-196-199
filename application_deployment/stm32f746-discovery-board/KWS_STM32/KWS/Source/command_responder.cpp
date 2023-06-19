/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "command_responder.h"
#include "stm32746g_discovery_lcd.h"
#include <cstdio>

void RespondToCommand(tflite::ErrorReporter* error_reporter, int32_t current_time, 
    const char* found_command, uint8_t score, bool is_new_command) {
        if (is_new_command == true) {
            BSP_LCD_Clear(LCD_COLOR_BLACK);
            if (found_command == "unknown") {
                BSP_LCD_SetTextColor(LCD_COLOR_RED);
                BSP_LCD_SetBackColor(LCD_COLOR_BLACK);
            }
            else {
                BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
                BSP_LCD_SetBackColor(LCD_COLOR_BLACK);
            }

            BSP_LCD_SetFont(&LCD_DEFAULT_FONT);
            BSP_LCD_DisplayStringAt(0, 50, (uint8_t *)found_command, CENTER_MODE);
            
            uint8_t percent_score = (score*10)/25;

            char str_score[16]; // Assuming a 16-character LCD display
            sprintf(str_score, "%d", percent_score); // Convert the integer to a string
            BSP_LCD_DisplayStringAt(0, 100, reinterpret_cast<uint8_t *>(str_score), CENTER_MODE);
            TF_LITE_REPORT_ERROR(error_reporter, "%s %d", found_command, score);
        }
}