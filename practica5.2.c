#include <stdio.h>

int main() {
    double num1, num2;
    int opcion;
    
    printf("Ingrese el primer número: ");
    scanf("%lf", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%lf", &num2);
    
    printf("Elija una opción:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);
    
    switch (opcion) {
        case 1:
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("No se puede dividir entre cero.\n");
            }
        return 0;
    }
}
