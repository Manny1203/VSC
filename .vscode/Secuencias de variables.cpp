/*** PRESENTACIÓN ****************
NOMBRE: Juan Manuel Mota Hernández  
FECHA: 25/21/2023
PROGRAMA:
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCION: Probaremos distintos comandos para demostrar que hace cada uno.
***************************/
#include <iostream>
using namespace std;
int main ()
{
//Secuencias de escape
 cout<<"Prueba"<<"\a"<<endl; //alarma
 cout<<"Prueba"<<"\?"<<endl; //pone un signo de interrogacion
 cout<<"Prueba"<<"\n"; //Retorno de carro y avance de linea
 cout<<"Prueba"<<"\""<<endl; //Comillas dobles
 cout<<"Prueba"<<"\0"<<endl; //Caracter nulo
 cout<<"Prueba"<<"\t"<<endl; //Tabulacion invertida
//Cadenas de control
   int e=0;
   char t;
   float f=0;
   cout<<"Dame un numero"<<endl;
   cin>>e;
    cout<<e<<"%i"<<endl; // EL numero es un entero
    cout<<"Presiona una tecla no numerica"<<endl;
   cin>>t;
    cout<<t<<"%C"<<endl; //El dato es un caracter
    cout<<"Dame un numero entero"<<endl;
   cin>>f;
    cout<<f<<"%e"<<endl; //Real expresado en base y exponente
    cout<<"Dame un numero"<<endl;
   cin>>e;
    cout<<e<<"%x"<<endl; //Es un entero hecadecimal
    cout<<"Dame un numero"<<endl;
   cin>>e;
    cout<<e<<"%o"<<endl; //Es un entero octal
    cout<<"Dame un numero"<<endl;
   cin>>e;
    cout<<e<<"%g"<<endl; //es un entero


    return 0;

}