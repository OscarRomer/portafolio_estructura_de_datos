#include "lista_generica.hpp"
#include <string>
//OSCAR ALEJANDRO ROMERO GONZALEZ
template <typename TIPODATO>
class Cola : private Lista<TIPODATO>{
	public:
		Cola();
		enqueue(TIPODATO item);
		TIPODATO dequeue();
		bool estaColaVacia();
		string colaComoCadena();
};

template<typename TIPODATO>
Cola<TIPODATO>::Cola(){
	Lista<TIPODATO> Lista;
}

template<typename TIPODATO>
Cola<TIPODATO>::enqueue(TIPODATO item){
	this->adjuntar(item);
}

template<typename TIPODATO>
TIPODATO Cola<TIPODATO>::dequeue(){
	return this->remover(0);
}

template<typename TIPODATO>
bool Cola<TIPODATO>::estaColaVacia(){
	return this->estaVacia();
}

template<typename TIPODATO>
string Cola<TIPODATO>::colaComoCadena(){
	return this->comoCadena();
}
