# The following lines of boilerplate have to be in your project's CMakeLists
# in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 23)

#set(EXTRA_COMPONENT_DIRS components)
#set(COMPONENTS cxx app bootloader
#        app_trace app_update bootloader_support 
#        driver efuse esp32 esp_common 
#        esp_event esp_rom espcoredump esptool_py freertos heap log 
#        nvs_flash partition_table perfmon pthread soc spi_flash unity vfs 
#        main)
set(COMPONENTS cxx app bootloader bootloader_support
       app_trace app_update efuse esp32 esp_common 
       esp_event esp_rom espcoredump esptool_py freertos heap log 
       pthread perfmon vfs 
       nvs_flash spi_flash partition_table 
       main)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(cppBEspBoilerplate VERSION 0.1.0)
