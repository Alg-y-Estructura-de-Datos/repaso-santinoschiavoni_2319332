/*
Crear una clase calculadora, dicha clase debe tener los métodos sumar, restar,
dividir, multiplicar que realizarán operaciones en dos propiedades A y B. En el
método dividir verifique que el divisor no es 0. Si el divisor es 0, arroje una
excepción.
*/

using namespace std;
#include <iostream>
#include "calculadora.h"

void menu(){
    cout<<"1. Sumar"<<endl;
    cout<<"2. Restar"<<endl;
    cout<<"3. Dividir"<<endl;
    cout<<"4. Multiplicar"<<endl;
    cout<<"5. Salir"<<endl;
}

int main(){
    float a, b;
    cout<<"Ingrese el valor de A: ";
    cin>>a;
    cout<<"Ingrese el valor de B: ";
    cin>>b;
    bool salir=false;
    Calculadora c(a, b);
    int opcion;
    do{
        menu();
        cout<<"Ingrese una opcion: ";
        cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"La suma es: "<<c.sumar()<<endl;
                break;
            case 2:
                cout<<"La resta es: "<<c.restar()<<endl;
                break;
            case 3:
                try{
                    cout<<"La division es: "<<c.dividir()<<endl;
                }catch(const char* e){
                    cout<<e<<endl;
                }
                break;
            case 4:
                cout<<"La multiplicacion es: "<<c.multiplicar()<<endl;
                break;
            case 5:
                cout<<"Saliendo..."<<endl;
                salir=true;
                break;
            default:
                cout<<"Opcion incorrecta"<<endl;
        }
}while(opcion!=5);
}