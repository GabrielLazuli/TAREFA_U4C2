#include <stdio.h>
#include <stdlib.h>
#include "include/teclado.h"

void test_keypad()
{
    setup_keypad();

    while (1)
    {
        char key = read_keypad();
        if (key != '\0')
        {
            printf("Tecla pressionada: %c\n", key);
        }
    }
}

int main (){
    test_keypad();

    return 0;
}
