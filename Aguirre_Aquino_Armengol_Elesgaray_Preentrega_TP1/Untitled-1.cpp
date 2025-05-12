// Elesgaray Lopez Santiago
// Armengol Claudio
// Aquino Milu
// Aguirre Lucía
#include <iostream>
#include <cstdlib> // Para system()
using namespace std;

int main() {
    int opcionMenu;
    bool seguirJugando = true;

    while (seguirJugando) {
        // Título y menú principal
        cout << "\n=== SOS INIMPUTABLE, HERMANO ===" << endl;
        cout << "1. Jugar" << endl;
        cout << "2. Salir" << endl;
        cout << "Elegí una opción: ";
        cin >> opcionMenu;
        system("clear");

        switch (opcionMenu) {
            case 1: {
                int opcion1, opcion2, opcion3;
                int balas = 0;
                int tragos = 0;
                float alcohol = 0.0;
                bool cocainaEnSangre = false;
                bool zapatearYMear = false;
                bool seEntrego = false;

                // Nivel 1
                cout << "\nNivel 1: Entra el chorro. ¿Qué hacés?" << endl;
                cout << "1. Amasijarlo en el patio" << endl;
                cout << "2. Llevarlo al lugar más recóndito de tu casa" << endl;
                cin >> opcion1;
                system("clear");

                if (opcion1 == 1) {
                    cout << "Dicen que se cayó de la medianera, el chorro no entró a robarte." << endl;
                    break;
                }

                // Nivel 2
                cout << "\nNivel 2: ¿Qué hacés ahora?" << endl;
                cout << "1. Pegarle un tiro" << endl;
                cout << "2. Vaciarle todo el cargador" << endl;
                cout << "3. Tirarle todos los tiros, zapatearlo arriba y mearlo" << endl;
                cin >> opcion2;
                system("clear");

                if (opcion2 == 1) {
                    cout << "Sos hábil tirador, te comiste un garrón de la gran flauta. Cadena perpetua." << endl;
                    break;
                } else if (opcion2 == 2) {
                    balas = 10;
                    cout << "No demostraste tu estado de locura y de inconsciencia temporal, sos imputable. Cadena perpetua." << endl;
                    break;
                } else if (opcion2 == 3) {
                    balas = 10;
                    zapatearYMear = true;
                }

                // Nivel 3
                cout << "\nNivel 3: ¿Qué hacés después?" << endl;
                cout << "1. Llamar a la policía y entregarte" << endl;
                cout << "2. Tomarte media botella de Chivas Regal y agarrar un sobre de cocaína y papotearte" << endl;
                cin >> opcion3;
                system("clear");

                if (opcion3 == 1) {
                    seEntrego = true;
                    cout << "Te entregaste. Fuiste condenado a cadena perpetua por homicidio." << endl;
                } else if (opcion3 == 2) {
                    for (int i = 0; i < 10; i++) {
                        tragos++;
                    }
                    alcohol = 1.0;
                    cocainaEnSangre = true;
                }

                // Evaluación final (solo si NO se entregó)
                if (!seEntrego) {
                    cout << "\nResultado final: " << endl;
                    if (cocainaEnSangre || zapatearYMear) {
                        cout << "Sos inimputable hermano, en 10 días salís." << endl;
                    } else {
                        cout << "No te papoteaste y ahora sos imputable, te sentenciaron a cadena perpetua." << endl;
                    }
                }

                break;
            }

            case 2:
                seguirJugando = false;
                cout << "Chau, hermano." << endl;
                break;

            default:
                cout << "Opción inválida." << endl;
                break;
        }
    }

    return 0;
}
