#include <iostream>
using namespace std;

struct Carro{
	string nome;
	string cor;
	int pot;
	int velmax;	
	int vel;
	
	void insere(string setnome,  string setcor, int setpot, int setvelmax){
		nome = setnome;
		cor = setcor;
		pot = setpot;
		velmax = setvelmax;
		vel = 0;
	}
	
	void mostra(){
		cout << "\nNome.............: " << nome << "\n";
		cout << "Cor..............: " << cor << "\n";
		cout << "Potencia.........: " << pot << "\n";
		cout << "Velocidade Atual: " << vel << "\n";
		cout << "Velocidade Maxima: " << velmax << "\n\n";
	}
	
	void mudaVel(int velAtual){
		vel = velAtual > velmax ? velmax
			  : velAtual < 0 ? 0
			  : velAtual;
	}

};

int main() {
	
	Carro car1, car2, car3, car4;
	
	car1.insere("Tornador", "Vermelho", 450, 350);
	
	// Antes
	car1.mostra();
	car1.mudaVel(-2);
	// Depois
	car1.mostra();
	
	return 0;
};



