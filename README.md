# ESP32-S3 Blink LED

The project contains the code to blink the built-in addressable LED of the ESP32-S3 Board. 


## Content

The project **esp32_blink_led** contains one source file in C language [main.c](main/main.c). The file is located in folder [main](main).

ESP-IDF projects are built using CMake. The project build configuration is contained in `CMakeLists.txt`
files that provide set of directives and instructions describing the project's source files and targets
(executable, library, or both). 

Below is short explanation of remaining files in the project folder.

```
├── CMakeLists.txt
├── main
│   ├── CMakeLists.txt
│   └── main.c
└── README.md                  This is the file you are currently reading
```

The project was created based on the template provided by the EspressIf Toolchain by running the command 'idf.py create-project'.


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

To configure the laptop with the required development environment is recommended to use VS Code and the Espressif IDF extension. To use the extension see the [docs](https://github.com/espressif/vscode-esp-idf-extension/blob/HEAD/docs/ONBOARDING.md).



Alternatively the following [ESP-IDF Getting Started Guide](https://idf.espressif.com/) explains how to configure, build and flash the project with the following steps:

* Change into the directory of the project.
* Run `idf.py set-target TARGET` to select the correct chip target to build before opening the project configuration menu. By default the target is `esp32`. For all options see `idf.py set-target --help`
* Run `idf.py menuconfig` to open the project configuration menu
* `idf.py build` to build the project.
* Follow the printed instructions to flash and monitor, or run `idf.py -p PORT flash monitor`.


