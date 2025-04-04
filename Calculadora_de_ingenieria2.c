#include <stdio.h>
#include <math.h> 
#include <stdlib.h>

float factor_de_potencia(float angulo);
float potencia_aparente(float potencia_activa, float factor_potencia);
float potencia_activa(float potencia_aparente, float factor_potencia);
int menu(void);
void encabezado(void); 
void calcular_resistencia_leds(void);

#define PI 3.14159265 
#define valor_resistividad_del_oro 2.35e-8
#define valor_resistividad_de_la_plata 1.59e-8
#define valor_resistividad_del_cobre 1.71e-8
#define valor_de_resistividad_del_aluminio 2.82e-8

int main() {
    int opcion;
    float valor_de_voltaje, valor_de_corriente, valor_de_resistencia, factor_potencia_val, potencia_activa_val, potencia_aparente_val, angulo, resistencia_de_un_conductor, longitud, area_transversal, valor_resistividad_otro;
    float coeficiente_de_resistividad; // Declaración de variable faltante
    float valor_de_voltaje_fuente, numero_de_leds, voltaje_de_los_leds, corriente_de_los_leds; // Declaraciones de variables faltantes
    float resistencia_de_led1; // Declaración de variable faltante
    float resistencia_de_led2; // Declaración de variable faltante

    encabezado();
    opcion = menu();

    printf("1. Ley de OHM\n");
    printf("2. Cálculo del Factor de potencia\n");
    printf("3. Resistencia de un Conductor\n");
    printf("4. Resistencia para LED\n");
    scanf("%d", &opcion);
    
    switch(opcion) {
        case 1:
            printf("Ingrese que desea calcular\n");
            printf("1. Voltaje \n");
            printf("2. Corriente \n"); 
            printf("3. Resistencia\n");
            scanf("%d", &opcion);
            switch(opcion) {
                case 1:
                    printf("Ingrese el valor de Corriente\n");
                    scanf("%f", &valor_de_corriente);
                    printf("Ingrese el valor de resistencia\n");
                    scanf("%f", &valor_de_resistencia);
                    valor_de_voltaje = valor_de_corriente * valor_de_resistencia;
                    printf("El valor del voltaje es: %.2f VA\n", valor_de_voltaje);
                    break;
                case 2:
                    printf("Ingrese el valor de voltaje \n");
                    scanf("%f", &valor_de_voltaje);
                    printf("Ingrese el valor de resistencia ");
                    scanf("%f", &valor_de_resistencia);
                    valor_de_corriente = valor_de_voltaje / valor_de_resistencia;
                    printf("El valor de corriente es: %.2f VA\n", valor_de_corriente);
                    break;
                case 3:
                    printf("Ingrese el valor de voltaje\n");
                    scanf("%f", &valor_de_voltaje);
                    printf("Ingrese el valor de corriente\n");
                    scanf("%f", &valor_de_corriente);
                    valor_de_resistencia = valor_de_voltaje / valor_de_corriente;
                    printf("El valor de resistencia es: %.2f VA\n", valor_de_resistencia);
                    break;
                default:
                    printf("Opción no válida.\n");
            }
            break; 
        case 2:
            printf("Ingrese que desea calcular\n");
            printf("1. Factor de potencia \n");
            printf("2. Potencia aparente \n"); 
            printf("3. Potencia activa \n");
            scanf("%d", &opcion);
            switch(opcion) {
                case 1: 
                    printf("Introduce el ángulo en grados: ");
                    scanf("%f", &angulo);
                    factor_potencia_val = factor_de_potencia(angulo);
                    printf("Factor de potencia: %.2f\n", factor_potencia_val);
                    break;
                case 2: 
                    printf("Introduce la potencia activa en watts: ");
                    scanf("%f", &potencia_activa_val);
                    printf("Introduce el factor de potencia: ");
                    scanf("%f", &factor_potencia_val);
                    potencia_aparente_val = potencia_aparente(potencia_activa_val, factor_potencia_val);
                    printf("Potencia aparente: %.2f VA\n", potencia_aparente_val);
                    break;
                case 3: 
                    printf("Introduce la potencia aparente en VA: ");
                    scanf("%f", &potencia_aparente_val);
                    printf("Introduce el factor de potencia: ");
                    scanf("%f", &factor_potencia_val);
                    potencia_activa_val = potencia_activa(potencia_aparente_val, factor_potencia_val);
                    printf("Potencia activa: %.2f vatios\n", potencia_activa_val);
                    break;
                default:
                    printf("Opción no válida.\n");
            }
            break;

        case 3: 
            printf("Ingrese el material al que le desea calcular el coeficiente de resistividad \n");
            printf("1. Oro \n");
            printf("2. Cobre \n"); 
            printf("3. Aluminio \n");
            printf("4. Plata \n");
            printf("5. Otro \n");
            scanf("%d", &opcion);
            switch(opcion) { // Agregado switch para manejar las opciones
                case 1: 
                    printf("Ingrese la longitud del conductor en metros \n");
                    scanf("%f", &longitud);
                    printf("Ingrese del area transversal \n");
                    scanf("%f", &area_transversal);
                    resistencia_de_un_conductor = longitud / area_transversal; // Mover la declaración aquí
                    coeficiente_de_resistividad = valor_resistividad_del_oro * resistencia_de_un_conductor;
                    printf("El coeficiente de resistividad es: %.2f VA\n", coeficiente_de_resistividad);
                    break;
                case 2: 
                    printf("Ingrese la longitud del conductor en metros \n");
                    scanf("%f", &longitud);
                    printf("Ingrese del area transversal \n");
                    scanf("%f", &area_transversal);
                    resistencia_de_un_conductor = longitud / area_transversal; // Mover la declaración aquí
                    coeficiente_de_resistividad = valor_resistividad_del_cobre * resistencia_de_un_conductor;
                    printf("El coeficiente de resistividad es: %.2f VA\n", coeficiente_de_resistividad);
                    break;
                case 3: 
                    printf("Ingrese la longitud del conductor en metros \n");
                    scanf("%f", &longitud);
                    printf("Ingrese del area transversal \n");
                    scanf("%f", &area_transversal);
                    resistencia_de_un_conductor = longitud / area_transversal; // Mover la declaración aquí
                    coeficiente_de_resistividad = valor_de_resistividad_del_aluminio * resistencia_de_un_conductor;
                    printf("El coeficiente de resistividad es: %.2f VA\n", coeficiente_de_resistividad);
                    break;
                case 4: 
                    printf("Ingrese la longitud del conductor en metros \n");
                    scanf("%f", &longitud);
                    printf("Ingrese del area transversal \n");
                    scanf("%f", &area_transversal);
                    resistencia_de_un_conductor = longitud / area_transversal; // Mover la declaración aquí
                    coeficiente_de_resistividad = valor_resistividad_de_la_plata * resistencia_de_un_conductor;
                    printf("El coeficiente de resistividad es: %.2f VA\n", coeficiente_de_resistividad);
                    break;
                case 5: 
                    printf("Ingrese la longitud del conductor en metros \n");
                    scanf("%f", &longitud);
                    printf("Ingrese del area transversal \n");
                    scanf("%f", &area_transversal);
                    printf("Ingrese el valor de resistividad del material que va a usar \n");
                    scanf("%f", &valor_resistividad_otro);
                    resistencia_de_un_conductor = longitud / area_transversal; // Mover la declaración aquí
                    coeficiente_de_resistividad = valor_resistividad_otro * resistencia_de_un_conductor;
                    printf("El coeficiente de resistividad es: %.2f VA\n", coeficiente_de_resistividad);
                    break;
                default:
                    printf("Opción no válida.\n");
            }
            break;

        case 4: 
            printf("Ingrese el valor de voltaje de la fuente \n");
            scanf("%f", &valor_de_voltaje_fuente);
            printf("Ingrese el número de leds que tiene conectado el circuito \n");
            scanf("%f", &numero_de_leds);
            printf("Ingrese el voltaje de los LEDS\n");
            scanf("%f", &voltaje_de_los_leds);
            printf("Ingrese la corriente de los LEDS\n");
            scanf("%f", &corriente_de_los_leds);
            printf("Ingrese como se encuentran conectados los LEDS\n");
            printf("1. Paralelo \n");
            printf("2. Serie \n"); 
            scanf("%d", &opcion);
            switch(opcion) {
                case 1: 
                    resistencia_de_led1 = (voltaje_de_los_leds / corriente_de_los_leds) * numero_de_leds;
                    printf("Resistencia necesaria para conexión en paralelo: %.2f ohmios\n", resistencia_de_led1);
                    break;
                case 2:
                    resistencia_de_led2 = (voltaje_de_los_leds * numero_de_leds) / corriente_de_los_leds;
                    printf("Resistencia necesaria para conexión en serie: %.2f ohmios\n", resistencia_de_led2);
                    break;
                default:
                    printf("Opción no válida.\n");
            }
            break;

        default:
            printf("Opción no válida.\n");
    }

    return 0; 
}