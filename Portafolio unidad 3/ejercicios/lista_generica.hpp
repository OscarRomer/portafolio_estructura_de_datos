#ifndef lista_generica_hpp
#define lista_generica_hpp

#include <iostream>
#include <string>
#include <sstream>
//Oscar Alejandro Romero Gonzalez
using std::string;
using std::ostringstream;
using std::cout;
using std::endl;

template <typename TIPODATO>
class Lista{
	
	private:
		int cuenta;
		int capacidad;
		TIPODATO *items;
		void agrandar();
	public:
		Lista(int capacidad);
		Lista();
		~Lista();
		Lista(const Lista &otra);
		bool estaVacia();
		int tamano();
		void insertar(int indice, TIPODATO item);
		void adjuntar(TIPODATO item);
		TIPODATO obtener(int indice);
		bool contiene (TIPODATO item);
		TIPODATO remover(int indice);
		string comoCadena();
};

//constructor
template <typename TIPODATO>
Lista<TIPODATO>::Lista(int capacidad){
	this->cuenta = 0;
	this->capacidad = capacidad;
	this->items = new TIPODATO[capacidad];	
}

//contructor con tama�o  4
template <typename TIPODATO>
Lista<TIPODATO>::Lista() : Lista(4){}


// destructor de la lista 
template <typename TIPODATO>
Lista<TIPODATO>::~Lista(){
	delete[] items;
}

// construir una lista a partir de otra
template <typename TIPODATO>
Lista<TIPODATO>::Lista(const Lista<TIPODATO> &otra){
	this->cuenta = otra.cuenta;
	this->capacidad = otra.capacidad;
	this->items = new TIPODATO[capacidad];
	for (int i = 0; i <this->cuenta; i++)
	this->items[i] = otra.items[i];	
}	

//esta la lista vacia ?
template <typename TIPODATO>
bool Lista<TIPODATO>::estaVacia(){
	return this->cuenta == 0;
}

//tama�o de la lista
template <typename TIPODATO>
int Lista<TIPODATO>::tamano(){
	return this->cuenta;
}


//Aumentar tamanio de lista
template <typename TIPODATO>
void Lista<TIPODATO>::agrandar(){
//	cout << "Duplicando el tamano de la lista..." << endl;
	TIPODATO *temp = this->items;
	this->capacidad *=2;
	this->items = new TIPODATO[capacidad];
	for (int i=0; i<cuenta; i++)
	this->items[i] = temp[i];
	delete [] temp;
//	cout << " La lista tiene capacidad para " << this->capacidad << "elementos" << endl;
}

//insertar un elemento en un indice especifico
template <typename TIPODATO>
void Lista<TIPODATO>::insertar (int indice,TIPODATO item){
	//validad el indice
	if (indice <0 || indice >this->cuenta) throw "indice fuera de rango";
	
	//agrandar la lista si el elemento no cabe
	if (this->cuenta >=this->capacidad) this->agrandar();
	
//	cout << "insertando un elemento..." << endl;
	//desplazar elemntos a partir del indice a la derecha
	for (int i = cuenta - 1; i>=indice; i--){
		cout << "desplazando elemento " << items [i] << "del indice";
		cout <<i<< "al indice" << (i+1) << endl;
		this->items[i+1] = this->items[i];
	}
	
	//insertar nuevo elemento
//	cout << "insertando elemento  " <<item << "en el indice" << indice << endl;
	this->items[indice] = item;
	
	//incrementar la cuenta de elementos
//	cout << "incrementando la cuenta de elementos"<< endl;
	this->cuenta++;
}

//agregar un elemento al final
template <typename TIPODATO>
void Lista<TIPODATO>::adjuntar(TIPODATO item){
	this->insertar(this->cuenta, item);
}

//valor del elemento en la posicion indice
template <typename TIPODATO>
TIPODATO Lista<TIPODATO>::obtener(int indice){
	//validar el indice
	if (indice < 0 || indice >= this->cuenta) throw "indice fuera de rango";
	if (this->estaVacia()) throw "No se puede recuperar elementos de una lista vacia";
	
//	cout << "Recuperando elemento en el indice" << indice << endl;
	return this->items[indice];
	}

//esta el item en la lista?
template <typename TIPODATO>
bool Lista <TIPODATO>::contiene(TIPODATO item){
	for (int i =0; i <this->cuenta; i++){
	//	cout << "recorriendo elemento con indice " << i << endl;
		if (this->items[i] == item)
		return true;
	}
	
	return false;
}

//remover elemento en el indice indice'
template <typename TIPODATO>
TIPODATO Lista<TIPODATO>::remover(int indice){
	//validar el indice
	if (this->estaVacia()) throw "no se puede remover elementos de una lista vacia";
	if (indice < 0 ||indice >=this->cuenta) throw "indice fuera de rango";
	
//	cout << "removiendo el elemento con indice " << indice << "..." << endl;
	//lee el valor en el indice y desplaza elementos a la izquierda
	TIPODATO valor = this->items[indice];
	for (int i = indice; i <cuenta -1;i++){
	//	cout << "desplazando elemento " << items[i] <<"del indice ";
	//	cout << (i+1) << "al indice " <<i << endl;
		this->items[i] = this->items[i+1];
	}
	
	//reducir la cuenta de elementos
//	cout <<"reduciendo la cuenta de elementos "<< endl;
	this->cuenta--;
	return valor;
}

template <typename TIPODATO>
string Lista<TIPODATO>::comoCadena(){
	ostringstream s;
	s<< "[";
	for (int i =0; i<(this->cuenta);i++){
		s << this->items[i];
		if (i < this->cuenta-1)
		s <<", ";
	}
	s << "]";
	return s.str();
}
	
#endif //lista_generica_hpp
