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
	
	// Caso não queira instanciar
	// struct Carro carros[5];
	
	Carro *carros = new Carro[5];
	Carro car1, car2, car3, car4, car5;
	
	carros[0] = car1; carros[1] = car2; carros[2] = car3; carros[3] = car4; carros[4] = car5;
	
	carros[0].insere("Tornado", "Vermelho", 450, 350);
	carros[1].insere("Luxo", "Preto", 250, 260);
	carros[2].insere("Familia", "Prata", 150, 180);
	carros[3].insere("Trabalho", "Branco", 80, 120);
	carros[4].insere("Padrao", "Cinza", 100, 150);
	
	// Antes
	for(int i=0; i < 5; i++){
		carros[i].mostra();
	}
	
	// Mudando a velocidade
	for(int i=0; i < 5; i++){
		carros[i].mudaVel(200);
	}
	
	// Após
	for(int i=0; i < 5; i++){
		carros[i].mostra();
	}
	
	return 0;
};



