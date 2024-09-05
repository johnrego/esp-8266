#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
// #include "esp_system.h"
// #include "esp_spi_flash.h"
#include "funcao.h"

void app_main(void){
    printf("Importando biblioteca local.\n");
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    f1();
    vTaskDelay(10000 / portTICK_PERIOD_MS);
}
