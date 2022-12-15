#include <iostream>
#include "classesA46.h"

using namespace std;

int main() {
	
	Veiculo *v1 = new Veiculo(3);
	Veiculo *v2 = new Veiculo(1);
	Veiculo *v3 = new Veiculo(2);
	
	v1->setLigado(1);
	v2->setLigado(0);
	v3->setLigado(0);
	
	cout << v2 -> getVelMax() << endl;
	cout << v3 -> getVelMax() << endl;
	
	!!v1->getLigado() ? cout << "Veiculo 1 esta ligado\n\n" : cout << "Veiculo 1 esta desligado \n\n";  
	!!v2->getLigado() ? cout << "Veiculo 2 esta ligado\n\n" : cout << "Veiculo 2 esta desligado \n\n";  
	!!v3->getLigado() ? cout << "Veiculo 3 esta ligado\n\n" : cout << "Veiculo 3 esta desligado \n\n";  
				
	return 0;
};



