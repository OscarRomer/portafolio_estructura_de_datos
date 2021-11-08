#include <iostream>
#include <queue>

using namespace std;

int main()
{
	//Haciendo uno de la estructura queue == cola
	//First In First Out - FIFO
	//Primero en Entrar, Primero en Salir
	
	queue<int> q;
	q.push(10);	//	| Front | 10 | End |
	q.push(11); //	| Front | 10 | 11 | End |
	q.push(12); //	| Front | 10 | 11 | 12 | End |
	q.push(13); //	| Front | 10 | 11 | 12 | 13 | End |
	q.push(14); //	| Front | 10 | 11 | 12 | 13 | 14 | End |
	q.push(15); //	| Front | 10 | 11 | 12 | 13 | 14 | 15 | End |
	q.push(16); //	| Front | 10 | 11 | 12 | 13 | 14 | 15 | 16 | End |
	q.push(17); //	| Front | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | End |
	q.push(18); //	| Front | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | End |
	q.push(19); //	| Front | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | End |
	q.push(20); //	| Front | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | End |
	cout << "Tamanio de la queue o cola: " << q.size() << endl;
	cout << "Frente de la cola: " << q.front() << endl;
	cout << "Final de la cola: " << q.back() << endl;
	queue<int> q1;
	q1 = q;
	while(!q1.empty())
	{
		cout << "Dequeue: " << q1.front() << endl;
		q1.pop();
		//cout << "Tamanio de la queue o cola: " << q1.size() << endl;
		//cout << "Frente de la cola: " << q1.front() << endl;
		//cout << "Final de la cola: " << q1.back() << endl;
	}
	return 0;
}
