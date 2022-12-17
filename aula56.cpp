#include <iostream>
#include<vector>

using namespace std;

int soma(double n1, double n2){ 
	return n1+n2; 
}

string canal(){
	return "Lucas Natan";
}

void somador(){
	static auto i{0}; // static -> transforma a variavel em estática
					  // Em outras palavras, instancia o i na memória e seu valor fica salvo
	i++;
	cout << i << endl;
}

int main() {
	
	// register -> Deixa a critério do sistema a armazenagem da variável ou não
	register int cont;
	
	// Variável de tipagem dinâmica
	auto num=10;
	auto nome = "Lucas";
	auto valor = 10.5;
	
	vector<int>v{1,2,3,4,5,6,7,8};
	
	auto res = soma(10.3, 5.2);
		
	cout << res << endl;
	
	for(auto it=v.begin(); it !=v.end();it++){
		cout << *it << endl;
	}
		
	somador();		
	somador();		
	somador();		
	somador();		
	somador();		
	somador();		
	somador();		
	somador();		
	somador();		

	return 0;	
}


