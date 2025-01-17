#ifndef TECLADO_H
#define TECLADO_H

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

// definição dos pinos que serão conectados as colunas/linhas do teclado matricial
uint columns[4] = {4, 3, 2, 1}; // colunas do teclado
uint rows[4] = {8, 7, 6, 5}; // linhas do teclado

// mapeamento das teclas
char KEY_MAP[16] = { '1', '2', '3', 'A',
                     '4', '5', '6', 'B',
                     '7', '8', '9', 'C',
                     '*', '0', '#', 'C'};

// função de configuração dos pinos (colunas e linhas)
void setup_keypad()
{
    for (int i = 0; i < 4; i++)
    {
        gpio_init(columns[i]); // inicializa o pino como uma GPIO
        gpio_set_dir(columns[i], GPIO_IN); // configura o pino coluna como entrada
        gpio_pull_up(columns[i]); // ativação de resistor pull-up que quando precionado vai puxar o pino do estado 1 (HIGH) para o 0 (LOW)

        gpio_init(rows[i]); // inicializa o pino como uma GPIO
        gpio_set_dir(rows[i], GPIO_OUT); // configura o pino como saida
        gpio_put(rows[i], 1); // define o estado logico das linhas como 1 (HIGH)
    }
}

#endif // TECLADO_H