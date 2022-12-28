#include <iostream>
#include <vector>  
#include <algorithm> 
 
/*
	Biblioteca - Algorithm
	Métodos com funções auxiliares
*/

using namespace std;

int main(){
	
	vector<int>vt = {2, 4, 12, 7, 8, 10, 12, -8, 1, 3, 5, 6, 9, 11, 13, 2, 7, 2};
	int index{0};
	
//	for(auto x:vt){
//		cout << x << " ";
//	}
	
	for(auto it=vt.begin(); it != vt.end(); it++){
		cout << "Index: " << index << " Valor: "<< *it << endl;
		index++;
	}
	
	cout << "\n\n";
	
	//all_of = Retorna true se o teste retornar true pelo menos com um dos elementos da coleção
	
	if(any_of(vt.begin(), vt.end(), [](int i){return i>12;})){
		cout << "Existe um ou mais elementos maiores que 12 " << "\n\n";
	} else {
		cout << "Todos sao menores ou iguais a 12" << "\n\n";
	}
	
	// none_of = Retorna false se o teste retornar false pelo menos com um dos elementos da coleção
	
	if(none_of(vt.begin(), vt.end(), [](int i){return i < 0;})){
		cout << "Todos sao positivos " << endl << endl;
	} else {
		cout << "Existe um negativo " << endl << endl;
	}
	
	// for_each = Aplica uma função a todos os elementos da coleção
	
	cout << "Dobro: " << endl;
	for_each(vt.begin(), vt.end(), [](int i){cout << i*2 << " ";});
	cout << "\n\n";
	
	// find = Procura um elemento e retorna um iterator com o resultado
	
	auto it=find(vt.begin(), vt.end(), 12);
	cout << *it << endl << endl;
	
	//find_if = Procura um elemento que atenda a uma determinada condição e retorna um iterator com o resultado
	
	// Nesse caso, retorn o primeiro elemento impar
	auto it2 = find_if(vt.begin(), vt.end(), [](int i){return ((i%2) == 1);});
	cout << "Primeiro elemento impar: " << *it2 << endl << endl;
	
	//find_if_not = Procura um elemento que NÃO atenda a uma determinada condição e retorna um iterator com o resultado
	
	// Nesse caso, retorn o primeiro elemento par
	auto it3 = find_if_not(vt.begin(), vt.end(), [](int i){return ((i%2) == 1);});
	cout << "Primeiro elemento par: " << *it3 << endl << endl;
	
	// count = Retorna a quantidade de repetições de um determinado elemento
	auto result = count(vt.begin(), vt.end(), 2);
	cout << "Quantidade do numeral 2: " << result << endl << endl;
	return 0;
	
	// count_if = Quantidade de um determinado elemento na coleção, que atenda uma condição
	auto result2 = count_if(vt.begin(), vt.end(), [](int i){return ((i%2)==0);});
	cout << "Quantidade de numeros pares: " << result2 << endl << endl;
	return 0;
}

// Jetbrains mono