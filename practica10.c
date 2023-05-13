#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char eleccion;
    int resultado, jugar_nuevamente;
    
    srand(time(0)); 
    
    do {
        printf("Elige cara (a) o cruz (b): ");
        scanf(" %c", &eleccion);
       
        resultado = rand() % 2;
        
        if (resultado == 0) {
            printf("¡Cara!\n");
        } else {
            printf("¡Cruz!\n");
        }
        
        if ((eleccion == 'a' && resultado == 0) || (eleccion == 'b' && resultado == 1)) {
            printf("¡Has ganado!\n");
        } else {
            printf("Has perdido.\n");
        }
        
        printf("¿Quieres volver a jugar? (1 para sí, 0 para no): ");
        scanf("%d", &jugar_nuevamente);
        
    } while (jugar_nuevamente == 1);
    
    return 0;
}
