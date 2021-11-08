#include <iostream>

using namespace std;

class Rectangulo{
	int ancho, alto;
	public:
		Rectangulo(int x, int y):ancho(x), alto(y){	}
		int area() {return ancho*alto;}
};


int main(){
	Rectangulo obj (3,4);
	Rectangulo * foo,*bar,*baz;
	foo = &obj;
	bar = new Rectangulo(5,6);
	baz = new Rectangulo[2]{{2,5},{3,6}};
	cout<<"obj's area:"<<obj.area()<<'\n';
	cout<<"foo's area:"<<foo->area()<<'\n';
	cout<<"bar's area:"<<bar->area()<<'\n';
	cout<<"baz[0]'s area:"<<baz[0].area()<<'\n';
	cout<<"baz[1]'s area:"<<baz[1].area()<<'\n';
	delete bar;
	delete[] baz;
	return 0;	
}
