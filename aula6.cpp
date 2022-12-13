#include <iostream>
using namespace std;

int n1, n2; // variaveis globais

int main(){
	// Operadores matematicos: 
	// + -> soma
	// - -> subtracao
	// / -> divisao
	// * -> multiplicacao
	// mod % -> resto da divisao
	// ()
	
	
	int n3, n4; // variaveis locais
	int res;
	
	n1 = 12;
	n2 = 3;
	n3 = 5;
	n4 = 2;
	
	res = (n1%n4 + n2*n3)/n2;
	
	cout << "Resultado da operacao: " << res << "\n\n";
		
	return 0;
}