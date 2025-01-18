#ifndef BUZZER_H
#define BUZZER_H

#include "pico/stdlib.h"

// Definir o pino GPIO conectado ao buzzer
#define BUZZER_PIN 21

// Função para configurar o pino do buzzer
void setup_buzzer() {
    gpio_init(BUZZER_PIN);          // Inicializa o pino
    gpio_set_dir(BUZZER_PIN, GPIO_OUT); // Configura como saída
    gpio_put(BUZZER_PIN, 0);           // Garante que o buzzer comece desligado
}

// Função para gerar um som de uma determinada frequência (em Hz) no buzzer
void buzzer_beep(int frequency, int duration_ms) {
    int period = 1000000 / frequency;  // Calcula o período da frequência em microssegundos
    int cycles = (duration_ms * 1000) / period;  // Quantos ciclos de som em um tempo de duração

    for (int i = 0; i < cycles; i++) {
        gpio_put(BUZZER_PIN, 1);   // Liga o buzzer (HIGH)
        sleep_us(period / 2);       // Espera metade do período
        gpio_put(BUZZER_PIN, 0);   // Desliga o buzzer (LOW)
        sleep_us(period / 2);       // Espera a outra metade do período
        sleep_ms(5);                // Adiciona um pequeno atraso de 5ms entre os ciclos
    }
}

#endif // BUZZER_H