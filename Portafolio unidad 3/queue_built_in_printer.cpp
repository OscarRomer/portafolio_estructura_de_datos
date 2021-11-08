#include <iostream>
#include <queue>

using namespace std;

void imprimir(queue<double> myqueue)
{
	queue<double> segundaCola = myqueue;
	cout << "INICIO_" ;
	while(!segundaCola.empty())
	{
		cout << "|" << segundaCola.front() << "|";
		segundaCola.pop();
	}
	cout << "_FIN_" << endl << endl;
}

int main()
{
	char continuar = 's';
	queue<double> myqueue;
	
	myqueue.push(1.2);
	imprimir(myqueue);
	myqueue.push(25);
	imprimir(myqueue);
	myqueue.push(78);
	imprimir(myqueue);
	myqueue.push(15.4);
	imprimir(myqueue);
	myqueue.push(98.5);
	imprimir(myqueue);
	myqueue.push(85);
	imprimir(myqueue);
	myqueue.push(1.3);
	imprimir(myqueue);
	myqueue.push(24);
	imprimir(myqueue);
	myqueue.push(3.25);
	imprimir(myqueue);
	
	cout << "Tamanio de la Cola: ";
	cout << myqueue.size() << endl;
	
	cout << " *** Inicia proceso de extraccion: *** " << endl;
	
	while(!myqueue.empty())
	{
		imprimir(myqueue);
		myqueue.pop();
	}
	return 0;
}
