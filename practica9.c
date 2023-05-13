#include <stdio.h>
#include conio.h

main(){
    char nombre[11];
    int i=0 ; 
    printf("introduce el nombre :");
    do{
        nombre[i]=getche();
        i++;
    }
    while (i < 9 && nombre[i-1]!='\r');
    if  (nombre[i-1])=='\r')
        (nombre[i-1])='\0');
    else 
        nombre[i]='\0'
    printf("\n El nombre es: %s" , nombre);
}

// Lo he copiado directamente del libro y no compila 
