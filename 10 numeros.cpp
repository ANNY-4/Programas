//Programa: realizar un código que capture 10 números y posteriormente los ordene ascendente en un arreglo y lo describe en pantalla

#include <iostream>
#include <algorithm>  // Para std::sort

using namespace std;

int main() {
    const int TAM = 10;
    int numeros[TAM];

    // Captura 
    cout << "Ingrese 10 numeros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Ordena
    sort(numeros, numeros + TAM);

    // resultado
    cout << "\nNumeros ordenados en forma ascendente:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

