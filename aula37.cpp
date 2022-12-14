#include <iostream>
using namespace std;

int main() {

	int *p;
	int vetor[10];
	
	// Trabalhando com arrays
	
	p =&vetor[0]; //p = vetor; (Mesma atribuição)
//	*(p+=1); // Não é necessário incrementar 4 bytes, o próprio ponteiro se encarrega
	cout << "\n" << p << "\n";
//	*(p+=1); 	
	p =&vetor[1]; 
	cout << "\n" << p << "\n";
//	*(p+=1); 		
	p =&vetor[2]; 
	cout << "\n" << p << "\n";
	
	// Atribuir valores pelo ponteiro
	
	// Na posição 0
	p=&vetor[0];
	*p=10;
	cout << "\n" << vetor[0] << "\n";
	// Na posição 1
	*(p++);
	*p=20;
	cout << "\n" << vetor[1] << "\n";
	// Na posição 3
	*(++p);
	*p=30;
	cout << "\n" << vetor[2] << "\n";
	return 0;
};



