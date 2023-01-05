#include "forma.h"
#include "forma.cpp"
#include "retangulo.h"
#include "retangulo.cpp"
#include "circulo.h"
#include "circulo.cpp"
#include <iostream>
using namespace std;

int main (){
	
	/*
		Acesso e criação de classes a partir de instanciação:	
	*/
	Forma ponto1 {10.0, 20.0};
	cout << "Forma: " << endl;
	ponto1.imprime_dados();
	cout << endl;
	cout << "Area = " << ponto1.area() << endl;
	
	cout << endl;
	
	cout << "Retangulo: " << endl;
	Retangulo ret1 {0, 0 , 10, 50};
	ret1.imprime_dados();
	
	cout << endl << endl;
	
	/*
		Acesso e criação de classes a partir de ponteiros:	
	*/
	
	Forma* ponto2 = new Forma{30.0, 40.0};
	cout << "Forma: " << endl;
	ponto2->imprime_dados();
	cout << endl;
	cout << "Area = " << ponto2->area() << endl;
	
	cout << endl;
	
	cout << "Retangulo: " << endl;
	Retangulo* ret2 = new Retangulo{0, 0 , 20, 60}; // Com o ponteiro dinamico e os métodos definidos com virtual em forma.h, é possível instanciar tanto com Forma 
													// ou Retangulo, que o compilador irá se adequar ao necessário
	ret2->imprime_dados();
	
	cout << endl;
	
	cout << "Circulo: " << endl;
	Circulo* cir1 = new Circulo{0, 0, 10};
	cir1->imprime_dados();
	
	// Vetor de formas
	
	Forma* vetor_formas[5];
	vetor_formas[0] = new Retangulo{0, 0 , 20, 60};
	vetor_formas[1] = new Circulo{0, 0, 10};
	vetor_formas[2] = new Forma{10.0, 20.0};
	vetor_formas[3] = new Circulo{10.0, 20.0, 10};
	vetor_formas[4] = new Retangulo{0, 0 , 20, 60};
	 
	// Forma* ou auto
	for(Forma* x : vetor_formas){
		cout << "Forma: " << endl;
		x->imprime_dados();
		cout << "\n\n";
	}
	
	return 0;
}