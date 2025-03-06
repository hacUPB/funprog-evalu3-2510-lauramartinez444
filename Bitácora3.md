## 1. Código fuente 📔📒💡

El **código fuente** es un conjunto de líneas de texto que expresan, en un lenguaje de programación determinado, los pasos que debe seguir una computadora para ejecutar un programa específico. Este código es legible por humanos pero no por máquinas, por lo que debe ser traducido a código binario mediante compiladores, ensambladores o intérpretes para ser ejecutado por el hardware de un sistema informático

## 2. Código objeto 📌🗳️

El **código objeto** es el resultado de compilar el código fuente en un formato que aún no es ejecutable directamente por la máquina, pero que ya está más cerca del lenguaje máquina. El código objeto suele ser generado por un compilador y luego se enlaza con bibliotecas y otros archivos objeto para crear un ejecutable final. Aunque no está explícitamente definido en los resultados de búsqueda, es un concepto ampliamente conocido en la programación

## 3. Lenguaje ensamblador 📫

El **lenguaje ensamblador** es un lenguaje de bajo nivel que utiliza símbolos mnemotécnicos para representar instrucciones de máquina. Cada instrucción en ensamblador corresponde a una instrucción específica del procesador, lo que lo hace muy eficiente para programar directamente el hardware. Aunque no está explícitamente definido en los resultados de búsqueda, es un concepto fundamental en la programación de sistemas

## 4. Compilador 💽🖲️

Un **compilador** es un programa que traduce el código fuente escrito en un lenguaje de programación a código máquina o binario, que puede ser ejecutado directamente por el hardware de una computadora. Este proceso de traducción se realiza en una sola etapa, generando un archivo ejecutable que puede ser ejecutado sin necesidad de intervención adicional del compilador.

## 5. Diferencia entre un lenguaje compilado y uno interpretado 📋📇🗂️📂

- **Lenguaje compilado**: Un lenguaje compilado es aquel en el que el código fuente se traduce completamente a código máquina antes de su ejecución. Esto significa que el programa se compila en un archivo ejecutable que puede ser ejecutado directamente por la computadora sin necesidad de un intérprete. Ejemplos de lenguajes compilados incluyen C y C++.

- **Lenguaje interpretado**: Un lenguaje interpretado es aquel en el que el código fuente se ejecuta línea por línea en tiempo de ejecución, sin necesidad de una compilación previa. Un intérprete lee el código fuente y lo ejecuta directamente, sin generar un archivo ejecutable. Ejemplos de lenguajes interpretados incluyen Python y JavaScript (aunque JavaScript puede ser compilado en algunos casos, como en Node.js).

La principal diferencia entre ambos es el momento en que se realiza la traducción del código fuente a código ejecutable: antes de la ejecución en los lenguajes compilados, y durante la ejecución en los lenguajes interpretados

Citations:
1. https://www.ceupe.com/blog/codigo-fuente.html
2. https://docs.github.com/es/get-started/learning-about-github/github-glossary
3. https://www.jvs-informatica.com/blog/glosario/codigo-fuente/
4. https://bitbucket.org/product/es/code-repository
5. https://concepto.de/codigo-fuente/
6. https://bitbucket.org/product/es/guides/basics/four-starting-steps
7. https://es.wikipedia.org/wiki/C%C3%B3digo_fuente
8. https://docs.aws.amazon.com/es_es/codecatalyst/latest/userguide/source-concepts.html
9. https://www.ionos.com/es-us/digitalguide/paginas-web/desarrollo-web/codigo-fuente-definicion-con-ejemplos/
10. https://www.hackio.com/blog/codigo-fuente-que-es-y-como-escribirlo

# PÁRRAFO DE CONCLUSIONES SOBRE EL PROCESO DE COMPILACIÓN 
En conclusión, el proceso de compilación de un programa en C involucra varias etapas cruciales: preprocesamiento, compilación, ensamblaje y enlace. Cada etapa tiene una función específica, desde el procesamiento de directivas y macros por parte del preprocesador hasta la generación del ejecutable final por el linker. Al entender y ejecutar estas etapas de forma independiente, se puede obtener un control más detallado sobre el proceso de compilación, lo que es especialmente útil para depuración y optimización. Además, la capacidad de manipular flags de compilación permite ajustar el nivel de optimización y advertencias, lo cual es esencial para mejorar el rendimiento y la calidad del código.

Claro, aquí tienes un resumen de la información sobre el proceso de compilación de un programa en C:

# El proceso de compilación consta de cuatro etapas principales:
1. **Preprocesamiento**: El preprocesador analiza el código fuente, procesa directivas como `#include` y `#define`, y elimina comentarios. El resultado es un archivo de texto intermedio.
   
2. **Compilación**: El compilador traduce el código preprocesado a lenguaje ensamblador, aplicando optimizaciones si se especifican.

3. **Ensamblaje**: El ensamblador convierte el código ensamblador a código objeto, que contiene código máquina pero no es ejecutable por sí solo.

4. **Enlace**: El linker combina los archivos objeto con librerías necesarias para producir el ejecutable final.

Cada etapa puede ser ejecutada de forma independiente utilizando comandos específicos en la consola. Además, se pueden utilizar flags para ajustar el nivel de optimización y advertencias durante la compilación.