#include "circulo.h"
#include <iostream>
using namespace std;

Circulo::Circulo(double xx, double yy, double rr) : Forma{xx, yy}, r{rr} { }

double Circulo::area() {return 3.141592* this->r* this->r;}

void Circulo::imprime_dados(){
	Forma::imprime_dados();
	
	cout << endl;
	
	cout << "Raio: " << this->r << endl;
	cout << "Area: " << this->area() << endl;
}