#include <iostream>
#include<map>

using namespace std;

int main() {
	
	map<int, string>primeiroProd;
	map<int, string>segundoProd;
	map<int, string>::iterator itmap;
	
	// Primeira forma de inserir
	primeiroProd[0] = "Mouse";
	primeiroProd[1] = "Teclado";
	primeiroProd[2] = "Monitor";
	primeiroProd[3] = "Cx.som";
	
	// Segunda forma de inserir
	segundoProd.insert(pair<int, string>(0, "Mouse"));
	segundoProd.insert(pair<int, string>(1, "Teclado"));
	segundoProd.insert(pair<int, string>(2, "Monitor"));
	segundoProd.insert(pair<int, string>(3, "Cx.som"));
	
	// Para apagar item pela CHAVE
	segundoProd.erase(2);
	
	// Para apagar uma intervalor de itens pela chave
	primeiroProd.erase(primeiroProd.begin(), primeiroProd.find(3));
	
	// Para apagar todos os elementos do map
	segundoProd.clear();
	
	// Para encontrar um item pela key
	itmap = primeiroProd.find(3);
	
	if(itmap == primeiroProd.end()){
		cout << "Produto nao encontrado" << endl;
	} else {
		cout << "Produto em estoque" << endl;
		cout << "Codigo: " << itmap->first << " - Produto "<< itmap->second << endl;
	}
	
	for(auto it = primeiroProd.begin(); it != primeiroProd.end(); it++ ){
		// first -> printa a key
		// second -> printa o valor
		cout << it->first << endl;
	}
	
	for(auto it:primeiroProd){
		// first -> printa a key
		// second -> printa o valor
		cout << it.first << " - " << it.second << endl;
	}
	
	for(auto it:segundoProd){
		// first -> printa a key
		// second -> printa o valor
		cout << it.first << " - " << it.second << endl;
	}
	
	return 0;	
}


