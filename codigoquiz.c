#include <stdio.h> // me faltó poner el #include y el .h

int main()
{
    int secreto, adivinacion, intentos = 0, adivinacion =100;
    secreto = 15;
    printf("Bienvenido a adivina un número del 1 al 100"); // simplifique los textos
    printf("Ingresa tu intento, \n"); //me faltó poner que las comillas tambien acobijen el \n
     while(adivinacion != secreto){ //me enredé usando un do while en el examen 
    scanf("%d" &adivinacion); //me faltó colocar correctamente el scanf 
        if("%d%d" adivinacion > secreto){ //declaré la misma variable dentro del if que del while
            printf("El número es menor. intenta nuevamente");
            }else if("%d%d" adivinación  < secreto);
            printf("el numero es mayor. intenta nuevamente");
            (intentos + 1); 
    }
    printf("Felicidades adivinaste el número"); intentos;
    return 0;