#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

// biblioteca de operações matemáticas

int main(){
	
	int n=-10;
	
	// abs(n) -> retorna o valor absoluto
	cout << abs(n) << endl;
	
	// Operações de divisão
	int numerador, denominador;
	div_t res;
	
	numerador = 10;
	denominador = 3;
	
	res = div(numerador, denominador);
	
	cout << numerador << " dividido por " << denominador << " = " << res.quot << " resto " << res.rem << endl;
	
	/*
		ldiv 
		lllabs c++11 
		llldiv c++11 
		RAND_MAX -> Retorna o valor máximo
	*/
	
	// Para listas, vectors, arrays
	size_t tam;
	
	vector<int> num = {9,6,3,8,5,2,7,4,1,0};
	
	tam=num.size();
	
	cout << "Tamanho do vector: "<< tam << endl;
	
	return 0;
}
