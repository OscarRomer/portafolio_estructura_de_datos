#include <iostream>
#include <array>

using namespace std;

int main(int argc, char *argv[]){
	array<int, 3> a = {6, 7, 8};
	cout << a.size() << endl;
	cout << a[0] << a[1] << a[2] << endl;
	return 0;
}
