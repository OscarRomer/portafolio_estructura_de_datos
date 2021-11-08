#include <iostream>
#include <iomanip>

const int ESTUDIANTES = 3;
const int EVALUACIONES =4;

double minima(double[][EVALUACIONES], int, int);
double maxima(double[][EVALUACIONES], int, int);
double promedio(double[], int);
void imprimirArreglo(double[][EVALUACIONES], int, int);

int main(int argc, const char * argv[]){
	using namespace std;
	
	double notasEstudiantes[ESTUDIANTES][EVALUACIONES] ={ {7.7, 6.8, 8.6, 7.3},{9.6, 8.7, 8.9, 7.8},{7.0,9.0,8.6,8.1} };
	cout << "El arreglo es:" << endl;
	imprimirArreglo(notasEstudiantes, ESTUDIANTES, EVALUACIONES);
	
	
	cout << setprecision(1);
	cout << "\n\nNota maxima: " << maxima(notasEstudiantes, ESTUDIANTES, EVALUACIONES);
	cout << "\nNota minima: " << minima(notasEstudiantes, ESTUDIANTES, EVALUACIONES) << endl;

	for (int i = 0; i < ESTUDIANTES; i ++){
		cout << "\nPromedio estudiante [" << i << "]: ";
		cout << promedio(notasEstudiantes[i], EVALUACIONES);
	}
	cout << endl;
	
	return 0;
}

double minima(double notas[][EVALUACIONES], int alumnos, int examenes){
	double notaMinima = 10.0;
	
	for (int i = 0; i < alumnos; i++)
		for (int j = 0; j < examenes; j++)
			if (notas[i][j] < notaMinima)
				notaMinima = notas[i][j];
	
	return notaMinima;
}

double maxima(double notas[][EVALUACIONES], int alumnos, int examenes){
	double notaMaxima = 0.0;
	
	for (int i = 0; i < alumnos; i++)
		for (int j = 0; j < examenes; j++)
			if (notas[i][j] > notaMaxima)
				notaMaxima = notas[i][j];
	
	return notaMaxima;
}

double promedio(double conjuntoDeNotas[], int examenes){
	double total = 0.0;
	
	for (int i = 0; i < examenes; i++)
		total += conjuntoDeNotas[i];
		
	return total / examenes;
}

void imprimirArreglo(double notas[][EVALUACIONES], int alumnos, int examenes){
	using namespace std;
	cout << "                      [0]  [1]  [2]  [3]";
	
	for (int i = 0; i < alumnos; i++){
		cout << "\nnotasEstudiantes[" << i << "] ";
		for (int j = 0; j < examenes; j++)
			cout << setw(5) << fixed << setprecision(1) << notas[i][j];
	}
}

