//Elaborar un algoritmo para calcular la cantidad que se 
//tendria ahorrada despues de 10 a�os si se depositan mil 
//pesos mensuales  a una tasa de interes mensuales de 3 %
//capitalizable cada mes, es decir , que al capital se le agregan los intereses.








#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double depositoMensual = 1000.0;      // Monto depositado cada mes
    double tasaInteres = 0.03;            // Tasa de inter�s mensual (3%)
    int anios = 10;
    int meses = anios * 12;
    double montoAhorrado = 0.0;

    // Cada mes un nuevo interes y se hace un nuevo dep�sito
    for (int i = 1; i <= meses; i++) {
        montoAhorrado = montoAhorrado * (1 + tasaInteres); // se aplica el inter�s 
        montoAhorrado += depositoMensual; // se agrega el nuevo dep�sito
    }

    cout.precision(2);
    cout << fixed;
    cout << "Monto total ahorrado despu�s de " << anios << " anos: $" << montoAhorrado << endl;

    return 0;
}



















//Se usa un ciclo de 120 meses (10 a�os � 12). en cada iteraci�n del ciclo:
//Se actualiza el monto ahorrado con el inter�s mensual (3%).
//Luego se suma el dep�sito mensual ($1000).
//Se imprime el monto final al final del per�odo

