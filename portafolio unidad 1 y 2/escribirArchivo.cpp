#include <iostream>
#include <array>
#include <string>
#include <fstream>

using namespace std;

void escribirArchivo(string archivo){
	ofstream miArchivo(archivo);
	string texto;
	if (miArchivo.is_open()){
		cout << "Ingrese el contenido del documento: \n (salir para terminar) \n";
		while (true) {
			getline(cin, texto);
			if (texto != "salir")
				miArchivo << texto << endl;
			else 
				break;
		}
		miArchivo.close();
	}
	else cout << "No se pudo abrir el archivo.";
}

int main(int num_args, char** arg_strings){
	string documento = arg_strings[1];
	escribirArchivo(documento);
	
	return 0;
}
