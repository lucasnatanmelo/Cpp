#include <iostream>
#include <vector>

using namespace std;

// C++ 11
// Public x Public x Protected 

// Public -> É possível acessar as propriedas e métodos publicamente
// Private -> Somente é possível acessar as propriedades e métodos internmante a classe
// Protected -> É possível acessar as propriedades e métodos pela classe que a herda

class Veiculo{
	private:
		int velMax;
		int potencia;
	public:
		int rodas;
		const char* nome;
	protected:
		int portas;
		const char* cor;
};

class Carro:public Veiculo{
	public:
		Carro(){
//			this->velMax = 180; -> Não é possível acessar - Private
//			this->potencia = 180; -> Não é possível acessar - Private
			this->rodas = 4;
			this->nome = "Carro";
			this->portas = 4; // É possível acessar pois herda - Protected
			this->cor = "Vermelho"; // É possível acessar pois herda - Protected
			
			
//			cout << this->velMax << endl; -> Não é possível acessar - Private
//			cout << this->potencia << endl; -> Não é possível acessar - Private
			cout << this->rodas << endl;
			cout << this->nome << endl;
			cout << this->portas << endl; // É possível acessar pois herda - Protected
			cout << this->cor << endl; // É possível acessar pois herda - Protected
		}
};

class Moto{
	public:
		Carro c;
		
		Moto(){
//			c.velMax = 180; -> Não é possível acessar - Private
//			c.potencia = 180; -> Não é possível acessar - Private
			c.rodas = 2;
			c.nome = "Moto";
//			c.portas = 4; -> Não é possível acessar pois herda - Protected
//			c.cor = "Vermelho"; -> Não é possível acessar pois herda - Protected
			
			
//			cout << c.velMax << endl; -> Não é possível acessar - Private
//			cout << c.potencia << endl; -> Não é possível acessar - Private
			cout << c.rodas << endl;
			cout << c.nome << endl;
//			cout << c.portas << endl; -> É possível acessar pois herda - Protected
//			cout << c.cor << endl; -> É possível acessar pois herda - Protected
		}
};

int main() {
	Carro v1;
	cout << endl << endl;
	Moto v2;
	
	return 0;	
}


