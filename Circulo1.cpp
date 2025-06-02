//realizar un codigo que calcule el radio, area y perimetro, de un circulo y tenga clases.

#include <iostream>
#include <cmath> 

using namespace std;

class Circulo {
private:
    double radio;

public:
    // Constructor
    Circulo(double r) {
        radio = r;
    }

    double calcularArea() {
        return M_PI * pow(radio, 2);
    }

    double calcularPerimetro() {
        return 2 * M_PI * radio;
    }

    
    void mostrarResultados() {
        cout << "Radio: " << radio << endl;
        cout << "Area: " << calcularArea() << endl;
        cout << "Perimetro: " << calcularPerimetro() << endl;
    }
};

int main() {
    double radio;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    // Crear un objeto de la clase Circulo
    Circulo miCirculo(radio);
    miCirculo.mostrarResultados();

    return 0;
}

