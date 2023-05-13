#include <stdio.h>

int main() {
    int tabla, respuesta, contador = 0;
    
    printf("Ingresse la tabla de multiplicar que desea practicar: ");
    scanf("%d", &tabla);
    
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = ", tabla, i);
        scanf("%d", &respuesta);
        
        if (respuesta == tabla * i) {
            printf("¡Correcto!\n");
            contador++;
        } else {
            printf("Respuesta incorrecta. La respuesta correcta es: %d\n", tabla * i);
            break;
        }
        
        if (contador == 10) {
            printf("¡Felicidades! has acerttado todas las respuestas .\n");
            break;
        }
    }
    
    return 0;
}
