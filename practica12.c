#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3) {
    float media = (nota1 + nota2 + nota3) / 3.0;
    return media;
}

int main() {
    float nota1, nota2, nota3;
    
    printf("Ingrese la nota del primer examen: ");
    scanf("%f", &nota1);
    
    printf("Ingrese la nota del segundo examen: ");
    scanf("%f", &nota2);
    
    printf("Ingrese la nota del tercer examen: ");
    scanf("%f", &nota3);
    
    float media = calcularMedia(nota1, nota2, nota3);
    
    printf("La nota media de los tres exámenes es: %.2f\n", media);
    
    return 0;
}
