#include <iostream>
#include <vector>

using namespace std;

// C++ 11
// Herança 
// Uma classe herda características de outra classe

class Veiculo{
	private:
		const char* nome;
		const char* cor;
	public:
		int velMax;
		int rodas;
		void setNome(const char* no){
			this->nome = no;
		}
		const char* getNome(){
			return this->nome;
		}
		void setCor(const char* co){
			this->cor = co;
		}
		const char* getCor(){
			return this->cor;
		}
		// virtual -> permite sobrescrever o método por outra classe que herda
		virtual void imp(){
			cout << "Nome......: " << this->nome << endl;
			cout << "Cor.......: " << this->cor << endl;
			cout << "Rodas.....: " << this->rodas << endl;
			cout << "VelMax....: " << this->velMax << endl;
		}
};
// Carro extends Veiculo
class Carro:public Veiculo{
	public:
		Carro(){
			this->velMax = 160;
			this->rodas = 4;
			setNome("Carro");
			setCor("Branco");
		}
};

// Moto extends Veiculo
class Moto:public Veiculo{
	public:
		Moto(){
			this->velMax = 200;
			this->rodas = 2;
			setNome("Moto");
			setCor("Preto");
		}
};

// Moto extends Veiculo
class Militar:public Veiculo{
	public:
		int monicao;
		bool armamento;
		Militar(bool arma, int mo):armamento(arma), monicao(mo){
			this->velMax = 100;
			rodas = 6;
			setNome("Tanque");
			setCor("Verde");
			this->monicao = !!arma ? mo : 0; 
		}
		// override sobrescreve o método herdado
		void imp() override{
			cout << "Nome......: " << getNome() << endl;
			cout << "Cor.......: " << getCor() << endl;
			cout << "Rodas.....: " << this->rodas << endl;
			cout << "VelMax....: " << this->velMax << endl;
			
			if(!!this->monicao){
				cout << "Armamento.:" << this->armamento << endl;
				cout << "Monicao...:" << this->monicao << endl;
			} else{
				cout << "Armamento.:" << this->armamento << endl;
			}
		}
};


int main() {
	Carro v1;
	v1.imp();
	
	cout << "\n\n";
	
	Moto v2;
	v2.imp();
	
	cout << "\n\n";
	
	Militar v3{false, 200};
	v3.imp();
	
	cout << "\n\n";
	
	Militar v4{true, 400};
	v4.imp();
	return 0;	
}


