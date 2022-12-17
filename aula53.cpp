#include <iostream>
#include<vector>

using namespace std;

int main() {
	
	vector<string>produtos={"mouse", "teclado", "monitor", "gabinete", "cx.som"};
	
	vector<string>::iterator it;
	
	it = produtos.end() - 1; // Aponta para o elemento final
	it = produtos.begin(); // Aponta para o elemento final
	
//  advance
//  next
//  prev
	
	// retorna -> gabinete; 0, 1, 2, 3
	advance(it, 1);
	
	cout << *it << endl;	
	
	// Avança para a direita 
	cout << *next(it , 2) << endl;
	
	// Retorna um elemento para esquerda
	cout << *prev(it, 1) << endl;
	
	
	cout << "\n" << "Dentro do for" << "\n";
	// Abordagem para imprimir todos os valores
	for (vector<string>::iterator it=produtos.begin(); it != produtos.end(); it++){
		cout << *it << endl;
	}
	return 0;
};




