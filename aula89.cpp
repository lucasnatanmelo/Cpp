#include <iostream>
#include <list> 

using namespace std;

/*
	Estrutura de dados - lista
*/

bool par(const int& value);

int main(){
	
	// Tipos de inicialização
	list<int>lst1;
	list<int>lst2(10, 0); // Insere 10 elementos de valor 0
	list<int>lst3(lst2); // Faz uma cópia de lst2
	list<int>lst4={1, 2, 3, 4};
	
	// Primeiro tipo de loop com for
	
	// Index de referencia
	int index = 0;
	
	for(auto it=lst4.begin(); it!=lst4.end(); it++, index++){
		cout << "Index: "<< index << " Item: "<< *it << endl;
	}
	
	cout << endl; 
	
	cout << "Tamanho: " << lst4.size() << endl; // Retorna o tamanho da lista
	cout << "Capacidade maxima: " << lst4.max_size() << endl; // Capacidade máxima da lista	
	cout << "Primeiro elemento: " << lst4.front() << endl; 	// Retorna o primeiro elemento da lista
	cout << "Ultimo elemento: " << lst4.back() << endl; // Retorna o ultimo elemento da lista	
	
	cout << (!!lst4.empty() ? "Lista esta vazia" : "Lista nao esta vazia") << endl; 
	
	// Funções de inserção ------------------------------------------------------------------
	
	list<int>lst5 = {1, 2, 3, 4};
	list<int>lst6;
	list<int>lst7;
	
	// Insere 10 elementos com valor 0
	lst6.assign(10, 0);
	
	// Preenche a partir de referenciação
	lst7.assign(lst5.begin(), lst5.end());
	
	for(auto x:lst7){
		cout << x << endl;
	}
	
	lst5.push_front(88); // Insere o elemento no inicio
	lst5.push_back(99); // Insere o elemento no fim
	
	lst5.pop_front(); // Retira o elemento do inicio
	lst5.pop_back(); // Retira o elemento do fim
	
	for(auto x:lst5){
		cout << x << endl;
	} 
	
	
	list<int>lst8 = {9, 9, 9, 9};
	list<int>::iterator it1;
	
	it1=lst8.begin();
	++it1;
	++it1;
	
	// Inserção do elemento em uma determinada posição
	
	lst8.insert(it1, 8);
//	lst8.insert(lst8.begin(), 8); -> Outra forma, sem precisar declara o iterator
		
	// Deleção de elemento em uma determinada posição
	list<int>::iterator it2;
	it1=lst8.begin();
	
	lst8.erase(it2);
	
	for(auto x:lst8){
		cout << "Lista 8: "<< x << endl;
	} 
	
	list<int>lst9={1, 2, 3, 4, 5, 6};
	list<int>lst10={7, 8, 9, 10, 11, 12};
	
	// Faz a troca dos itens
	lst9.swap(lst10);
	
	
	// Adiciona um item no local determinado 
	lst10.emplace(lst10.begin(), 100);
	
	// Adicona o item no final da lista
	lst10.emplace_back(20);
	
	// Adicona o item no inicio da lista
	lst10.emplace_front(30);
	
	cout << "Emplaced: " << endl;
	for(auto x:lst10){
		cout << x << endl;
	}
	
	
	list<int>lst11 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	
	// Para filtrar elementos com condicionais
	// Ex: filtrar elementos impares
		
	lst11.remove_if(par);
	
	for(auto x:lst11){
		cout << x << endl; 
	}
	
	list<int>lst12 = {0 , 1, -2, 4, -8, 4, 9, 7, 5, 6, 3, 2};
	
	// Ordena a função
	lst12.sort();
	
	// Retira os duplicados
	lst12.unique();
	
	for(auto x:lst12){
		cout << x << endl; 
	}
	
	list<int>lst13={0, 1, 2, 3, 4};
	list<int>lst14={5, 6, 7, 8, 9};
	
	// Mescla as listas
	lst13.merge(lst14);
	
	// Reverte a lista
	lst13.reverse();
	
	for(auto x:lst13){
		cout << x << endl; 
	}
		
	return 0;
}

bool par(const int& value){
	return (value%2 == 0);
}