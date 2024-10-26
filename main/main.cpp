#include <iostream>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "main.h"

void Main::run(int i)
{
    std::cout << "Hello World from C++ "<< i << '\n';
    vTaskDelay(pdMS_TO_TICKS(1000));
}

extern "C" void app_main(void)
{
    Main App;
    int i = 0;

    while (true)
    {
        App.run(i);
        i++;
    }    
}