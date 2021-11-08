#include <iostream>
#include <stack>

using namespace std;

int main()
{
	//Haciendo uno de la estructura stack == pila
	// Last In First Out - LIFO
	//Último en Entrar, Primero en Salir
	
	stack<int> s;
	s.push(10);	//	| Top | 10 | Bottom |
	s.push(11); //	| Top | 11 | 10 | Bottom |
	s.push(12); //	| Top | 12 | 11 | 10 | Bottom |
	s.push(13); //	| Top | 13 | 12 | 11 | 10 | Bottom |
	s.push(14); //	| Top | 14 | 13 | 12 | 11 | 10 | Bottom |
	//s.pop();	//  | Top | 13 | 12 | 11 | 10 | Bottom
	s.push(15); //	| Top | 15 | 14 | 13 | 12| 11 | 10 | Bottom |
	s.push(16); //	| Top | 16 | 15 | 14 | 13 | 12 | 11 | 10 | Bottom |
	s.push(17); //	| Top | 17 | 16 | 15 | 14 | 13 | 12 | 11 | 10 | Botton |
	s.push(18); //	| Top | 18 | 17 | 16 | 15 | 14 | 13 | 12 | 11 | 10 | Bottom |
	s.push(19); //	| Top | 19 | 18 | 17 | 16 | 15 | 14 | 13 | 12 | 11 |10 | Bottom |
	s.push(20); //	| Top | 20 | 19 | 18 | 17 | 16 | 15 | 14 | 13 | 12 | 11 | 10 | Bottom |
	cout << "Tamanio de la pila o stack: " << s.size() << endl;
	cout << "Parte superior o Top del stack: " << s.top() << endl;
	stack<int> s1;
	s1 = s;
	while(!s1.empty())
	{
		cout << "Pop: " << s1.top() << endl;
		s1.pop();
		//cout << "Tamanio de la pila o stack: " << s1.size() << endl;
		//cout << "Parte superior o Top del stack": << s1.top() << endl;
	}
	return 0;
}
