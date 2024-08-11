/*
Escribe un programa en C++ que tenga una función llamada marcarAsiento que
tome un puntero a un booleano y lo cambie a true para indicar que el asiento está
reservado. Luego, en la función main, crea un arreglo que represente los asientos
del teatro (inicialmente todos libres), pide al usuario que elija un asiento para
reservar, llama a la función marcarAsiento y muestra el estado de los asientos antes
y después de la reserva.
*/

#include <iostream>
using namespace std;

bool marcarAsiento(bool *asiento) {
    *asiento = true;
    return *asiento;
}

int main() {
    int n;
    int band=1;
    cout << "Ingrese la cantidad de asientos del teatro: ";
    cin >> n;
    bool asientos[n] = {false}; // Todos los asientos libres

    cout << "Asientos disponibles: ";
    for (int i = 0; i < n; i++) {
        if(asientos[i] == false)
            cout << i+1 << ": " << "Libre" << " , ";
        else
            cout << i+1 << ": " << "Ocupado" << " , ";
    }
    do{
    cout << endl;
    int asiento;
    cout << "Ingrese el asiento a reservar: ";
    cin >> asiento;
    marcarAsiento(&asientos[asiento-1]);
    cout << "Asientos disponibles: ";
    for (int i = 0; i < n; i++) {
        if(asientos[i] == false)
            cout << i+1 << ": " << "Libre" << " , ";
        else
            cout << i+1 << ": " << "Ocupado" << " , ";
    }
    cout << "Desea seguir reservando? Ingrese 0 para finalizar o 1 para continuar" << endl;
    cin >> band;
    }while(band==1);
    return 0;
}
