#ifndef BUZZER_H
#define BUZZER_H

#include "pico/stdlib.h"
#include "include/teclado.h"

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

// Som para tecla 1
void sound_pattern_1() {
    buzzer_beep(800, 200);  // Frequência 800Hz por 200ms
    sleep_ms(100);          // Pausa entre os beeps
    buzzer_beep(800, 200);  // Frequência 800Hz por 200ms
}

// Som para tecla 2
void sound_pattern_2() {
    buzzer_beep(1000, 400); // Frequência 1000Hz por 400ms
    sleep_ms(50);           // Pausa entre os beeps
    buzzer_beep(1200, 300); // Frequência 1200Hz por 300ms
}

// Som para tecla 3
void sound_pattern_3() {
    for (int i = 0; i < 3; i++) {
        buzzer_beep(1400, 150); // Frequência 1400Hz por 150ms
        sleep_ms(100);          // Pausa entre os beeps
    }
}

// toque 1 tecla 4
void ringtone_1() 
{
    buzzer_beep(1000, 100);
    sleep_ms(100);
    buzzer_beep(1200, 100); 
    sleep_ms(100);
    buzzer_beep(1000, 100); 
    sleep_ms(200);
    buzzer_beep(1200, 100); 
    sleep_ms(100);
    buzzer_beep(1000, 100); 
    sleep_ms(400);
}

void ringtone_2()
{
    buzzer_beep(700, 150);
    sleep_ms(150);
    buzzer_beep(900, 150);
    sleep_ms(150);
    buzzer_beep(1100, 150);
    sleep_ms(150);
    buzzer_beep(900, 150);
    sleep_ms(150);
    buzzer_beep(700, 150);
    sleep_ms(500);
}

void ringtone_3()
{
    buzzer_beep(880, 200);
    sleep_ms(200);
    buzzer_beep(1000, 200);
    sleep_ms(200);
    buzzer_beep(880, 200);
    sleep_ms(200);
    buzzer_beep(1000, 200);
    sleep_ms(200);
    buzzer_beep(880, 200);
    sleep_ms(800);
}

void ringtone_4()
{
    buzzer_beep(600, 250);
    sleep_ms(250);
    buzzer_beep(700, 250);
    sleep_ms(250);
    buzzer_beep(800, 250);
    sleep_ms(250);
    buzzer_beep(700, 250);
    sleep_ms(250);
    buzzer_beep(600, 250);
    sleep_ms(500);   
}



#endif // BUZZER_H