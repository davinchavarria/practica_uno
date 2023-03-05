/*
Problema 4.

Escriba un programa para leer dos números enteros con el siguiente significado:
el valor del primernúmero representa una hora del día en un reloj de 24 horas,de modo que 1245 representa las
doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de duración de la misma manera,
por lo que 345 representa tres horas y 45 minutos. El programa debe sumar esta duración primer número, y
el resultado será impreso en la misma notación, en este caso 1630,que es el tiempo de 3 horas y 45 minutos
después de 12:45.

Nota: el formato de salida debe ser : La hora es 1630. Otra nota: se debe imprimir un mensaje como el siguiente
cuando uno de los datos ingresados es inválido: 1560 es un tiempo invalido.
*/


#include <iostream>

using namespace std;

int verify(){//funcion para validar los numeros
    int numero, minutos, aux;

    cout<<"Por favor ingrese un numero: "; cin>>numero;//se pide el numero
    aux = numero/100;//al numero ingresado se le quitan los decimales
    minutos = numero-aux*100;//se busca rescatar los dos ultimos digitos del numero

    while((numero<0 || numero>2400) || minutos>59) {//mientras que el numero ingresado no cumpla el formato
        cout<<numero<<" es un tiempo invalido"<<endl;//se le ara saber al usuario
        cout<<"Por favor ingrese un numero: "; cin>>numero;
        aux = numero/100;
        minutos = numero-aux*100;
    }
    return numero;//retornamos el nimero ya filtrado
}

int main()
{
    int num1, num2, hora1, hora2, minutos1, minutos2, horatotal, minutostotal;//se definen las variables
     num1 = verify();//validamos los numeros con la funcion verify()
     num2 = verify();

     hora1 = num1/100;//extraemos la hora del numero ingresado
     minutos1 = num1-hora1*100;//extraemos los minutos del numero ingresado
     hora2 = num2/100;//extraemos la hora del numero2 ingresado
     minutos2 = num2-hora2*100;//extraemos los minutos del numero ingresado
     horatotal = hora1+hora2;//sumamos las horas
     if (minutos1+minutos2>59){//Verificamos que la suma de los minutos no sea mayor a 59
         horatotal = horatotal+1;// si es mayor a 59 se le suma una hora a la hora total
         minutostotal = (minutos1+minutos2)-60;// y se le resta 60 a la suma de los minutos
     }
     else{//si la suma de los minutos es menor o igual a 59 entonces la horatotal seguira igual
         minutostotal = minutos1+minutos2;// y se sumaran los minutos con normalidad
     }

     cout<<"\n La hora es: "<<horatotal*100+minutostotal<<endl;//se omprime la hora con el mormato solicitado


    return 0;//retornamos cero como buena practica de esta funcion entera
}
