/*
Crear una clase calculadora, dicha clase debe tener los métodos sumar, restar,
dividir, multiplicar que realizarán operaciones en dos propiedades A y B. En el
método dividir verifique que el divisor no es 0. Si el divisor es 0, arroje una
excepción.
*/

using namespace std;
#include <iostream>

class Calculadora{
    private:
        float A;
        float B;
    public:
        Calculadora();
        Calculadora(float a, float b);

        void setA(float a);
        void setB(float b);

        float getA();
        float getB();
        
        float sumar();
        float restar();
        float dividir();
        float multiplicar();
};