#include <iostream>
#include <vector>  
#include <algorithm> 
 
/*
	Biblioteca - Algorithm
	Métodos para estruturas de dados
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
	
	return 0;
}

