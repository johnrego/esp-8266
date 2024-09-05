#include "funcao.h"

void f1(void){
    printf("Eu sou a funcao f1.\n");
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    printf("Estou dentro do arquivo funcao.c.\n");
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    printf("Meu cabecalho e funcao.h.\n");
    vTaskDelay(1000 / portTICK_PERIOD_MS);
}