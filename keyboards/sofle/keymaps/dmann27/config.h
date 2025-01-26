// Copyright 2024 Santosh Kumar (@santosh)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define TRI_LAYER_LOWER_LAYER 2
#define TRI_LAYER_UPPER_LAYER 3
#define TRI_LAYER_ADJUST_LAYER 4

#define ENCODER_DIRECTION_FLIP
//#define ENCODER_A_PINS { F4 }
//#define ENCODER_B_PINS { F5 }

#define ENCODER_A_PINS_RIGHT { F4 }
#define ENCODER_B_PINS_RIGHT { F5 }
//#define ENCODER_RESOLUTIONS_RIGHT { 8 }
//#define ENDODER_DEBOUNCE_INTERVAL 500 // in ms
#undef ENCODER_RESOLUTION 
#define ENCODER_RESOLUTIONS { 2 }
#define ENCODER_RESOLUTIONS_RIGHT { 4 }
