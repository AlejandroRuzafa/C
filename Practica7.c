#include <stdio.h>

void ordenarArray(int array[], int longitud) {
    int i, j, temp;
    
    for (i = 0; i < longitud - 1; i++) {
        for (j = 0; j < longitud - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numeros[10];
    int i;
    
    printf("Ingrese 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    ordenarArray(numeros, 10);
    
    printf("\nLos números ordenados son:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    
    printf("\n");
    
    return 0;
}

