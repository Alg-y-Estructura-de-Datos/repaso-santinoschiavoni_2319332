/*
Escribe un programa en C++ que calcule el factorial de un número entero positivo
usando un bucle.
*/

#include <iostream>
using namespace std;

float factorial(int &n) {
    float fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    cout << "Ingrese un numero a calcular su factorial "<<endl;
    cin >> n;
    cout << "El factorial de " << n << " es: " << factorial(n) << endl;
    return 0;
}
