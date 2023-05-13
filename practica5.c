#include <stdio.h>

int main() {
    int opcion;
    double valor;
    
    printf("¿Qué conversión deseas realizar?\n");
    printf("1. De kilómetros a millas.\n");
    printf("2. De millas a kilómetros.\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);
    
    if (opcion == 1) {
        printf("Introduce el valor en kilómetros: ");
        scanf("%lf", &valor);
        double millas = valor * 0.621371;
        printf("%.2f kilómetros equivalen a %.2f millas.\n", valor, millas);
    } else if (opcion == 2) {
        printf("Introduce el valor en millas: ");
        scanf("%lf", &valor);
        double kilometros = valor * 1.60934;
        printf("%.2f millas equivalen a %.2f kilómetros.\n", valor, kilometros);
    }
    
    return 0;
}
