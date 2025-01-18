#include <stdio.h>
#include <stdlib.h>
#include "include/teclado.h"
#include "include/stateLeds.h"

void test_keypad(){
    // Inicializa os pinos de LED e teclado
    setup_leds();
    setup_keypad();

    while (1){
        sleep_ms(50);
        char key = read_keypad(); // Lê a tecla pressionada
        if (key != '\0'){        // Se alguma tecla foi pressionada
            leds(key);          // Aciona o LED correspondente
            printf("Tecla pressionada: %c\n", key);
        }
    }
}

int main (){
    test_keypad();

    return 0;
}
