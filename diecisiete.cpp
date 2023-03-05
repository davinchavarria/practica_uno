/*
Problema 17:

La secuencia de números triangulares se forma al sumar su posición en el arreglo con el valor del número anterior:
1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...

Si listamos los números triangulares y sus divisores tenemos:

01: 01
03: 01,03
06: 01,02,03,06
10: 01,02,05,10
15: 01,03,05,15
21: 01,03,07,21
28: 01,02,04,07,14,28

Se observa que 28 es el primer número triangular que tiene más de 5 divisores.
Escriba un programa que reciba un número k y calcule cual es el primer número triangular que tiene más de k
divisores. Tip: el enésimo número triangular se puede representar como n*(n+1)/2.

Nota: la salida del programa debe ser: El numero es: 28 que tiene 6 divisores.

*/
#include <iostream>

using namespace std;

int divisores(int num){//creamos una funcion para saber la cantidad de divisores de un numero
    int multiplos = 0;//declaramos la variable que va a tener la cantidad de multiplos
    for (int var = num; var > 0; --var) {//creamos un ciclo para que se itere desde el numero num asta uno
        if (num%var==0){//si el numero actual es multiplo de num
            multiplos += 1;//se le agregara +1 a la variable multiplos
        }
    }
    return multiplos;//se retorna la cantidad de divisores
}

int main()
{
    int n, triangular = 0, enesimo = 0, trwe = 0;//Declaramos variables

    cout<<"Ingrese un  numero: "; cin>>n;//Pedimos numero al usuario

    while (trwe != 1){//Para cerrar el ciclo creamos una variable que tenga dos estados "0 y 1"
        enesimo += 1;//creamos un iterador que vaya de 1 en 1
        triangular = enesimo*(enesimo+1)/2;//con la formula dada por el docente encontramos el triangular enesimo
        if (divisores(triangular)>n){//si la cantidad de divisores del triangular es mayor a n
            trwe = 1;//cambiamos el estado de la variable binaria a 1
        }
    }
//Imprimimos en pantalla el resultado con respecto al formato dado
    cout<<endl<<"El numero es: "<<triangular<<" que tiene "<<divisores(triangular)<<" divisores"<<endl;

    return 0;//retornamos 0 como buena practica de la funcion int
}
