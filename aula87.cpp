#include <iostream>
#include <array> 

using namespace std;

// Biblioteca array

int main(){
	
	array<int, 10>vt = {2, 4, 5, 8, 0, 1, 3, 5, 7, 9};
	
	for(auto it=vt.begin(); it != vt.end(); it++) {
		cout << *it << endl;
	}
	
	cout << vt.size() << endl;
	cout << vt.max_size() << endl;
	
	if(!!vt.empty()){
		cout << "Array vazio" << endl;
	} else{
		cout << "Array nao esta vazio" << endl;
	}
   	
   	// Printa a posição vt[4]
   	cout << vt.at(4) << endl;
   	
   	// Printa o item da frente
   	cout << vt.front() << endl;
   	
   	// Printa o ultimo item
   	cout << vt.back() << endl;
   	
   	array<int, 5>vt2;
   	
   	// Preenche todos os elementos de um array com o valor determinado
   	vt2.fill(5);
   	
   	for(auto x:vt2){
   		cout << x << endl;
	}
	
//	vt2.swap(vt1); Para trocar os elementos de um para o outro
   	
	return 0;
}