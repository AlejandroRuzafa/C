#include <stdio.h>

int main() {
    float num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    
    float suma = num1 + num2;
    float resta = num1 - num2;
    float multiplicacion = num1 * num2;
    float division = num1 / num2;

    printf("Suma: %f\n", suma);
    printf("Resta: %f\n", resta);
    printf("Multiplicación: %f\n", multiplicacion);
    printf("División: %f\n", division);
    
    return 0;
}
