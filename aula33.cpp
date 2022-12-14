#include <iostream>
using namespace std;

struct Carro{
	string nome;
	string cor;
	int pot;
	int velMax;	
};

int main(){
	
	Carro car1, car2;
	Carro car3;
	
	car1.nome = "Tornado";
	car1.cor = "Vermelho";
	car1.pot = 450;
	car1.velMax = 350;
	
	car2.nome = "Luxo";
	car2.cor = "Preto";
	car2.pot = 250;
	car2.velMax = 260;
	
	cout << "-------Car1------ " << "\n\n";
	
	cout << "Nome.............: " << car1.nome << "\n\n";
	cout << "Cor..............: " << car1.cor << "\n\n";
	cout << "Potencia.........: " << car1.pot << "\n\n";
	cout << "Velocidade Maxima: " << car1.velMax << "\n\n";
	
	cout << "-------Car2------ " << "\n\n";
	
	cout << "Nome.............: " << car2.nome << "\n\n";
	cout << "Cor..............: " << car2.cor << "\n\n";
	cout << "Potencia.........: " << car2.pot << "\n\n";
	cout << "Velocidade Maxima: " << car2.velMax << "\n\n";
	
	return 0;
}



