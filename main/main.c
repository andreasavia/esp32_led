#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "led_strip.h"
#include "sdkconfig.h"

#define BLINK_GPIO               48 /* GPIO 48 for ESP32-S3 built-in addressable LED */
#define BLINK_LED_RMT_CHANNEL    0
#define BLINK_PERIOD             1000

static const char *TAG = "blink";
static uint8_t s_led_state = 0;
static led_strip_t *pStrip_a;

void app_main(void)
{
    ESP_LOGI(TAG, "Example configured to blink addressable LED!");
    pStrip_a = led_strip_init(BLINK_LED_RMT_CHANNEL, BLINK_GPIO, 1); /* LED strip initialization with the GPIO and pixels number*/
    pStrip_a->clear(pStrip_a, 50);                                          /* Set all LED off to clear all pixels */

    while (1)
    {
        ESP_LOGI(TAG, "Turning the LED %s!", s_led_state == true ? "ON" : "OFF");

        if (s_led_state)                                    /* If the addressable LED is enabled */
        {
            pStrip_a->set_pixel(pStrip_a, 0, 116, 16, 16);  /* Set the LED pixel using RGB from 0 (0%) to 255 (100%) for each color */
            pStrip_a->refresh(pStrip_a, 100);               /* Refresh the strip to send data */
        }
        else
        {
            pStrip_a->clear(pStrip_a, 50);                  /* Set all LED off to clear all pixels */
        }

        s_led_state = !s_led_state;                         /* Toggle the LED state */
        vTaskDelay(BLINK_PERIOD / portTICK_PERIOD_MS);
    }
}