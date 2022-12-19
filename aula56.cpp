#include <iostream>
#include<vector>

using namespace std;

auto soma(double n1, double n2) -> double{ 
	return n1+n2; 
}

string canal(){
	return "Lucas Natan";
}

void somador(){
	static auto i{0}; // static -> transforma a variavel em estática
					  // Em outras palavras, armazena o valor de i
	i++;
	cout << i << endl;
}

int main() {
	
	// register -> Deixa a critério do sistema a armazenagem da variável ou não
	register int cont;
	
	// Variável de tipagem dinâmica
	auto num = 10; 
	auto nome = "Lucas";
	auto valor = 10.5;
	
	vector<int>v{1,2,3,4,5,6,7,8};
	
	auto res = soma(10.3, 5.2);
		
	cout << res << endl;
	
	for(auto it = v.begin(); it != v.end(); it++){
		cout << *it << endl;
	}
				//Sem static //Com static
	somador(); 	// 1 		 // 1
	somador();	// 1 		 // 2
	somador();	// 1 		 // 3
	somador();	// 1 		 // 4

	return 0;	
}


