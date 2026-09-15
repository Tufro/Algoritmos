/* Para un aplicativo a ejecutarse sobre una plataforma de 32 bits que contendrá una interfaz gráfica de usuario (GUI), se requiere disponer de funciones para el tratamiento de colores de los elementos gráficos de la interfaz. El color de cualquier elemento gráfico se almacenará en una variable de tipo int sin signo de 32 bits, de acuerdo a la convención RGB (ejemplo: un color con representación RGB = 0xFFCCAA se corresponde con 0xFF, 0xCC y 0xAA para las componentes rojo, verde y azul, respectivamente). Se pide:

    Escribir una función denominada get_rojo() que reciba como argumento el color en representación RGB sobre una variable de tipo uint32_t, que devuelva por el nombre la componente de color rojo como un uint8_t. Dar un ejemplo de invocación de la función.

    Idem a. para una función denominada get_verde() que devuelva la componente verde. Dar un ejemplo de invocación de la función.

    Idem a) para una función denominada get_azul() que devuelva la componente Azul. Dar un ejemplo de invocación de la función.

    Escribir una función llamada get_componentesRGB() que reciba como argumentos el color en notación RGB sobre una variable de tipo uint32_t, y devuelva a través de la interfaz las 3 componentes R, G, y B simultáneamente sobre variables de tipo uint8_t. Dar un ejemplo de invocación de esta función.

    Escribir los prototipos de las funciones desarrolladas en los cuatro puntos anteriores.

NOTA: Se debe utilizar operadores de bits y máscaras para la resolución de este ejercicio, y documentar todas y cada una de las funciones desarrolladas.*/

#include "stdio.h"
#include "stdint.h"

uint8_t	get_rojo() {
	
}

