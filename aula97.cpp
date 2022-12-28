#include <iostream>
#include <vector>  
#include <algorithm> 
 
using namespace std;

bool ehPar(int number);

int main(){
	
	vector<int>vt1 = {5, 10, 7, 3, 8, 9, 4, 2, 1, 0};
	vector<int>vt2 = {5, 10, 7, 3, 8, 9, 4, 2, 1, 0};
	vector<int>vt3 = {5, 10, 7, 3, 8, 9, 4, 0, 2, 1};
	vector<int>vt4 = {2, 5, 8};
	vector<int>vt5 = { 10, 11, 12};
	vector<int>::iterator it;
	
	// equal -> verifica se os elementos de uma coleção são iguais aos de outra
	cout << "EQUAL " << endl;
	
	bool result = equal(vt1.begin(), vt1.end(), vt2.begin());
	
	cout << "Colecoes " << (!!result ? "Iguais" : "Diferentes") << endl;	
	
	cout << "\n";
	
	// search -> Pesquisa se uma sequencia de elementos está em uma coleção
	cout << "SEARCH " << endl;
	it = search(vt1.begin(), vt1.end(), vt4.begin(), vt4.end());
		
	if(it!=vt1.end()){
		cout << "Colecao encontrada na posicao: " << it-vt1.begin() << endl;
	} else {
		cout << "Colecao nao encontrada" << endl;
	}
	
	cout << "\n";
	
	// copy -> Copia elementos de uma coleção em outra, mas não cria novas posições
	
	// Vários outro métodos interessantes
	// copy 
	// copy_if
	// move
	// swap
	// transform
	// replace
	
	// Reposiciona os elementos por outro determinado
	replace(vt2.begin(), vt2.end(), 3, 500);
	
	cout << "\n\n" << "vt2 com replace: " << endl;
	
	auto index{0};
	for(auto it = vt2.begin() ; it != vt2.end() ; it++, index++){
		if(!!ehPar(index)){
			replace(vt2.begin(), vt2.end(), *it, 500);	
		}		
		cout << *it << endl;
	}
	
	return 0;
}

bool ehPar(int number){return (number%2 == 0);}
