#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int c1, c2, Resultado; 
    char operacion;
    float Resultadod;
    do
    {
        printf("escriba los números que desea operar");
        scanf("%d%d", &c1, &c2);
        setbuf(stdin, NULL);
        printf("ingrese ? para salir\n");
        printf("1. +\n2. -\n3. *\n4. /\n");
        printf("escriba la operación que desea realizar");
        printf("ingrese ? para salir\n"); 
        scanf("%c", &operacion);

        //Utilizando switch para la calculadora 

        switch (operacion)
        {
        case '+':
        Resultado =c1+c2;
        printf("Resultado: %d \n", Resultado);
        break;

        case '-': 
        Resultado =c1-c2;
        printf("Resultado %d \n", Resultado);
        break;

        case '*':
        Resultado =c1*c2;
        printf("Resultado %d \n", Resultado);
        break; 

        case '/':
        Resultadod =(float)c1/c2;
        printf("Resultadod %f \n", Resultadod); 
        break;

        default:
        if(operacion != '?')
        printf("opción no válida \n");
        break;
        }   

    } while (operacion != '?');
    
return 0;
}