//definir clase deporte con 3 atributos deportes que se juegan con balon y definir las clases derivas dependinedo con que parte del cuerpo se toca el balon


#include <iostream>
#include <string>
using namespace std;

// Clase
class Deporte {
protected:
    string nombre;
    int jugadores;
    string tipoBalon;

public:
    Deporte(string n, int j, string tb) : nombre(n), jugadores(j), tipoBalon(tb) {}
    virtual void mostrar() {
        cout << "Deporte: " << nombre << endl;
        cout << "Jugadores por equipo: " << jugadores << endl;
        cout << "Tipo de balon: " << tipoBalon << endl;
    }
    virtual void comoSeJuega() = 0; 
};

// Clases derivadas
class ConManos : public Deporte {
public:
    ConManos(string n, int j, string tb) : Deporte(n, j, tb) {}
    void comoSeJuega() override {
        cout << "Este deporte se juega principalmente con las manos.\n" << endl;
    }
};

class ConPies : public Deporte {
public:
    ConPies(string n, int j, string tb) : Deporte(n, j, tb) {}
    void comoSeJuega() override {
        cout << "Este deporte se juega principalmente con los pies.\n" << endl;
        cout << "11 jugadores por cada equipo y un arbrito." << endl;
    }
};

class ConAntebrazo : public Deporte {
public:
    ConAntebrazo(string n, int j, string tb) : Deporte(n, j, tb) {}
    void comoSeJuega() override {
        cout << "Este deporte se juega con el antebrazo y con otras partes del cuerpo.\n" << endl;
    }
};

//Impresion
int main() {
    ConManos Handball("Handball", 7, "Balon de mano");
    ConPies futbol("Futbol", 22, "Balon de futbol");
    ConAntebrazo voleibolBrazo("Voleibol", 6, "Balon blando");

    Handball.mostrar();
    Handball.comoSeJuega();

    futbol.mostrar();
    futbol.comoSeJuega();

    voleibolBrazo.mostrar();
    voleibolBrazo.comoSeJuega();

    return 0;
}

