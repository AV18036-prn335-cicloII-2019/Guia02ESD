#include <stdio.h>

int main(){
    int filas, columnas, i, j;

    printf("Indique las filas que tendra la matriz: ");
    scanf("%i",&filas);

    printf("Indique las columnas que tendra la matriz: ");
    scanf("%i",&columnas);

    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    int suma[filas][columnas];

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("Ingrese valor de matriz1 [%i][%i]: ",i+1,j+1);
            scanf("%i",&matriz1[i][j]);
        }
    }

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf(" %i ",matriz1[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("Ingrese valor de matriz2 [%i][%i]: ",i+1,j+1);
            scanf("%i",&matriz2[i][j]);
        }
    }

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf(" %i ",matriz2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            suma[i][j]= matriz1[i][j] + matriz2[i][j];
        }
    }

    printf(" la Sumatoria de las matrizes  es : \n");

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf(" %i ",suma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
