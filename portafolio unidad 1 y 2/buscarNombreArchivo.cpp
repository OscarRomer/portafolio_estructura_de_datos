#include <iostream>
#include <array>
#include <string>
#include <fstream>

using namespace std;

bool buscarEnArchivo(string archivo, string valorBuscado){
	bool encontrado = false;
	string linea;
	ifstream miArchivo(archivo);
	if(miArchivo.is_open()){
		while(getline(miArchivo, linea)){
			if(valorBuscado == linea){
				encontrado = true;
				break;
			}
		}
		miArchivo.close();
	} else {
		cout << "No se pudo abrir el archivo.";
	}
	return encontrado;
}

int main(int num_args, char** arg_strings){
	string documento = arg_strings[1];
	string valorAbuscar = arg_strings[2];
	
	if(buscarEnArchivo(documento, valorAbuscar)){
		cout << valorAbuscar << " esta en el arreglo" << endl;
	} else {
		cout << valorAbuscar << " no esta en el arreglo" << endl;
	}
	
	return 0;
}
