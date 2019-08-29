#include <stdio.h>

int main() {
    //declaracion de variables a utilizar
    int filas, columnas ,i,j,sumatoriamatriz=0;
    printf("Indique las filas que tendra su matriz");
    scanf("%d",&filas);

    printf("Indique las columnas que tendra su matriz");
    scanf("%d",&columnas);

    int matrizf1[filas][columnas];
//LLenado de las filas y columnas de dicha matriz
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("Ingrese valor de matriz1 [%i][%i]: ",i+1,j+1);
            scanf("%i",&matrizf1[i][j]);
        }
    }

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf(" %i ",matrizf1[i][j]);
        }
        printf("\n");
    }
//Proceso de suma de la matirz con sus elementos
    for (int i = 0; i <filas ; ++i) {
        for (int j = 0; j <columnas ; ++j) {
            sumatoriamatriz=sumatoriamatriz+matrizf1[i][j];

        }
    }
    //Aca imprimimos el resultado de la sumatoria de la matriz ingresada por el usuario
    printf("Imprimiendo la sumatoria de la matiz\n");
    printf("la sumatoria es %d",sumatoriamatriz);


    return 0;
}