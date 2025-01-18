#ifndef TECLADO_H
#define TECLADO_H

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

// definição dos pinos que serão conectados as colunas/linhas do teclado matricial
uint columns[4] = {16, 9, 8, 4};
uint rows[4] = {17, 18, 19, 20};

// mapeamento das teclas
char KEY_MAP[16] = { '1', '2', '3', 'A',
                     '4', '5', '6', 'B',
                     '7', '8', '9', 'C',
                     '*', '0', '#', 'D' };

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

char read_keypad()
{
    for (int row = 0; row < 4; row++)
    {
        gpio_put(rows[row], 0); // define o estado da linha atual como baixo (LOW)

        for (int col = 0; col < 4; col++)
        {
            if (gpio_get(columns[col]) == 0) // verifica se a coluna está no estado baixo (LOW)
            {
                while (gpio_get(columns[col]) == 0); // espera até que a tecla seja liberada
                gpio_put(rows[row], 1); // redefine o estado da linha para alto (HIGH)
                return KEY_MAP[row * 4 + col]; // retorna o valor da tecla
            }
        }

        gpio_put(rows[row], 1); // redefine a linha para alto (HIGH)
    }

    return '\0'; // retorna o caractere nulo se nenhuma tecla for pressionada
}

#endif // TECLADO_H