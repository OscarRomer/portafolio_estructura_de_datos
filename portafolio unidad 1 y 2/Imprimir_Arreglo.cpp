#include <iostream>
#include <iomanip>

void imprimirArreglo(int[][3], int, int);

int main(int argc, const char * argv[]){
	using namespace std;
	
	int arreglo1[2][3] = {{1,2,3},{4,5,6}};
	int arreglo2[2][3] = {1,2,3,4,5};
	int arreglo3[2][3] = {{1,2},{4}};	
	
	cout << "Los valores del arreglo del arreglo 1 son: " << endl;
	imprimirArreglo(arreglo1, 2, 3);
	cout << "Los valores del arreglo del arreglo 2 son: " << endl;
	imprimirArreglo(arreglo2, 2, 3);
	cout << "Los valores del arreglo del arreglo 3 son: " << endl;
	imprimirArreglo(arreglo3, 2, 3);
	
		
	return 0;
}

void imprimirArreglo(int arr[][3], int filas, int columnas){
	using namespace std;
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
		
	
}
