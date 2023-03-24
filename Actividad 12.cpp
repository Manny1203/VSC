/*** PRESENTACIÓN ****************
NOMBRE: Juan Manuel Mota Hernández  
FECHA: 23/03/2023
PROGRAMA: #12
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCION: Estructuras
****************************/
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

struct directorio{
	string nombre;
	string apellido;
	string ciudad;
	string estado;
	string municipio;
	string calle;
	int edad;
	int estatura;
};

int main(){
    int y = 0;
	int Npersonas;
	
	cout<<"Ingresa cuantas personas deseas guardar: ";
	cin>>Npersonas;
	
	directorio personas[Npersonas];
	
	for(int x = 0; x < Npersonas; x++){
		cout<<"Ingresa los datos de la persona: "<< y+1 <<endl;
		cout<<"Nombre: ";
		getline(cin.ignore(), personas[x].nombre);
		cout<<"Primer apellido: ";
		getline(cin, personas[x].apellido);
		cout<<"Ciudad: ";
		getline(cin, personas[x].ciudad);
		cout<<"Estado: ";
		getline(cin, personas[x].estado);
		cout<<"Municipio: ";
		getline(cin, personas[x].municipio);
		cout<<"Calle: ";
		getline(cin, personas[x].calle);
		cout<<"Edad: ";
		cin>>personas[x].edad;
		cout<<"Estatura: ";
		cin>>personas[x].estatura;
        y++;
	}
	cout<<endl;
	cout<<"Los datos ingresados son: "<<endl;
	y=0;
	for(int x = 0; x < Npersonas; x++){
		cout<<"Persona: "<< y+1 <<endl;
		cout<<endl;
		cout<<"Nombre: "<<personas[x].nombre<<endl;
		cout<<"Apellido: "<<personas[x].apellido<<endl;
		cout<<"Ciudad: "<<personas[x].ciudad<<endl;
		cout<<"Estado: "<<personas[x].estado<<endl;
		cout<<"Municipio: "<<personas[x].municipio<<endl;
		cout<<"Calle: "<<personas[x].calle<<endl;
		cout<<"Edad: "<<personas[x].edad<<endl;
		cout<<"Estatura: "<<personas[x].estatura<<endl;
        y++;
		cout<<endl;
	}
	
}