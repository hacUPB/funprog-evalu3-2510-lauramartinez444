#include <stdio.h>

int main(int argc, char const *argv[])
{ 
    int N;
    printf("Ingrese el número que desea imprimir la tabla de multiplicar");
    scanf("%d", &N);

    for(int Multiplo= 1; Multiplo <= 10; Multiplo++){
        printf("%d x %d = %d\n", N, Multiplo, N * Multiplo);
    }    
return 0;
}

        

