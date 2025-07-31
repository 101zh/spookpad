#pragma once

#define ENCODER_A_PINS {GP3}
#define ENCODER_B_PINS {GP4}
#define ENCODER_DIRECTION_FLIP

#ifdef OLED_ENABLE
#    define I2C1_SDA_PIN GP6
#    define I2C1_SCL_PIN GP7
#    define OLED_DISPLAY_128X32
#    define OLED_BRIGHTNESS 255 // Max brightness (0-255)
#    define OLED_UPDATE_INTERVAL 100

#endif

// #define WS2812_DI_PIN GP0
// #define RGBLIGHT_LED_COUNT 9
