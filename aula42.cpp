#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	// vector
	vector<int> num1;
	vector<int> num2;
	
	int tam;
	
	num1.push_back(1);
	num1.push_back(2);
	num1.push_back(3);
	num1.push_back(4);
	num1.push_back(5);
	
	num1.insert(num1.begin() + 1, 500); // Pega a primeira posição e soma mais 1. - 1 auxilia na localização
	num1.insert(num1.end() -1, 100); // Pega a última posição e diminui mais 1. Penultima posição
	
	num1.erase(num1.begin() + 1); //Delete o segundo item. O 1 auxilia na posição desejada a ser retirado
	num1.erase(num1.end() - 1); //Remove o penúltimo item. 
		
	num2.push_back(5);
	num2.push_back(6);
	num2.push_back(7);
	num2.push_back(8);
	num2.push_back(9);
	
	// empty() retorna se está vazio 
	while(!num2.empty()){
		// pop_back() retira o ultimo elemento da lista
		num2.pop_back();
	}
	
		
	// Troca os valores entre num1 e num2	
//	num1.swap(num2);
	
	cout << "Primeiro valor de num1: " << num1.front() << endl;	
	cout << "Ultimo valor de num1..: " << num1.back() << endl;
	cout << "Valor do meio.........: " << num1.at(num1.size()/2) << endl;
	 
	
	cout << "num1: " << "\n";
	for (int i = 0; i < num1.size() ; i++){
		cout << num1[i] << "\n";
	}	
	
	cout << "\n";
	
	cout << "num2: " << "\n";
	for (int i = 0; i < num2.size() ; i++){
		cout << num2[i] << "\n";
	}	
	
	return 0;
};



