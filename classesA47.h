#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;

class Veiculo{
	public:
		int vel;
		int blind;
		int rodas;
		void setTipo(int tp);
		void setVelMax(int vm);
		void setArma(bool ar);
		void imprimir();
	private:
		int tipo;
		int velMax;
		bool arma;
};

void Veiculo::setTipo(int tp){
	tipo = tp;
}
void Veiculo::setVelMax(int vm){
	velMax = vm;
}
void Veiculo::setArma(bool ar){
	arma = ar;
}

void Veiculo::imprimir(){
	cout << "Tipo do veiculo:....... " << tipo << endl;
	cout << "Velocidade Maxima:..... " << velMax << endl;
	cout << "Quantidade de rodas:... " << rodas << endl;
	cout << "Blindagem:............. " << blind << endl;
	cout << "Armamento:............. " << arma << endl;
	cout << "-----------------------" << endl;
}

// ------------------------------------------------------

class Moto:public Veiculo{
	public:
		Moto();
};

Moto::Moto(){
	vel = 0;
	blind = 0;
	rodas = 2;
	setTipo(1);
	setVelMax(120);
	setArma(false);
}

// ------------------------------------------------------

class Carro:public Veiculo{
	public:
		Carro();
};

Carro::Carro(){
	vel = 0;
	blind = 0;
	rodas = 4;
	setTipo(2);
	setVelMax(200);
	setArma(false);
}

// ------------------------------------------------------

class Tanque:public Veiculo{
	public:
		Tanque();
};

Tanque::Tanque(){
	vel = 0;
	blind = 1;
	rodas = 8;
	setTipo(12);
	setVelMax(80);
	setArma(true);
}

#endif // CLASSES_H_INCLUDED