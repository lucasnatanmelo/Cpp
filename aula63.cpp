#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
	vector<int>n{0, 1, 2, 3, 4, 5, 6, 7};
	vector<int>::iterator it;
	
	// For Utilizando o iterator
	for(auto it = n.begin(); it !=n.end(); it++){
		cout << *it << endl;
	}
	
	// For com base em intervalo
	for(auto it:n){
		cout << it << endl;
	}
	
	// Param1: inicio
	// Param2: fim
	// Param3: Função que irá executar em cada elemento - nesse ex: Funçõo Lambda
	for_each(n.begin(), n.end(), [](int num){
		num+=10;
		cout << num << endl;
	});
	
	// A função não modfica os valores do vector
	for_each(n.begin(), n.end(), [](int num){
		cout << num << endl;
	});
		
	return 0;	
}


