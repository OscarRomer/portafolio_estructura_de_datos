#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>

using namespace std;
//OSCAR ALEJANDRO ROMERO GONZALEZ
class Personaje
{
	private:
		string nombres;
		int puntosVida;
	public:
		Personaje(string nombres, int puntosVida);
		void recibirGolpe(int puntosPerdidos);
		bool estaVivo();
		int getPuntosVida();
		string getNombre();
		void comer(int puntosGanados);
};


Personaje::Personaje(string nombres, int puntosVida)
{
	this->nombres = nombres;
	this->puntosVida = puntosVida;
}

void Personaje::recibirGolpe(int puntosPerdidos)
{
	this->puntosVida -= puntosPerdidos;
}

bool Personaje::estaVivo()
{
	bool _IsVivo = false;
	if(this->puntosVida > 0)
	{
		_IsVivo = true;
	}
	else
	{
		_IsVivo = false;
	}
	return _IsVivo;
}

int Personaje::getPuntosVida()
{
	return this->puntosVida;
}

string Personaje::getNombre()
{
	return this->nombres;
}

void Personaje::comer(int puntosGanados)
{
	this->puntosVida += puntosGanados;
}

void AgregarPersonaje();

int main() 
{
	AgregarPersonaje(); 
	cout <<"fin del juego";
	return 0;
}

void AgregarPersonaje()
{
	string _Nombre = "Cesar Alfaro";
	int _PuntosVidaInicio = 25;
	int _puntosPerdidos = 5;
	int _puntosGanados = 5;
	Personaje mipersonaje(_Nombre, _PuntosVidaInicio);
	

	cout << "\tPersonaje creado: " << mipersonaje.getNombre() << endl;
	cout << "\tPuntos Inciales: " << "[ " << mipersonaje.getPuntosVida() << " ]" << endl;
	if(mipersonaje.estaVivo())
	{
		cout << "\tPersonaje esta vivo?: SI"<<endl;
	}
	else
	{
		cout << "\tPersonaje esta vivo?: NO" << endl;
	}
	cout << "\t------------------------------------ " << endl;
	
	
	
	cout << "\tPersonaje logro esquivar el golpe" << endl;
	mipersonaje.comer(_puntosGanados);
	cout << "\tPuntos actuales: " << mipersonaje.getPuntosVida() << endl;
	if(mipersonaje.estaVivo())
	{
		cout <<"\tPersonaje esta vivo?: SI"<< endl;
	}
	else
	{
		cout <<"\tPersonaje esta vivo?: NO"<< endl;
	}
	cout << "\t------------------------------------ " << endl;
	
	
	cout << "\tPersonaje recibio el golpe" << endl;
	mipersonaje.recibirGolpe(_puntosPerdidos);
	cout << "\tPuntos actuales: " << mipersonaje.getPuntosVida() << endl;
	if(mipersonaje.estaVivo())
	{
		cout << "\tPersonaje esta vivo?: SI" << endl;
	}
	else
	{
		cout << "\tPersonaje esta vivo?: NO" << endl;
	}
	cout << "\t------------------------------------ " << endl;
	
	
	cout << "\tPersonaje recibio el golpe" << endl;
	mipersonaje.recibirGolpe(_puntosPerdidos);
	cout << "\tPuntos actuales: " << mipersonaje.getPuntosVida() << endl;
	if(mipersonaje.estaVivo())
	{
		cout << "\tPersonaje esta vivo?: SI" <<endl;
	}
	else
	{
		cout << "\tPersonaje esta vivo?: NO" <<endl;
	}
	cout << "\t------------------------------------ " << endl;
	
	
	cout << "\tPersonaje recibio el golpe" << endl;
	mipersonaje.recibirGolpe(_puntosPerdidos);
	cout << "\tPuntos actuales: " << mipersonaje.getPuntosVida() << endl;
	if(mipersonaje.estaVivo())
	{
		cout << "\tPersonaje esta vivo?: SI" <<endl;
	}
	else
	{
		cout << "\tPersonaje esta vivo?: NO" <<endl;
	}
	cout << "\t------------------------------------ " << endl;
	

	cout << "\tPersonaje logro esquivar el golpe" << endl;
	mipersonaje.comer(_puntosGanados);
	cout << "\tPuntos actuales: " << mipersonaje.getPuntosVida() << endl;
	if(mipersonaje.estaVivo())
	{
		cout << "\tPersonaje esta vivo?: SI" <<endl;
	}
	else
	{
		cout << "\tPersonaje esta vivo?: NO" <<endl;
	}
	cout << "\t------------------------------------ " << endl;
	
		
	cout << "\tPersonaje recibio el golpe" << endl;
	mipersonaje.recibirGolpe(_puntosPerdidos);
	cout << "\tPuntos actuales: " << mipersonaje.getPuntosVida() << endl;
	if(mipersonaje.estaVivo())
	{
		cout << "\tPersonaje esta vivo?: SI" <<endl;
	}
	else
	{
		cout << "\tPersonaje esta vivo?: NO" <<endl;
	}
	cout << "\t------------------------------------ " << endl;
	
	
	cout << "\tPersonaje recibio el golpe" << endl;
	mipersonaje.recibirGolpe(_puntosPerdidos);
	cout << "\tPuntos actuales: " << mipersonaje.getPuntosVida() << endl;
	if(mipersonaje.estaVivo())
	{
		cout << "\tPersonaje esta vivo?: SI" <<endl;
	}
	else
	{
		cout << "\tPersonaje esta vivo?: NO" <<endl;
	}
	cout << "\t------------------------------------ " << endl;
	
		
	cout << "\tPersonaje recibio el golpe" << endl;
	mipersonaje.recibirGolpe(_puntosPerdidos);
	cout << "\tPuntos actuales: " << mipersonaje.getPuntosVida() << endl;
	if(mipersonaje.estaVivo())
	{
		cout << "\tPersonaje esta vivo?: SI" <<endl;
	}
	else
	{
		cout << "\tPersonaje esta vivo?: NO" <<endl;
	}
	cout << "\t------------------------------------ " << endl;
	
	
	cout << "\tPersonaje recibio el golpe" << endl;
	mipersonaje.recibirGolpe(_puntosPerdidos);
	cout << "\tPuntos actuales: " << mipersonaje.getPuntosVida() << endl;
	if(mipersonaje.estaVivo())
	{
		cout << "\tPersonaje esta vivo?: SI" <<endl;
	}
	else
	{
		cout << "\tPersonaje esta vivo?: NO" <<endl;
	}
	cout << "\t------------------------------------ " << endl;
}
