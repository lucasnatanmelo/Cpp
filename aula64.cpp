#include <iostream>
#include <vector>

using namespace std;

class Carro{
	public:
		int velMax;
		int potencia;
		const char* nome;
		
		Carro(const char* n, int p){
			this->nome = n;
			this->potencia = p;

			if(p<100){
				this->velMax = 120;
			} else if(p<200){
				this->velMax = 220;
			} else {
				this->velMax = 350;
			}		
			
		}
};

// C++ 11
class CarroCPP11{
	public:
		int velMax;
		int potencia;
		const char* nome;
		
		CarroCPP11(const char* n, int p): nome(n), potencia(p){
			if(p<100){
				this->velMax = 120;
			} else if(p<200){
				this->velMax = 220;
			} else {
				this->velMax = 350;
			}
		}
};



int main() {
	// Forma antiga
	Carro *c1 = new Carro("Astra", 100);
	cout << c1->nome << " - " << c1->potencia  << " - " << c1->velMax << endl;
	delete c1;
	
	// C++ 11 moderno
//	unique_ptr<CarroCPP11>c2(new CarroCPP11{"Celta", 85});
	CarroCPP11 c2{"Celta", 70};
	cout << c2.nome << " - " << c2.potencia << " - " << c2.velMax << endl;
		
	return 0;	
}


