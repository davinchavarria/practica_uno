/*
 Problema 6:

 Escriba un programa que encuentre el valor aproximado del número de euler en base a la siguiente suma in
 nota : e = 1/(0!)+1/(1!)+1/(2!)+1/(3!)+1/(4!)+1/(5!)+...1/(n!)
 Elusuario debe ingresar el número de el emento usado en la aproximación.
 Ej:si se ingresa 3 e = 1/(0!)+1/(1!)+1/(2!)= 2,5

Nota: el formato de salida debe ser:e es aproximadamente : 2.5

*/

#include <iostream>

using namespace std;

int factorial(int n){//creamos una funcion para saber el factorial de los numeros
    int num = 1;//inicializamos en 1 a el resultado
        if (n != 0) {//para los numeros diferentes a cero; porque 0! = 1
            for (int var = 1; var < n+1 ; ++var) {
            num *= var;//multiplicamos el valor de num cor el numero en el que va el iterador
        }
        }
    return num;//retornamos el resultado del el n!
}
int main(){
    int numero = 0;//inicializamos las variables que vamos a usar
    float euler = 0;

    cout<<"Digite un numero para la aproximacion: ";cin>>numero;//Le pedimos al usuario un numero para la aproximacion de euler

    for (int var = 0; var < numero; ++var) {//creamos un ciclo para las sumas
        euler += (1.0/factorial(var));//acumulamos las sumas que se dan en cada iteracion con el formato dado
    }

    cout<<endl<<"e es aproximadamente: "<<euler<<endl;//imprimimos el resultado

    return 0;//retornamos cero como una buena practica o buen uso de la funcion int
}
