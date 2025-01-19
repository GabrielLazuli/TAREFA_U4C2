#ifndef STATELEDS_H
#define STATELEDS_H

#include <stdio.h>
#include "pico/stdlib.h"

// Define os pinos dos LEDs
#define LED_RED    13
#define LED_GREEN  11
#define LED_BLUE   12

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
            if (led_state_red == 0) {
                gpio_put(LED_RED, 1);  // Liga o LED vermelho
                led_state_red = 1;     // Atualiza o estado
            } else {
                gpio_put(LED_RED, 0);  // Desliga o LED vermelho
                led_state_red = 0;     // Atualiza o estado
            }
            break;
        case 'B': // LED verde
            if (led_state_green == 0) {
                gpio_put(LED_GREEN, 1);  // Liga o LED verde
                led_state_green = 1;     // Atualiza o estado
            } else {
                gpio_put(LED_GREEN, 0);  // Desliga o LED verde
                led_state_green = 0;     // Atualiza o estado
            }
            break;
        case 'C': // LED azul
            if (led_state_blue == 0) {
                gpio_put(LED_BLUE, 1);  // Liga o LED azul
                led_state_blue = 1;     // Atualiza o estado
            } else {
                gpio_put(LED_BLUE, 0);  // Desliga o LED azul
                led_state_blue = 0;     // Atualiza o estado
            }
            break;
        case 'D': // Todos os LEDs
            if (led_state_red == 0 && led_state_green == 0 && led_state_blue == 0) {
                gpio_put(LED_RED, 1);   // Liga todos os LEDs
                gpio_put(LED_GREEN, 1);
                gpio_put(LED_BLUE, 1);
                led_state_red = 1;
                led_state_green = 1;
                led_state_blue = 1;
            } else {
                gpio_put(LED_RED, 0);   // Desliga todos os LEDs
                gpio_put(LED_GREEN, 0);
                gpio_put(LED_BLUE, 0);
                led_state_red = 0;
                led_state_green = 0;
                led_state_blue = 0;
            }
            break;
        case '1': 
            
                gpio_put(LED_RED, 1);  // Liga o LED vermelho
                led_state_red = 1;     // Atualiza o estado
                sound_pattern_1();     // Chama uma função de ativar o buzzer
                gpio_put(LED_RED, 0);  // Desliga o LED vermelho
                led_state_red = 0;     // Atualiza o estado
            break;
        case '2': 
                        gpio_put(LED_BLUE, 1);  // Liga o LED azul
                led_state_blue = 1;     // Atualiza o estado
                sound_pattern_2();      // Chama uma função de ativar o buzzer
                gpio_put(LED_BLUE, 0);  // Desliga o LED azul
                led_state_blue = 0;     // Atualiza o estado
            break;
        case '3': 
                gpio_put(LED_GREEN, 1);  // Liga o LED verde
                led_state_green = 1;     // Atualiza o estado
                sound_pattern_3();       // Chama uma função de ativar o buzzer
                gpio_put(LED_GREEN, 0);  // Desliga o LED verde
                led_state_green = 0;     // Atualiza o estado
            break;
        case '0': // Desliga todos os LEDs
            gpio_put(LED_RED, 0);
            gpio_put(LED_GREEN, 0);
            gpio_put(LED_BLUE, 0);
            led_state_red = 0;
            led_state_green = 0;
            led_state_blue = 0;
            break;
    }
}

#endif  //STATELEDS_H