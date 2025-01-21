#include <stdio.h>

void mostrartexto(char texto[]);


int main() {
    char cadena[100]; // almacenar el texto ingresado por el usuario

    printf("Ingrese un texto:");
    fgets(cadena, sizeof(cadena), stdin); // lee la entrada del usuario, incluyendo espacios

    mostrartexto(cadena);

    return 0;
}

void mostrartexto(char texto[]){
    printf("El texto ingresado es: %s\n", texto);
}
