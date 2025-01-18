#ifndef STATELEDS_H
#define STATELEDS_H

#include <stdio.h>
#include "pico/stdlib.h"

// Define os pinos dos LEDs
#define LED_RED    11
#define LED_GREEN  12
#define LED_BLUE   13

// Variáveis de estado dos LEDs
int led_state_red = 0;   // 0: desligado, 1: ligado
int led_state_green = 0;
int led_state_blue = 0;

// Função para configurar os pinos dos LEDs
void setup_leds() {
    gpio_init(LED_RED);
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_init(LED_GREEN);
    gpio_set_dir(LED_GREEN, GPIO_OUT);
    gpio_init(LED_BLUE);
    gpio_set_dir(LED_BLUE, GPIO_OUT);
}

// Função para alternar o estado dos LEDs
void leds(char key) {
    switch (key) {
        case 'A': // LED vermelho
            gpio_put(LED_RED, 1);
        break;
        case 'B': // LED verde
            gpio_put(LED_GREEN, 1);
        break;
        case 'C': // LED azul
            gpio_put(LED_BLUE, 1);
        break;
        case 'D': // Todos os LEDs acesos
            gpio_put(LED_RED, 1);
            gpio_put(LED_GREEN, 1);
            gpio_put(LED_BLUE, 1);
        break;
        case '0': // Desliga todos os LEDs
            gpio_put(LED_RED, 0);
            gpio_put(LED_GREEN, 0);
            gpio_put(LED_BLUE, 0);
        break;
    }
}

#endif  //STATELEDS_H