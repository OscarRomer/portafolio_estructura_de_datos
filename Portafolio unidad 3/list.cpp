#include <iostream>
#include <list>

using namespace std;

int main(int argc, char *argv[]){
	list<int> a = {6, 7, 8};
	
	cout << a.size() << endl;
	cout << a.front() << a.back() << endl;
	return 0;
}
