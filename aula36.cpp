#include <iostream>
using namespace std;

int main() {
	
	// O ponteiro deve ser do mesmo tipo que a variável
	string veiculo = "Carro";
	string *pv;
	
	pv = &veiculo; // Ponteiro recebe o endereço da variável
	
	cout << pv << "\n" << &veiculo;
	
	cout <<*pv << "\n" << veiculo;// O valor de ponteiro é acessado por *pv. A partir dele é possível renomear a variável
			
	*pv="Moto"; // Mudando o valor
	
	cout << "\n" << *pv << "\n" << veiculo;
		
	return 0;
};



