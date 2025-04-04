#include <stdio.h>
#include <math.h>
int menu(void);
int main(){
float factor_de_potencia(float angulo);
float potencia_aparente(float potencia_activa, float factor_potencia);
float potencia_activa(float potencia_aparente, float factor_potencia);
    return 0
}
    


int main(int argc, char const *argv[])
{
    int opcion;
    encabezado();
    opcion = menu();

    float factor_de_potencia(float angulo) {
        float angulo_rad = angulo * (M_PI / 180.0); 
        return cos(angulo_rad); 
    }
    
    float potencia_aparente(float potencia_activa, float factor_potencia) {
        return potencia_activa / factor_potencia;
    }
    
    float potencia_activa(float potencia_aparente, float factor_potencia) {
        return potencia_aparente * factor_potencia;
    }
    return 0;
}


{   
    int valor_de_voltaje, valor_de_corriente, valor_de_resistencia, resistividad_del material_conductor, 

    printf("1. Ley de OHM\n");
    printf("2. Cálculo del Factor de potencia\n");
    printf("3. Resistencia de un Conductor\n");
    printf("4. Resistencia para LED\n");
    scanf("%d", &opcion);


    switch(opcion)
    float valor_de_voltaje, valor_de_corriente, valor_de_resistencia, resistividad_del material_conductor, 
    {
        case 1: printf("Ingrese que desea calcular: \n") 
                printf("1. Voltaje \n")
                printf("2. Corriente \n") 
                printf("3. Resistencia\n")
            scanf("%d", &opcion);
            switch(opcion)
            {
                case 1: printf("ingrese el valor de Corriente: \n");
                        scanf("%f", &valor_de_corriente);
                        printf("ingrese el valor de la resistencia: \n");
                        scanf("%f", &valor_de_resistencia);

                        (valor_de_voltaje= valor_de_corriente * valor_de_resistencia); 

                        printf("Valor de voltaje: %d \n", valor_de_voltaje)

                case 2: printf("ingrese el valor de voltaje_: \n");
                        scanf("%f", &valor_de_voltaje);
                        printf("ingrese el valor de la resistencia\n");
                        scanf("%f", &valor_de_resistencia);

                        valor_de_corriente = valor_de_voltaje/valor_de_resistencia

                        printf("Valor de corriente: %d \n", valor_de_corriente); 

                case 3: printf("ingrese el valor de voltaje\n");
                        scanf("%f", &valor_de_voltaje);
                        printf("ingrese el valor de Corriente\n");
                        scanf("%f", &valor_de_corriente);

                        valor_de_resistencia = valor_de_voltaje/valor_de_corriente

                        printf("Valor de resistencia: %d \n", valor_de_resistencia); 
            
                    break;
           }
        case 2: printf("ingrese que dato desea calcular: \n")
        printf("1. Factor de potencia \n")
        printf("2. Potencia activa \n") 
        printf("3. Potencia aparente \n")
        scanf("%d", &opcion);
        switch(opcion)

           break;
    }
}