/*
Crear una clase calculadora, dicha clase debe tener los métodos sumar, restar,
dividir, multiplicar que realizarán operaciones en dos propiedades A y B. En el
método dividir verifique que el divisor no es 0. Si el divisor es 0, arroje una
excepción.
*/

using namespace std;
#include <iostream>
#include "calculadora.h"

Calculadora::Calculadora(){
    A=0;
    B=0;
}

Calculadora::Calculadora(float a, float b){
    A=a;
    B=b;
}

void Calculadora::setA(float a){
    A=a;
}

void Calculadora::setB(float b){
    B=b;
}

float Calculadora::getA(){
    return A;
}

float Calculadora::getB(){
    return B;
}

float Calculadora::sumar(){
    return A+B;
}

float Calculadora::restar(){
    return A-B;
}

float Calculadora::dividir(){
    if(B==0){
        cout<<"No se puede dividir por 0 \n";
    }
    return A/B;
}

float Calculadora::multiplicar(){
    return A*B;
}

