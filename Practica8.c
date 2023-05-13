#include <stdio.h>

float AreaTriangulo(float base, float altura) {
    float area = (base * altura) / 2.0;
    return area;
}

int main() {
    float base, altura;
    
    printf("Ingrese la base del triángulo: ");
    scanf("%f", &base);
    
    printf("Ingrese la altura del triángulo: ");
    scanf("%f", &altura);
    
    float area = AreaTriangulo(base, altura);
    
    printf("El área del triángulo es: %.2f\n", area);
    
    return 0;
}
