#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

const int ELEMENTOS = 5;

int main(){
	array<int, ELEMENTOS> arr={32, 27, 64, 18, 95};
	cout << "Elemento" << setw(13) << "Valor" << endl;
	
	for (size_t i=0; i<arr.size();i++)
		cout << setw(8) << i << setw(13) << arr[i] << endl;
	return 0;
}
