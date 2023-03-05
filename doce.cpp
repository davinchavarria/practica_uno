/*
Problema 12:

Escriba un programa que calcula el máximo factor primo de un número.
Ej: Si se recibe 33 el programa debe imprimir 11.
Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11.

*/
#include <iostream>

using namespace std;

int main()
{
    int num = 0, primo = 0, max_factor_primo = 0;//declaramos variables

    cout<<"Digite un numero: ";cin>>num;//le pedimos al usuario un numero

    for (int var = num-1; var > 0; --var) {//creamos un ciclo para que itere desde num hasta 0
        primo = 1;//cambiamos el valor de primo cada ves que se inicie el ciclo
        for (int j = 2; j < var; ++j) {//creamos otro ciclo para saber si el numero actual es primo
            if ((var%j) == 0){//si el numero no es primo
                primo = 0;//cambiamos el valor de primo
            }

        }
        if ((primo == 1) && ((num%var)==0)){//si el numero es primo y es multiplo de num
            max_factor_primo = var;//guardamos el numero en la variable
            break;//rompemos el ciclo, porque ya encontramos el numero
        }
    }
    cout<<"El mayor factor primo de "<<num<<" es: "<<max_factor_primo<<endl;//imprimimos el resultado

    return 0;//retornamos cero como una buena practica
}
