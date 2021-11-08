#include <iostream>

using namespace std;

class Circulo{
	double radio;
	public:
		Circulo(double r):radio(r){	}
		double circunf() {return 2*radio*3.14159265;}
};


int main(){
	Circulo foo (10.0);
	Circulo bar = 20.0;
	Circulo baz {30.0};
	Circulo qux={40.0};
	cout<<"Circunferencia de foo:"<<foo.circunf()<<'\n';
	cout<<"Circunferencia de bar:"<<bar.circunf()<<'\n';
	cout<<"Circunferencia de baz:"<<baz.circunf()<<'\n';
	cout<<"Circunferencia de qux:"<<qux.circunf()<<'\n';
	return 0;	
}
