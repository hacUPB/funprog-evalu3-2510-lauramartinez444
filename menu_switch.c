#include <stdio.h>

int main(int argc, char const *argv[])
{
    int opciones; 
    printf("1. sopa\n2. Pasta\3. Carne\n.4 Vegetariano\n");
    printf("Elija una opción")
    scanf(%d, &opciones);

    //utilizando el condicional multiple switch

    switch (opciones)
    {   {
        case 1: 
            printf("eligió sopa: $10.000\n");
            break;
        
        case 2:
            printf("eligió pasta: $15.000\n");
            break; 
        
        case 3: 
            printf("eligió carne $25.000\n");
            break;

        case 4: 
            printf("eligió vegetariano\n");
            break; 

        default:
            printf("opción no válida\n")
            
        }




    }

}