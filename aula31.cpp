#include <iostream>
#include <list>
using namespace std;


int main(){
	
//	list<int> aula(5, 50);
	list<int> aula;
	int tam;
	list<int>::iterator it; // Iterator para auxiliar no comando insert
	
	tam = 10;
	
	for(int i=0; i < tam; i++){
		aula.push_front(i); // Insere um elemento na frente
//		aula.push_back(i); // Insere um elemento por trás
	}
	
	
	// Para inserir o valor 0 na posição 5 da lista	
	it = aula.begin(); 
	advance(it, 7);
	
	aula.insert(it, 0);
	
	// Ordena a lista
	aula.sort();
	
	// Reverte a lista
	aula.reverse();
	
	cout << "Tamanho da lista: " << aula.size() << "\n\n";

	tam = aula.size(); // Retorna o tamanho da lista
	
	for(int i=0; i < tam; i++){
		cout << aula.front() << "\n"; // Imprime o elemento da frente
		aula.pop_front(); // Retira o elemento que está na frente
//		aula.pop_back(); // Retira o elemento que está na frente
	}

	return 0;
}



