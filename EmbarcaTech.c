#include <stdio.h>
#include <stdlib.h>
#include "include/teclado.h"
#include "include/buzzer.h"
#include "include/stateLeds.h"


void test_keypad(){
    // Inicializa os pinos de LED e teclado
    setup_leds();
    setup_keypad();
    setup_buzzer();  // Configura o buzzer

    while (1){
        sleep_ms(50);
        char key = read_keypad(); // Lê a tecla pressionada
        if (key != '\0'){        // Se alguma tecla foi pressionada
            leds(key);          // Aciona o LED correspondente
            printf("Tecla pressionada: %c\n", key);

            // Quando a tecla '#' for pressionada, acionamos o buzzer
            if (key == '#') {
                buzzer_beep(1000, 500);   // Frequência de 1000Hz por 500ms
            }
        }
    }
}

int main (){
    test_keypad();

    return 0;
}