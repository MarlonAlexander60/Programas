//Nombres:Vega Robles Marlon Alexander
//Descripcion:Bucles
//Fecha:24/11/2023
#include <iostream>

using namespace std;

int main() {
    float numero;

    do {
        // Solicitar al usuario que ingrese un número
        cout << "Ingrese un numero: ";
        cin >> numero;

        // Validar si el número es negativo y solicitar nuevamente si es necesario
        if (numero < 0) {
            cout << "Por favor, ingrese un numero no negativo." << endl;
        }
    } while (numero < 0);

    // Mostrar la tabla de multiplicar del número ingresado
    cout << "Tabla de multiplicar del " << numero << ":\n";

    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
