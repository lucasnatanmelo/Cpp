#include <iostream>
#include <vector>

// C++ 11
class Carro{
	private:
		int velMax;
		void setVelMax(int vm){
			this->velMax = vm;
		}
	public:
		int potencia;
		const char* nome;
		
		// Case queira manipular publicamente
		/*void setVelMax(int vm){
			this->velMax = vm;
		}*/
		
		int getVelMax(){
			return this->velMax;
		}
		
		Carro(const char* n, int p): nome(n), potencia(p){
			if(p<100){
				this->setVelMax(120);
				// this->velMax = 120;
			} else if(p<200){
				this->setVelMax(220);
				// this->velMax = 220;
			} else {
				this->setVelMax(350);
				// this->velMax = 350;
			}
		}
};

using namespace std;

int main() {

	// C++ 11 moderno
//	unique_ptr<CarroCPP11>c2(new CarroCPP11{"Celta", 85});
	Carro c2{"Celta", 70};
		
	cout << c2.nome << " - " << c2.potencia << " - " << c2.getVelMax() << endl;
		
	return 0;	
}


