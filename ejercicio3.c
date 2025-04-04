#include <stdio.h>

int main(int argc, char const *argv[])
{ 
    int Numero, i;
    printf("Ingrese el numero que desea imprimir en escalera: \n");
    scanf("%d", &Numero);
    
    for(i = 1; i <= Numero; i++)
    {

        for(int j = 1; j <= i; j++)
        {
    
        printf("%d ", j);
    }   
    printf("\n");
    }
return 0;
} 