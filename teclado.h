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
                     '*', '0', '#', 'C'}


#endif // TECLADO_H