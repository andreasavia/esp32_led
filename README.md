# ESP32-S3 Blink LED

This is a project created to blink the built-in addressable LED of the ESP32-S3 Board.

## Hardware

* A development board with ESP32-S3
* A USB cable for Power supply and programming

The following development board has been used for the development of this project.

| Board                | LED type             | Pin                  |
| -------------------- | -------------------- | -------------------- |
| ESP32-S3-DevKitC-1   | Addressable          | GPIO48               |

See [Development Board ESP32-S3-DevKitC-1](https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html) for more information about it.

See [WS2812](http://www.world-semi.com/Certifications/WS2812B.html) for more information about the addressable LED.

See [LED Strip Example](https://github.com/espressif/esp-idf/tree/master/examples/peripherals/rmt/led_strip) to review other examples on how to control LED peripherals with an ESP32 board.


## Toolchain

To configure the laptop with the required development environment be sure to follow the [ESP-IDF Getting Started Guide](https://idf.espressif.com/)

To configure, build and flash the project:

* Change into the directory of the project.
* Run `idf.py set-target TARGET` to select the correct chip target to build before opening the project configuration menu. By default the target is `esp32`. For all options see `idf.py set-target --help`
* Run `idf.py menuconfig` to open the project configuration menu
* `idf.py build` to build the project.
* Follow the printed instructions to flash and monitor, or run `idf.py -p PORT flash monitor`.

