#include <iostream>
#include <string>

using namespace std;
//OSCAR ALEJANDRO ROMERO GONZALEZ
class cuentaBancaria {

	private:
	string numeroCuenta;
	string nombreTitular;
	double saldo;
	
	public: 
	cuentaBancaria(string num, string titular, double saldo); 
	double getSaldo();
	string getNumeroCuenta();
	string getNombreTitular();
	void depositar(double importeDeposito);
	void retirar(double importeRetiro);
	
};

cuentaBancaria::cuentaBancaria(string num,string titular,double saldo){
	if (saldo<0){
		this->saldo=0.00;
	}else{
		this->saldo=saldo;
	}
	this->numeroCuenta=num;
	this->nombreTitular=titular;
	
}

double cuentaBancaria::getSaldo(){
	return this->saldo;
}

string cuentaBancaria::getNumeroCuenta(){
	return this->numeroCuenta;
}

std::string cuentaBancaria::getNombreTitular(){
	return this->nombreTitular;
}

void cuentaBancaria::depositar(double importeDeposito){
	if(importeDeposito>0){
		this->saldo+=importeDeposito;
	}else{
		cout << "! - Importe no valido "<< endl;
	}
}

void cuentaBancaria::retirar(double importeRetiro){
	if(importeRetiro>0 && importeRetiro <= this->saldo){
		this->saldo-=importeRetiro;
	}else{
		cout << "! - Importe no valido "<< endl;
	}
}

int main () {
	cuentaBancaria micuenta("A-480920", "Jonathan Joestar", 2900.00);
	cout<<"Titular: " << micuenta.getNombreTitular()<<endl;
	cout<<"# Cuenta: " << micuenta.getNumeroCuenta()<<endl;
	cout<<"Saldo $: " << micuenta.getSaldo()<<endl;
	cout<<" -------------------------------- "<<endl;
	
	cuentaBancaria cuentaAmigo("C-165426", "Arale Guitierrez", 784661.00);
	cout<<"Titular: " << cuentaAmigo.getNombreTitular()<<endl;
	cout<<"# Cuenta: " << cuentaAmigo.getNumeroCuenta()<<endl;
	cout<<"Saldo $: " << cuentaAmigo.getSaldo()<<endl;
	cout<<" -------------------------------- "<<endl;
	
	cuentaBancaria cuentaNoValido("A-354698", "Jhon Cena", -500.00);
	cout<<"Titular: " << cuentaNoValido.getNombreTitular()<<endl;
	cout<<"# Cuenta: " << cuentaNoValido.getNumeroCuenta()<<endl;
	cout<<"Saldo $: " << cuentaNoValido.getSaldo()<<endl;
	cout<<" -------------------------------- "<<endl;
	
	cout <<"Quiero retirar $84 de la cuenta "<< micuenta.getNumeroCuenta()<<endl;
	cout <<"Saldo incial: $" << micuenta.getSaldo()<<endl;
	micuenta.retirar(84);
	cout <<"Saldo luego de la operacion: $" << micuenta.getSaldo()<< endl;
	cout <<" ---------------------------------- " << endl;
	
	cout <<"Quiero retirar $3500 de la cuenta "<< micuenta.getNumeroCuenta()<<endl;
	cout <<"Saldo incial: $" << micuenta.getSaldo()<<endl;
	micuenta.retirar(3500);
	cout <<"Saldo luego de la operacion: $" << micuenta.getSaldo()<< endl;
	cout <<" ---------------------------------- " << endl;
	
	cout <<"Quiero retirar -$725 de la cuenta "<< micuenta.getNumeroCuenta()<<endl;
	cout <<"Saldo incial: $" << micuenta.getSaldo()<<endl;
	micuenta.retirar(-725);
	cout <<"Saldo luego de la operacion: $" << micuenta.getSaldo()<< endl;
	cout <<" ---------------------------------- " << endl;
	
	cout <<"Quiero retirar $125000 de la cuenta "<< micuenta.getNumeroCuenta()<<endl;
	cout <<"Saldo incial: $" << micuenta.getSaldo()<<endl;
	micuenta.retirar(125000);
	cout <<"Saldo luego de la operacion: $" << micuenta.getSaldo()<< endl;
	cout <<" ---------------------------------- " << endl;
	
	cout <<"Quero retirar -$5000 de la cuenta "<< micuenta.getNumeroCuenta()<<endl;
	cout <<"Saldo incial: $" << micuenta.getSaldo()<<endl;
	micuenta.retirar(-5000);
	cout <<"Saldo luego de la operacion: $" << micuenta.getSaldo()<< endl;
	
	
	return 0;
}
