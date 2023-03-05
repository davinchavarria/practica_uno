/*
Problema 10:

Escriba un programa que reciba un número n e imprima el enésimo número primo.
Ej: Si recibe 4 el programa debe imprimir 7.
Nota: la salida del programa debe ser : El primo numero 4 es : 7.

Observacion: Un numero primo es aquel que solo es divisible por si mismo y el uno::
*/
#include <iostream>

using namespace std;

int main()
{
    int num = 0, num_primo = 0,posicion = 0, iteracion = 1, booleano = 0;//inicializamos variables

    cout<<"Por favor ingrese el numero : ";cin>>num;//pedimos el numero al usuario

    while (posicion < num ){//creamos un ciclo para el numero de el primo
        iteracion += 1;//un iterador para saber que numero es primo
        for (int var = 2; var < iteracion; ++var) {//para mirar multiplos aparte de el mismo numero y el uno
            if ((iteracion%var) == 0){//si tienen multiplos no son primos
                booleano = 1;//cambiamos el valor de booleano
            }
        }
        if (booleano == 0){//sabiendo el valor de booleano podremos incicarle una posicion al primo
            posicion += 1;//se acumula la posicion
            if (posicion == num){//si la posicion es igual a el numero ingresado por el usuario
                num_primo = iteracion;//guardamos el numero
            }
        }
        booleano = 0;//para mantener el orden volvemos a cambiar el valor de booleano
    }
    cout<<"\nEl primo numero "<<num<<" es : "<<num_primo<<". \n";//imprimimos con el formato dado en el problema
    return 0;//retornamos cero como nuen usi de la funcion int
}
