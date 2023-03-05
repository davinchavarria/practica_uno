#include <iostream>

using namespace std;
int veces(int a,int b){
    int c = 0;
    while(c*a<b){
            c+=1;

}
    if (c*a>b){
        c = c-1;
    }
    return c;
}
int main()
{
    int resultado = 0, dinero = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, dos = 0, mil = 0, quinientos = 0, docientos = 0, cien = 0, cincuenta2 = 0;

    cout<<"Digite la cantidad que desea verificar: ";cin>>resultado;
    dinero = resultado;


    cincuenta = veces(50000,dinero);
    dinero = dinero-cincuenta*50000;
    veinte = veces(20000,dinero);
    dinero = dinero-veinte*20000;
    diez = veces(10000,dinero);
    dinero = dinero-diez*10000;
    cinco = veces(5000,dinero);
    dinero = dinero-cinco*5000;
    dos = veces(2000,dinero);
    dinero = dinero-dos*2000;
    mil = veces(1000,dinero);
    dinero = dinero-mil*1000;
    quinientos = veces(500,dinero);
    dinero = dinero-quinientos*500;
    docientos = veces(200,dinero);
    dinero = dinero-docientos*200;
    cien = veces(100,dinero);
    dinero = dinero-cien*100;
    cincuenta2 = veces(50,dinero);
    dinero = dinero-cincuenta2*50;
    cout<<"50000 : "<<cincuenta<<endl;
    cout<<"20000 : "<<veinte<<endl;
    cout<<"10000 : "<<diez<<endl;
    cout<<"5000 : "<<cinco<<endl;
    cout<<"2000 : "<<dos<<endl;
    cout<<"1000 : "<<mil<<endl;
    cout<<"500 : "<<quinientos<<endl;
    cout<<"200 : "<<docientos<<endl;
    cout<<"100 : "<<cien<<endl;
    cout<<"50 : "<<cincuenta2<<endl;
    cout<<"Faltante : "<<dinero<<endl;

    return 0;
}
