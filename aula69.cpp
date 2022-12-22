#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;


int main() {
	
	// Método FIND:
	// Procura o item solicitado
	
	// Array - Vetor ----------------------------------------------
	int vetor[] = {5, 7,2, 1, 4, 5, 6, 2};
	int *p;
	size_t tam = sizeof vetor/4;
	
	p = find(vetor, vetor + tam, 6);
	if(p!=vetor+tam){
		cout << "Numeral encontrado: " << *p << endl;
	} else{
		cout << "Numeral NAO encontrado " << endl;
	}
	
	// Vector -----------------------------------------------------
	vector<int>numVector = {5, 7,2, 1, 4, 5, 6, 2};
	auto itVector = find(numVector.begin(), numVector.end(), 7);
	
	if(itVector!=numVector.end()){
		cout << "Numeral encontrado: " << *itVector << endl;
	} else{
		cout << "Numeral NAO encontrado" << endl;
	}
	
	// List ------------------------------------------------------
	list<int>numList = {5, 7,2, 1, 4, 5, 6, 2};
	auto itList = find(numList.begin(), numList.end(), 7);
	
	if(itList!=numList.end()){
		cout << "Numeral encontrado: " << *itList << endl;
	} else{
		cout << "Numeral NAO encontrado" << endl;
	}
	
	// Vector -----------------------------------------------------
	// Algoritimo para preencher lista e não permitir que numeros se repitam
	
	vector<int>numeros;
	vector<int>::iterator itNum;
	int num, qtd = 10;
	
	/*while(qtd > 0){
		cout << "Digite um numeral";
		cin >> num;
		itNum = find(numeros.begin(), numeros.end(), num);
		if(itNum!=numeros.end()){
			cout << "Numeral ja existe no vector " << endl;
		} else{
			numeros.push_back(num);
			qtd--;
		}
	}*/
	
	// Map --------------------------------------------------------
	
	map<char, int>mapa;
	mapa['a'] = 10;
	mapa['b'] = 33;
	mapa['c'] = 25;
	mapa['d'] = 5;
	mapa['e'] = 7;
	
	auto itMap=mapa.find('e');
	
	if(itMap!=mapa.end()){
		cout << "Item encontrado " << "Chave: " << itMap->first << " Valor: " << itMap->second << endl; 
	} else {
		cout << "Chave NAO encontrada" << endl;
	}	
	
	// String --------------------------------------------------------
	
	string texto = "Lucas Natan de Almeida Melo";
	size_t enc = texto.find("Natan");
	
	if(enc!=string::npos){
		cout << "Palavra encontrada " << enc << endl;
	} else{
		cout << "Pavala NAO encontrada" << endl;
	}
	
	return 0;	
}


