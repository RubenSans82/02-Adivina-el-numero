#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    srand(time(NULL));
    int numero = rand() % 100 + 1;
    int intento;
    int intentos_max = 7;
    printf("Tienes %d intentos €€€ para adivinar el numero entre 1 y 100.\n", intentos_max);
    for (int i = 1; i <= intentos_max; i++) {
        printf("Intento %d: ", i);
        scanf("%d", &intento);
        if (intento == numero) {
            printf("Felicidades! Adivinaste el numero.\n");
            return 0;
        } else if (intento < numero) {
            printf("El numero es mayor.\n");
        } else {
            printf("El numero es menor.\n");
        }
    }
    printf("Lo siento, has agotado tus %d intentos. El numero era %d.\n", intentos_max, numero);
    return 0;
}
