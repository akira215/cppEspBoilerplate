# cppEspBoilerplate

Minimal project with ESP-IDF framework in C++.


## Requirements:

To run on VsCode, the following extension are required:
 - EDP-IDF 
 - the C/C++

## Required components

To decrease complilataion time, in root `CMakeLists.txt`, adjust the following entry:

```
set(COMPONENTS cxx app bootloader bootloader_support
       app_trace app_update efuse esp32 esp_common 
       esp_event esp_rom espcoredump esptool_py freertos heap log 
       pthread perfmon vfs 
       nvs_flash spi_flash partition_table 
       main)
```

This line could be deleted, in this case, every component will be rebuild

## Cpp Componenets

The cpp component are located in the subdirectory `components`, and 
are managed as git submodules. To install them, simply type in the root path of the project:

```
git submodule add https://github.com/akira215/esp-ash-components.git components
```

Or, to clone the repo including the submodules, simply type:
```
git clone --recurse-submodules -j8 https://github.com/akira215/esp-ash-components.git
```
## Custom partition table

Create a partition.csv file and configure menuconfig with custom partition table (F1-> EDP-IDF: SDK Configuration Editor (Menuconfig))
One example is provided in this repo, nevertheless it is not activated in the menuconfig.

## Avoid CMake VsCode extension to run at startup

in settings.json this line is required
```
"cmake.configureOnOpen": false,
```

## Caveats

### To be developped

## Changes

### Version 0.1.0
First available version

## Credits

- Thanks to [@grafalex82](https://github.com/grafalex82/hellozigbee/tree/main/doc) for providing its tutorial that helped a lot.

