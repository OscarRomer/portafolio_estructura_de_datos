#include <iostream>
#include <forward_list>

using namespace std;

int main(int argc, char *argv[]){
	forward_list<int> a = {6, 7, 8};
	
	cout << a.front() << endl;
	return 0;
}
