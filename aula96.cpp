#include <iostream>
#include <vector>  
#include <algorithm> 
#include <iterator> 
 
using namespace std;

int main(){
	
	vector<int>vt = {5, 10, 7, 3, 8, 9, 4, 2, 1, 0};
	vector<int>vt2 = {11, 12, 13};
	vector<int>::iterator it, it1, it2;
	
	for(it = vt.begin(); it != vt.end(); it++){
		cout << *it << endl;
	}
	
	for(auto x:vt2){
		cout << x << endl;
	}
	
	cout << "\n\n";
	
	// Para acesar um item
	it1 = vt.begin();
	it2 = vt.end() - 1;
	
	// Utilizar o * para acessar o item na memória
	cout << "Primeiro elemento: " << *it1 << "\nUltimo elemento: " << *it2 << endl;
	
	// Para deslocar os ponteiros
	
	advance(it1, 2);
	cout << "Terceiro elemento: " << *it1 << endl;
	
	advance(it2, -1);
	cout << "Penultimo elemento: " << *it2 << endl;
	
	// Retorna a distânica entre os iterators
	cout << "Valores entre it1 e it2: " << distance(it1, it2) - 1 << endl;
	
	// *prev(it1) -> retorna o anterior ao ponteiro it1
	// *next(it1) -> retorna o próximo ao ponteiro it1
	
	cout << *it1 << "- Antes: " << *prev(it1) << " depois: " << *next(it1) << endl;
	
	// Funções proprias para trabalhar com coleções de algorithm
	
	// Faz o merge da vt1 com a vt2 por trás
//	copy(vt2.begin(), vt2.end(), back_inserter(vt));
	
	// Faz o merge da vt1 com a vt2 pela frente
//	copy(vt2.begin(), vt2.end(), front_inserter(vt));
	
	// Faz a inserção na posição 5 de vt 
	copy(vt2.begin(), vt2.end(), inserter(vt, vt.begin() + 5)); 
	
	for(auto x:vt){
		cout << x << endl;
	}
	
	return 0;
}

