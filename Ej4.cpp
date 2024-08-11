/*
Crear un programa con un menú de opciones visible por terminal, que tenga los
métodos sumarEnteros, calcularAreaCirculo y calcular la potencia de un número. El
menú deberá solicitar los parámetros al usuario de acuerdo a la opción
seleccionada.
*/

#include <iostream>
#include <cmath>
using namespace std;


void menu(){
    cout << "1. Sumar enteros \n";
    cout << "2. Calcular area de un circulo \n";
    cout << "3. Calcular potencia de un numero \n";
    cout << "4. Salir \n";
}

int sumarEnteros(int a, int b){
    return a+b;
}

float calcularAreaCirculo(float radio){
    double PI = 3.14159265359;
    return PI *pow(radio,2);
}

int calcularPotencia(int base, int exponente){
    return pow(base,exponente);
}


int main(){
    menu();
    int opcion;
    cout << "Ingrese la opcion \n";
    cin >> opcion;

    switch(opcion){
        case 1:
            int a,b;
            cout << "Ingrese el primer numero \n";
            cin >> a;
            cout << "Ingrese el segundo numero \n";
            cin >> b;
            cout << "La suma de los numeros es: " << sumarEnteros(a,b) << endl;
        break;
        case 2:
            float radio;
            cout << "Ingrese el radio del circulo \n";
            cin >> radio;
            cout << "El area del circulo es: " << calcularAreaCirculo(radio) << endl;
        break;
        case 3:
            int base,exponente;
            cout << "Ingrese la base \n";
            cin >> base;
            cout << "Ingrese el exponente \n";
            cin >> exponente;
            cout << "La potencia es: " << calcularPotencia(base,exponente) << endl;
        break;
        case 4:
            cout << "Saliendo del programa \n";
        break;
    }
}