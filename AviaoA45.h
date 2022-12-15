#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

using namespace std;

// obs:
// caso nao seja delaclado namespace std, eh necessario utilizar std:: em string, cout e endl

class Aviao{
	
	public:
		int vel = 0;
		int velMax;
		string tipo;
		Aviao(int tp); // método construtor
		
		void imprimir();
		
	private:
		
};

Aviao::Aviao(int tp){
	switch(tp){
		case 1:
			this->velMax = 800;
			this->tipo = "Jato";
			break;
		case 2:
			this->velMax = 350;
			this->tipo = "Monomotor";
			break;
		case 3:
			this->velMax = 180;
			this->tipo = "Planador";
			break;
		default: break;
	}
}

void Aviao::imprimir(){
	cout << "Tipo.............: " << tipo << endl;
	cout << "Velocidade maxima: " << velMax << endl;
	cout << "Velocidade atual.: " << vel << endl;
	cout << "--------------------" << endl;
}

#endif // AVIAO_H_INCLUDED