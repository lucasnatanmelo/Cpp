#ifndef FORMA_H
#define FORMA_H

using namespace std;

class Forma{
	protected:
		double x, y;
	public:
		Forma(double = 0, double = 0);
		~Forma(){ }
		/*
			virtual -> permite que os métodos e variáveis sejam sobreescritos
		*/
		virtual void imprime_dados();
		virtual double area(){ return 0; }
};

#endif