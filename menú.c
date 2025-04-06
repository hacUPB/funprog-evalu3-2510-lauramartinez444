#include <stdio.h>

int main(int argc, char const *argv[])
{
    int opciones; 
    printf("1. sopa\n2. Pasta\3. Carne\n.4 Vegetariano\n");
    printf("Elija una opción")
    scanf(%d, &opciones);

    if (opciones == 1){

        Printf("eligió Sopa $10.000\n");
    }
    else if (opciones == 2){
        printf("eligió Pasta $15.000\n");
    }
    else if (opciones ==3){
        printf("eligió carne $25.000\n");
    }
    else if (opciones ==4){
        printf("eligió Vegetariano $20.000 \n");
    }
    else 
    {
        printf("opción no válida\n") 
    }
    return 0

} 