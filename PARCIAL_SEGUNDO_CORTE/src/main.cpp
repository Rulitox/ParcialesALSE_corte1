#include <iostream>
#include <vector>
#include <limits>
#include "../include/Actuador.h"

using namespace std;

int main() {

    vector<Actuador> actuadores;

    int cantidad;
    cout << "Cuantos actuadores desea crear? ";

    // Validar entrada
    while (!(cin >> cantidad) || cantidad <= 0) {
        cout << "Ingrese un numero valido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Crear actuadores
    for (int i = 0; i < cantidad; i++) {
        string nombre;
        cout << "\nNombre del actuador " << i + 1 << ": ";
        cin >> nombre;

        actuadores.push_back(Actuador(nombre));
    }

    int opcion;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Encender actuador\n";
        cout << "2. Apagar actuador\n";
        cout << "3. Ajustar potencia\n";
        cout << "4. Mostrar estado\n";
        cout << "0. Salir\n";
        cout << "Seleccione: ";

        cin >> opcion;

        // Validar opcion
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada invalida\n";
            continue;
        }

        int indice;

        switch (opcion) {

        case 1:
            cout << "Indice del actuador: ";
            cin >> indice;

            if (indice >= 0 && indice < actuadores.size()) {
                actuadores[indice].encender();
                cout << "Actuador encendido\n";
            } else {
                cout << "Indice invalido\n";
            }
            break;

        case 2:
            cout << "Indice del actuador: ";
            cin >> indice;

            if (indice >= 0 && indice < actuadores.size()) {
                actuadores[indice].apagar();
                cout << "Actuador apagado\n";
            } else {
                cout << "Indice invalido\n";
            }
            break;

        case 3:
            cout << "Indice del actuador: ";
            cin >> indice;

            if (indice >= 0 && indice < actuadores.size()) {
                int potencia;
                cout << "Nueva potencia (0-100): ";
                cin >> potencia;

                if (potencia >= 0 && potencia <= 100) {
                    actuadores[indice].ajustarPotencia(potencia);
                    cout << "Potencia ajustada\n";
                } else {
                    cout << "Valor invalido\n";
                }
            } else {
                cout << "Indice invalido\n";
            }
            break;

        case 4:
            cout << "\n--- ESTADO DE ACTUADORES ---\n";
            for (int i = 0; i < actuadores.size(); i++) {
                cout << "Actuador " << i << " ("
                     << actuadores[i].getNombre() << "): "
                     << actuadores[i].obtenerEstado()
                     << " | Potencia: "
                     << actuadores[i].getPotencia()
                     << endl;
            }
            break;

        case 0:
            cout << "Saliendo...\n";
            break;

        default:
            cout << "Opcion invalida\n";
        }

    } while (opcion != 0);

    return 0;
}