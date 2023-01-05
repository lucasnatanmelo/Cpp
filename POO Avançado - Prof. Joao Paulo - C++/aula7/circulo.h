#ifndef CIRCULO_H
#define CIRCULO_H

#include "circulo.h"
#include <iostream>

using namespace std;

class Circulo : public Forma {
	private:
		double r;
	public:
		Circulo(double, double, double);
		~Circulo() { }
		
		virtual double area();
		virtual void imprime_dados();
		 
};

#endif

