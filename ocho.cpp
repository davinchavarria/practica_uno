/*
Pronlema 8:

Escriba un programa que reciba 3 números a,b,c, y calcule la suma de todos los múltiplos de a y b que
sean menores a c.Tenga en cuenta no sumar 2 veces los múltiplos comunes.

Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23 Para a=5,b=7yc=36.
Se sumarían 5+10+15+20+25+30+35+7+14+21+28=210.

Nota: el formato de salida debe ser:

m11+m12+m13+...+m21+m22+m23.    .. = sumatoria.
m11 representa el primer múltiplo de a y a sí sucesivamente.
m21 representa el primer múltiplo de b y a sí sucesivamente.

*/

#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, suma = 0, aux = 0;//inicializamos las variables que vamos a utilizar

    cout<<"Digite el valor de a: "; cin>>a;//pedimos al usuario los numeros de cada letra
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c; cout<<endl;

    while (aux < c){//creamos un ciclo para imprimir los multiplos de a e ir sumando dichos multiplos
        aux += a;
        if (aux<c){//se verifica que el multiplo no exceda la restriccion
            suma += aux;//se van sumando los multiplos
            cout<<aux<<"+";//se imprime cada multiplo de a
        }
    }
    aux = 0;//inicializamos en cero a aux para volver a utilizar esta variable
    while (aux < c){//creamos un ciclo para los multiplos de b
        aux += b;
        if (aux%a != 0){//miramos si el multiplo de b no es multiplo de a
            if (aux<c){//miramos que el multiplo no exceda la restriccion
                suma = suma+aux;//sumamos los multiplos de b a la suma de los multiplos de a
                if (aux+b>=c){//si el multiplo de b que sigue excede a c o es igual, el formato de salida cambia
                    cout<<aux;//se imprime aux sin + porque es el ultimo numero
                }
                else{
                    cout<<aux<<"+";//se imprime aux
                }
                }

        }



    }
    cout<<" = "<<suma<<endl;//por ultimo se imprime la suma
    return 0;//retornamos 0 como una buena aplicacion de la funcion entero
}
