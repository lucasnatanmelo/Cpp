#include <iostream>
#include<vector>

using namespace std;

int main() {
		
	int x[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	vector<int>v{10, 20, 30, 40, 50, 60, 70, 80, 90};
	
	// Nova declaração de strings
	//string nome="Lucas";
	const char* nome = "Lucas";
	
	// forma usual
	/*
	for(int 0; i < sizeof(x)/4; i++){
		cout << x[i] << endl;
	}
	*/
	
	// for-range-declaration
	for(auto i:x){
		cout << i << endl;
	}
	// Para percorrer o vector
	for(auto i:v){
		cout << i << endl;
	}
	
	// Percorrer string - for tradicional
	for(int i=0; i < sizeof(nome);i++){
		cout << nome[i] << endl;
	}
	
	return 0;	
}


