#include <stdio.h>
#include <stdlib.h>

int main() {
    int filas, columnas, i, j, opcion, quefila, quecolumna, sumafilas = 0, sumacolumnas = 0;

    printf("Ingrese el numero de filas que tendra su matriz: ");
    scanf("%i", &filas);

    printf("Ingrese el numero de columnas que tendra la matriz: ");
    scanf("%i", &columnas);

    int matriz[filas][columnas];
//Lenado de la matriz
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Ingrese el valor en matriz[%i][%i]", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
        }
    }

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf(" %i ", matriz[i][j]);
        }
        printf("\n");
    }
//Opciones que el usuario puede elegir ya sea sumar fila o sumar fila columna
    printf("¿Que desea sumar? 1. Fila 2.Columna");
    scanf("%i", &opcion);

    if (opcion == 1) {

        printf("¿Que fila quiere sumar?: ");
        scanf("%i", &quefila);

        for (j = 0; j < columnas; j++) {
            sumafilas += matriz[quefila - 1][j];

        }
        printf("La sumatoria de la fila que ha seleccionado es: %i", sumafilas);

    } else if (opcion == 2) {
        printf("¿Que columna desea sumar?: ");
        scanf("%i", &quecolumna);

        for (i = 0; i < filas; i++) {

            sumacolumnas += matriz[i][quecolumna-1];

        }
        //Resultado obtenido
        printf("La sumatoria de la columna que ha seleccionado es: %i", sumacolumnas);

    } else {
        printf(" la Opcion que usted ha seleccionada es invalida");
    }

    return 0;
}
