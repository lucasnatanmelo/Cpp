#include <iostream>
#include<vector>

using namespace std;

int main() {
	
	int x1 = 10, x2 = 5, x3 = 2, x4 = 12;
	
	// funções lambda - estrutura:
	// [](){}
	// [] -> Captura as variáveis disponíveis no escopo
	// () -> Recebe variáveis por parâmetro de função
	// {} -> Retorno
	
	// auto soma = [=]() -> Captura TODAS as variáveis do escopo	
	auto soma = [x1, x2, x3,x4]() -> int{
		return x1 + x2 + x3 + x4;
	};
	
	auto maior = [](vector<int>n)->int{
		auto m=0;
		for(auto x:n){
			m = (m>x) ? m : x;
		}
		return m;
	};
	
	cout << maior ({9, 2, 4, -1, 33, 55, 2, 100}) << endl;
	cout << soma() << endl;
	
	return 0;	
}


