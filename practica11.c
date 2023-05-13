#include <stdio.h>

char calcularLetraDNI(int dni) {
    char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    int indice = dni % 23;
    return letras[indice];
}

int main() {
    int dni;
    
    printf("Ingrese los 8 primeros números del DNI: ");
    scanf("%d", &dni);
    
    char letra = calcularLetraDNI(dni);
    
    printf("El DNI completo es: %d%c\n", dni, letra);
    
    return 0;
}
