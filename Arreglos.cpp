//Nombres:Vega Robles Marlon Alexander
//Descripcion:Arreglos
//Fecha:24/11/2023
#include <iostream>

using namespace std;

int main() {
    const int tamañoArreglo = 5;
    float numeros[tamañoArreglo];
    float suma = 0;

    cout << "Ingresa valores para cada elemento del arreglo:\n";

    // Solicitar al usuario que ingrese valores para cada elemento del arreglo
    for (int i = 0; i < tamañoArreglo; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Calcular la suma de todos los elementos del arreglo
    for (int i = 0; i < tamañoArreglo; ++i) {
        suma += numeros[i];
    }

    // Mostrar la suma de los elementos
    cout << "La suma de los elementos del arreglo es: " << suma << endl;

    return 0;
}
