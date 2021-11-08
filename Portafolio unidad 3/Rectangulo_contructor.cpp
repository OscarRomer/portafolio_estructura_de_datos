#include <iostream>

using namespace std;

class Rectangulo{
	int ancho, alto;
	public:
		void set_valores(int, int);
		int area() {return ancho*alto;}
};


void Rectangulo::set_valores(int x, int y){
	ancho=x;
	alto=y;
}

int main(){
	Rectangulo rect, rectb;
	rect.set_valores(3,4);
	rectb.set_valores(5,6);

	cout<<"rect area:"<<rect.area()<<'\n';
	cout<<"rectb area:"<<rectb.area()<<'\n';
	
	return 0;	
}
