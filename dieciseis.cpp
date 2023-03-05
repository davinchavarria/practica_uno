/*
problema 16:

La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie, si n es par, el
siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
Escriba un programa que reciba un número k y calcule cual es el elemento inicial j(semilla),
menor que k, que produce la serie más larga y diga cuantos términos m tiene la serie. Tip: la serie termina
al llegar a un elemento cuyo valor sea 1. Ej: para la semilla 13:13,40,20,10,5,16,8,4,2,1
nota: la salida del programa debe ser: La serie mas larga es con la semilla: j, teniendo m terminos.
Otra nota: se le dará una bonificación si imprime la serie.

*/
#include <iostream>

using namespace std;

int semilla(int num){//Creamos una funcion para saber cuantos terminos tiene cada semilla
    int terminos_semilla = 0;//variable para la cantidad de terminos

    while (num!=1){//si el termino es 1 se finaliza el ciclo y la semilla
        if (num%2!=0){//sabemos si el numero es par o impar
            num = 3*num+1;// si es impar

        }
        else{
            num = num/2;//si es par
        }
        terminos_semilla += 1;//aumentamos en uno la cantidad de terminos
    }

    return terminos_semilla;//retornamos la cantidad de terminos
}

int main()
{
    int n, serie = 0;//declaramos variables

    cout<<"Por favor ingreseun numero: ";cin>>n;//pedimos un numero al usuario

    serie = n;//para no alterar la informacion principal, la almacenamos en otra variable
    for (int i = 1; i < n; ++i){//creamos un ciclo que itere asta n
        if (semilla(i) > semilla(serie)){//si la cantidad de terminos de la semilla i es mayor a la cantidad de terminos de la semilla serie
            serie = i;//la semilla cambia de numero
        }
    }

    cout<<"La serie mas larga es con la semilla: "<<serie<<", teniendo "<<semilla(serie)<<" terminos"<<endl;//imprimimos la respuesta
    cout<<serie<<": ";//imprimimos la semilla con cada uno de sus terminos
    while (serie!=1){//itilizamos el formato de la funcion semilla para imprimir los terminos
        if (serie%2!=0){
            serie = 3*serie+1;
        }
        else{
            serie = serie/2;
        }
        if (serie == 1){
            cout<<serie<<endl;
        }
        else{
            cout<<serie<<",";
        }
    }
    return 0;//retornamos 0 como nuem uso de la funcion int
}
