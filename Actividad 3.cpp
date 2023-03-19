/*** PRESENTACIÓN ****************
NOMBRE: Juan Manuel Mota Hernández  
FECHA: 17/03/2023
PROGRAMA: #3
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCION: Le daremos un numero y dependiendo de este, se sumara cierto numero cierta cantidad de veces
***************************/
#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    char respuesta = 'n';
    do {
        cout << "Ingrese un numero: ";
        cin >> num;
        if (num > 0 && num < 500) {
            for (int i = 0; i < 100; i++) {
                num += 5;
                cout << "El valor actual es: " << num << endl;
                count++;
            }
        } else if (num > 500 && num < 1000) {
            for (int i = 0; i < 50; i++) {
                num += 10;
                cout << "El valor actual es: " << num << endl;
                count++;
            }
        } else if (num > 1000) {
            cout << "No se puede calcular el valor" << endl;
        }
        cout << "Desea terminar el programa? (s/n): ";
        cin >> respuesta;
    } while (respuesta != 's');

    cout << "El programa ha realizado " << count << " operaciones." << endl;
    return 0;
}
