#ifndef TECLADO_H
#define TECLADO_H

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

uint columns[4] = {4, 3, 2, 1}; // colunas do teclado
uint rows[4] = {8, 7, 6, 5}; // linhas do teclado

char KEY_MAP[16] = { '1', '2', '3', 'A',
                     '4', '5', '6', 'B',
                     '7', '8', '9', 'C',
                     '*', '0', '#', 'C'};

void setup_keypad()
{
    for (int i = 0; i < 4; i++)
    {
        gpio_init(columns[i]);
        gpio_set_dir(columns[i], GPIO_IN);
        gpio_pull_up(columns[i]);

        gpio_init(rows[i]);
        gpio_set_dir(rows[i], GPIO_OUT);
        gpio_put(rows[i], 1);
    }
}

#endif // TECLADO_H