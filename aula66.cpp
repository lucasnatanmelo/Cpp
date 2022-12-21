#include <iostream>
#include <vector>

using namespace std;

// C++ 11
// Polimorfismo 
// Sobrecarga de métodos
// Uma classe pode conter um mois métodos com nomes iguais, mas devem possuir parametros diferentes

class Carro{
	private:
		int velMax;
		const char* nome;
	public:
		int potencia;
		int getVelMax(){
			return this->velMax;
		}
		const char* getNome(){
			return this->nome;
		}
		Carro(){
			this->velMax = 120;
			this->potencia = 85;
			this->nome = "Popular";
		}
		Carro(int pt, const char* no): potencia(pt), nome(no){
			if(pt<100){
				this->velMax =100;
			}
			else if(pt<200){
				this->velMax =100;
			} else{
				this->velMax = 360;
			} 
		}	
};

int main() {
	
	Carro c1;
	cout << c1.getNome() << " - " << c1.potencia << " - " << c1.getVelMax() << endl;
	
	Carro c2{300, "esportivo"};
	cout << c2.getNome() << " - " << c2.potencia << " - " << c2.getVelMax() << endl;
	
	Carro c3{180, "luxo"};
	cout << c3.getNome() << " - " << c3.potencia << " - " << c3.getVelMax() << endl;
	
	return 0;	
}


