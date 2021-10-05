#include <iostream>
#include <array>

using namespace std;


int main(){
	array<int, 5> numeros={3, 5, 1, 4, 2};
	int valor = 4;
	int indice = -1;
	
	for (int i = 0; i <= numeros.size(); i++){
		if (numeros[i] == valor){
			indice = i;
			break;
		}
	}
	
	cout << "Indice del valor " << valor << ": " << indice << endl;
	return 0;
}
