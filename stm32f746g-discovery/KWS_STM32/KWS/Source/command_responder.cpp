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

void RespondToCommand(tflite::ErrorReporter* error_reporter, int32_t current_time, 
            const char* found_command, uint8_t score, bool is_new_command) {
        
        if (is_new_command == true) {
            //TF_LITE_REPORT_ERROR(error_reporter, "Command: %s, Score: %d, Time: %dms", found_command, score, current_time);
            
            BSP_LCD_Clear(LCD_COLOR_BLACK);
            BSP_LCD_SetTextColor(LCD_COLOR_WHITE);
            BSP_LCD_SetBackColor(LCD_COLOR_GREEN);
            BSP_LCD_SetFont(&LCD_DEFAULT_FONT);
            BSP_LCD_DisplayStringAt(0, 200, (uint8_t *)found_command, CENTER_MODE);
        }
}