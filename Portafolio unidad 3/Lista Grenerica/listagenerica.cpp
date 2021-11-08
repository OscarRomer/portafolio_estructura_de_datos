#include "lista_generica.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
//Oscar ALejandro Romero Gonzalez
int main(){
	Lista<int> miLista;
	cout << "La lista es: " << miLista.comoCadena() << endl << endl;
	
	Lista<int> miLista2 = miLista;
	cout << endl;
	
	cout << (miLista.estaVacia() ? "true" : "false") << endl << endl;
	
	miLista.adjuntar(41);
	cout << "La lista es: " << miLista.comoCadena() << endl << endl;
	
	miLista.adjuntar(52);
	cout << "La lista es: " << miLista.comoCadena() << endl << endl;
	
	miLista.adjuntar(63);
	cout << "La lista es: " << miLista.comoCadena() << endl << endl;
	
	miLista.insertar(2,74);
	cout << "La lista es: " << miLista.comoCadena() << endl << endl;
	
	miLista.insertar(0, 30);
	cout << "La lista es: " << miLista.comoCadena() << endl << endl;
	
	cout << "Tamano de la lista" << miLista.tamano() << endl << endl;
	
	cout << miLista.obtener(4) << endl << endl;
	
	cout << miLista.obtener(2) << endl << endl;
	cout << "La lista es: " << miLista.comoCadena() << endl << endl;
	
	miLista.adjuntar(85);
	cout << "La lista es: "<< miLista.comoCadena() << endl << endl;
	
	Lista<double> miListaDouble;
	cout<< "La lista es: "<< miListaDouble.comoCadena()<< endl << endl;
	Lista<double> miListaDouble2= miListaDouble;
	cout << endl;
	
	cout<< (miListaDouble.estaVacia() ? "true" : "false")<<endl <<endl;
	
	miListaDouble.adjuntar(100.1);
	cout<< "La lista es: "<< miListaDouble.comoCadena()<<endl <<endl;
	
	miListaDouble.adjuntar(105.3);
	cout<< "La lista es: "<< miListaDouble.comoCadena()<<endl <<endl;

	miListaDouble.adjuntar(94.5);
	cout<< "La lista es: "<< miListaDouble.comoCadena()<<endl <<endl;

	miListaDouble.insertar(1, 107.7);
	cout<< "La lista es: "<< miListaDouble.comoCadena()<<endl <<endl;

	miListaDouble.insertar(2, 365.50);
	cout<< "La lista es: "<< miListaDouble.comoCadena()<<endl <<endl;
	
	cout << "Tamano de la lista" << miListaDouble.tamano() << endl << endl;
	
	cout << miListaDouble.obtener(4) << endl << endl;
	
	cout << miListaDouble.remover(2) << endl << endl;
	cout<< "La lista es: "<< miListaDouble.comoCadena()<<endl <<endl;

	miListaDouble.adjuntar(104.5);
	cout<< "La lista es: "<< miListaDouble.comoCadena()<<endl <<endl;
	
	return 0;
}


