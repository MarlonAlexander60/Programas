//Nombres:Vega Robles Marlon Alexander
//Descripcion:Funciones
#include <iostream>

using namespace std;

float calcularAreaCirculo(float radio) {
    return 3.14159 * radio * radio;
}

int main() {
    float radio;

    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    float area = calcularAreaCirculo(radio);

    cout << "El área del círculo con radio " << radio << " es: " << area << endl;

    return 0;
}
