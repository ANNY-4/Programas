// Elaborar un algoritmo para calcular la cantidad que se tendria ahorrada despues de 15 años si se depositan 15 mil pesos
// en un tasa de interes de 3.7 % mensual capitalizable cada mes 


//M = Monto final
//P = Capital inicial ($15,000)
//r = Tasa de interés mensual (3.7% = 0.037)
//n = Número de meses (15 años × 12 = 180)


#include <iostream>
#include <cmath>  // Para usar pow()

using namespace std;

int main() {
    // Datos iniciales
    double capital = 15000.0;
    double tasaMensual = 0.037; // 3.7% mensual
    int anios = 15;
    int meses = anios * 12;

    // Cálculo del monto total
    double montoFinal = capital * pow(1 + tasaMensual, meses);

    // Mostrar el resultado
    cout << "Despues de " << anios << " anos, se tendra ahorrado: $" << montoFinal << endl;

    return 0;
}

