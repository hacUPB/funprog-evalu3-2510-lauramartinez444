#include <stdio.h>
 
int suma(int *, int *);
 
int main(int argc, char const *argv[])  //primero creamos el primer main, asiganandole valores
{
    int resultado, num1, num2;
    num1 = 100;
    num2 = 400;
    resultado = suma(&num1, &num2);
    printf("suma = %d\n", resultado);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
 
int suma(int *ptr_n1, int *ptr_n2) // luego declaramos los punteros dentro del main inicial 
{
    int res_suma;
    res_suma = (*ptr_n1) + (*ptr_n2);
    (*ptr_n1) = 999;
    (*ptr_n2) = 777;
    return res_suma;
}