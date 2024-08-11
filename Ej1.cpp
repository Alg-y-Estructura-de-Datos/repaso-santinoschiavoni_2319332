/*
Imagina que tienes dos vasos, uno con jugo de naranja y otro con jugo de manzana.
Queremos escribir un programa en C++ que tenga una función llamada
intercambiarJugos que tome dos vasos (representados como variables) y los
intercambie. Luego, en la función main, pedimos al usuario que ingrese la cantidad
de jugo en cada vaso, llamamos a la función intercambiarJugos y mostramos las
cantidades después del intercambio.
*/

#include <iostream>
using namespace std;

void intercambiarJugos(float &vaso1, float &vaso2) {
    float aux = vaso1;
    vaso1 = vaso2;
    vaso2 = aux;
}
int main() {
    float vaso1, vaso2;
    cout << "Ingrese en cc" << endl;
    cout << "Ingrese la cantidad de jugo de naranja en el vaso 1: ";
    cin >> vaso1;
    cout << "Ingrese la cantidad de jugo de manzana en el vaso 2: ";
    cin >> vaso2;

    cout << "Cantidad de jugo de naranja en el vaso 1: " << vaso1 << endl;
    cout << "Cantidad de jugo de manzana en el vaso 2: " << vaso2 << endl;

    intercambiarJugos(vaso1, vaso2);

    cout << "Cantidad de jugo de manzana en el vaso 1: " << vaso1 << endl;
    cout << "Cantidad de jugo de naranja en el vaso 2: " << vaso2 << endl;

    return 0;
}
