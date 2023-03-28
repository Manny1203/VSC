/******************************
Juan Manuel Mota Hernández
28/03/2023
Universidad de Guadalajara / Centro Universitario de los Altos
Carlos Javier Cruz franco
Juego del gato, contra otra persona o contra maquina
*******************************/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

char tablero[3][3]; // Matriz que representa el tablero
string jugador1, jugador2; // Nombres de los jugadores

// Función que inicializa el tablero con guiones
void inicializarTablero() {
    for (int x = 0; x < 3; x++) {
    for (int y = 0; y < 3; y++) {
        tablero[x][y] = '-';
    }
    }
}

// Función que muestra el tablero en la consola
void mostrarTablero() {
    cout << "  1 2 3\n";
    for (int x = 0; x < 3; x++) {
        cout << x+1 << " ";
        for (int y = 0; y < 3; y++) {
            cout << tablero[x][y] << " ";
        }
        cout << endl;
    }
}

// Función que verifica si una jugada es válida
bool jugadaValida(int fila, int columna) {
    if (fila < 0 || fila > 2 || columna < 0 || columna > 2) {
        return false;
    }
    if (tablero[fila][columna] != '-') {
        return false;
    }
    return true;
}

// Función que permite a un jugador hacer una jugada
void hacerJugada(char simbolo){
    int fila, columna;
    do{
        cout << "Ingrese la FILA y COLUMNA (ejemplo: 1 2): ";
        cin >> fila >> columna;
    }while (!jugadaValida(fila - 1, columna - 1));
    tablero[fila - 1][columna - 1] = simbolo;
}

// Función que verifica si un jugador ha ganado
bool haGanado(char simbolo){
    for(int x = 0; x < 3; x++){
        if (tablero[x][0] == simbolo && tablero[x][1] == simbolo && tablero[x][2] == simbolo) {
            return true;
            }
        if (tablero[0][x] == simbolo && tablero[1][x] == simbolo && tablero[2][x] == simbolo) {
            return true;
            }
        }
        if (tablero[0][0] == simbolo && tablero[1][1] == simbolo && tablero[2][2] == simbolo) {
            return true;
        }
        if (tablero[0][2] == simbolo && tablero[1][1] == simbolo && tablero[2][0] == simbolo) {
            return true;
        }
            return false;
}

// Función principal del juego
void jugar(){
    inicializarTablero();
    int turno = 0;
    while (true){
		system("cls");
        mostrarTablero();
        char simbolo = (turno % 2 == 0) ? 'X' : 'O';
        string nombre = (turno % 2 == 0) ? jugador1 : jugador2;
       
        cout << "Turno de " << nombre << " (" << simbolo << ")" << endl;
        hacerJugada(simbolo);
    if (haGanado(simbolo)){
        mostrarTablero();
        cout<<endl;
        cout << "Felicidades, " << nombre << " (" << simbolo << ") ha ganado" << endl;
        break;
        }
    if (turno == 8){
        mostrarTablero();
        cout<<endl;
        cout << "Empate" << endl;
        break;
        }
        turno++;
    }
}

void terminator(){
    srand(time(NULL));
    int randum = 1+rand()%(4 - 1);
}

//////////////////////////////////////////////////////////////////////////////////////////
int main(){
    system("cls");
    int fin, pregunta;

    cout << "Ingrese el nombre del jugador 1: ";
    cin >> jugador1;
    cout << "Ingrese el nombre del jugador 2: ";
    cin >> jugador2;

do{
jugar();
    cout<<endl;
    cout << "Quieres volver a jugar?" <<endl;
    cout << "Escribe 1 para SI" <<endl;
    cout << "Escribe 2 para NO" <<endl;
    cin >> pregunta;
        if (pregunta==1){
            fin=1;
            system("cls");}
        else if (pregunta==2){
            fin=2;}
}while(fin==1);
    cout<<endl;
    cout << "JUEGO FINALIZADO" << endl;
    cout<<endl;
}
