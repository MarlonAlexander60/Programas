//Nombres:Vega Robles Marlon Alexander
//Descripcion:EstructurasDeControl
//Fecha:24/11/2023
#include <iostream>

using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un numero: ";
    cin >> numero;

    // Estructura de control condicional para determinar si es positivo, negativo o cero
    if (numero > 0) 
    {
        cout << "El numero ingresado es positivo." << endl;
    } else if (numero < 0) 
    {
        cout << "El numero ingresado es negativo." << endl;
    } else {
        cout << "El numero ingresado es cero." << endl;
    }

    return 0;
}
