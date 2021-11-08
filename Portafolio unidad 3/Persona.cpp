#include <iostream>
#include <string.h>
#include <ctime>

using namespace std;
//OSCAR ALEJANDRO ROMERO GONZALEZ
class Persona {
	private:
		string nombres; 
		string apellidos;
		int anioNacimiento;
		
	public:
		Persona (string nombres, string apellidos, int anioNacimiento);
		string nombreCompleto ();
		int edad();
};

Persona::Persona(string nombres, string apellidos, int anioNacimiento){
	this->nombres = nombres;
	this->apellidos = apellidos;
	this->anioNacimiento = anioNacimiento;
}

string Persona::nombreCompleto (){
	string nomCompleto = this->nombres + " " + this->apellidos;
	return nomCompleto;
}

Persona::edad(){
	time_t now =time(0);
	tm* ltm = localtime(&now);
	int anioActual = 1900 + ltm->tm_year;
	int edad = (anioActual - this->anioNacimiento);
	return edad;
}

int main(){
	string nombres;
	string apellidos;
	int anioNacimiento;
	
	cout << endl;
	cout << "Nombres: " << endl;
	getline (cin, nombres);
	cout << endl;
	cout << "Apellidos: " << endl;
	getline (cin, apellidos);
	cout << endl;
	cout << "Ingrese el a�o de nacimiento: " << endl;
	cin >> anioNacimiento;
	cout << endl;
	
	if(anioNacimiento <= 0){
		cout << "Anio debe ser mayor a cero." << endl;
		cout << "Ingrese el a�o de nacimiento: " << endl;
		cin >> anioNacimiento;
	}
	
	Persona p (nombres, apellidos, anioNacimiento);
	cout <<"Datos Personales:" << endl;
	cout << "Nombre: " << p.nombreCompleto() << endl;
	cout << "Edad: " << p.edad() << endl;
	
	
	return 0;
}
