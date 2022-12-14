#include <iostream>
#include <list>
using namespace std;


int main(){
	
//	list<int> aula(5, 50);
	list<int> aula, teste;
	int tam;
	list<int>::iterator it_insert; // Iterator para auxiliar no comando insert
	list<int>::iterator it_erase; // Iterator para auxiliar no comando erase
	
	teste.push_front(20);
	teste.push_front(21);
	teste.push_front(22);
	teste.push_front(23);
	
	tam = 10;
	
	for(int i=0; i < tam; i++){
		aula.push_front(i); // Insere um elemento na frente
//		aula.push_back(i); // Insere um elemento por trás
	}
	
//	it_insert = aula.begin();
//	advance(it_insert, 3);
//	aula.insert(it_insert, 0);
	
	it_erase = aula.begin();
	advance(it_erase, 3);
	aula.erase(it_erase); // Remove o elemento da posição desejada
	
	aula.clear(); // Limpa toda a lista 
	
	aula.merge(teste); // Junta as duas listas
	
	!!aula.empty() ? cout << "Lista esta vazia" : cout << "Lista nao esta vazia";  
	
	tam = aula.size(); // Retorna o tamanho da lista 
	
	for(int i=0; i < tam; i++){
		cout << aula.front() << "\n"; // Imprime o elemento da frente
		aula.pop_front(); // Retira o elemento que está na frente
//		aula.pop_back(); // Retira o elemento que está na frente
	}

	return 0;
}



