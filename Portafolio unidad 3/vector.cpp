#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]){
	vector<int> v;
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	
	cout << v.size() << endl;
	cout << v[0] << v[1] << v[2] << endl;
	return 0;
}
