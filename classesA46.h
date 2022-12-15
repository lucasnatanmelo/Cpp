#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;

class Veiculo{
	public:
		int vel;
		int tipo;
		
		Veiculo(int tp); // Metodo construtor
		
		int getVelMax();
		bool getLigado();
		void setLigado(int l);
			
	private:
		void setVelMax(int vm);
		string nome;
		int velMax;
		bool ligado;
};

// Veiculo:: -> Indica a classe a qual o metodo sera utilizado

int Veiculo::getVelMax(){
	return velMax;
}

void Veiculo::setVelMax(int vm){
	velMax=vm;
}

bool Veiculo::getLigado(){
	return ligado;	
}

void Veiculo::setLigado(int l){
	ligado = l == 1 ? true : false; 
}


Veiculo::Veiculo(int tp){
	tipo=tp;
	switch(tipo){
		case 1:
			nome = "Carro";
			setVelMax(200);
		case 2:
			nome = "Aviao";
			setVelMax(800);
		case 3:
			nome = "Navio";
			setVelMax(100);
	}
	setLigado(0);
}

#endif // CLASSES_H_INCLUDED