/*
Problema14.

Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha,
Ej: 969. Escriba un programa que calcule el número palíndromo más grande que se puede obtener
como una multiplicación de números de 3 dígitos.
Ej: una de las posibles respuestas es: 143 * 777 = 111111.
Nota: la salida del programa debe ser: 143 * 777 = 111111

*/
#include <iostream>

using namespace std;

int EsPalindromo(int num)//creamos una funcion para saber si un numero es palindromo
{
    // `n` almacena el entero dado
    int n = num;

    // `rev` almacena el reverso del entero dado
    int rev = 0;

    while (n)
    {
        // esto almacenará el último dígito de `n` en la variable `r`
        // por ejemplo, si `n` es 1234, entonces `r` sería 4
        int r = n % 10;

        // añade `r` a `rev` en el lugar de uno
        // por ejemplo, si `rev = 65` y `r = 4`, entonces el nuevo `rev` sería 654
        rev = rev * 10 + r;

        // elimina el último dígito de `n`
        // por ejemplo, si `n` es 1234, entonces la nueva `n` sería 123
        n = n / 10;
    }

    // esta expresión devolverá 1 si el número dado es igual a
    // es al revés; de lo contrario, devolverá 0
    return (num == rev);
}
int main()
{
    int num1 = 0, num2 = 0, palindromo = 0;//Declaramos las variables que vamos a utilizar

    for (int i = 100; i<1000; ++i){//creamos un ciclo para el primer numero de tres digitos que vaya desde (100-999)
        for(int j = 100; j<1000; ++j){//creamos el segundo ciclo para el segundo numero de tres digitos que vaya desde (100-999)

            if ((EsPalindromo(i*j)==1)&&((i*j)>palindromo)){//si el primer numero actual por el segundo numero actual es un palindromo
                //cout<<i*j<<endl;//y es mayor al palindromo guardado con anterioridad
                palindromo = i*j;//el numero se guardara ahora en la variable palindromo
                num1 = i;//se guardara el numero uno del primer ciclo
                num2 = j;//se guardara el numero dos del ciclo anidado en el primero
            }
        }
    }
    //imprimimos en pantalla la solucion del problema
    cout<<"la salida del programa debe ser: "<<num1<<" * "<<num2<<" = "<<palindromo<<endl;

    return 0;//retornamos cero como buen uso de la funcion int
}
