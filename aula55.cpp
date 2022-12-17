#include <iostream>
#include<vector>
#include<map>

using namespace std;

//C++11

struct Pessoa{
	string nome;
	int idade;
};

// Não é mais necessário declarar o construtor para classes

class Veiculo{
	public:
		int tipo;
		string nome;
};

int main() {
//  Conceito de inicialização uniforme	
	
//	int num = 10; 
	int num{10};
	
//	string nome = "Lucas";
	string nome{"Lucas"};
	
//	vector<int> valores = {1,2,3,4,5};
	vector<int>valores{1,2,3,4,5};
	
	map<string, string>capitais{{"Manaus", "Belo Horizonte"}};
	
	int vetor[]{1,2,3,4,5,6,7,8};
	
	//------------------------------------------------------------------------
	
	Pessoa p1{"Lucas", 24};
	Pessoa p2{"Bruo", 38};
		
	Veiculo v1{1, "Astra"};
	Veiculo v2{2, "Celta"};
	
	for(vector<int>::iterator it=valores.begin(); it != valores.end(); it++){
		cout << *it << endl;
	}
	
	for(map<string, string>::iterator it=capitais.begin(); it!=capitais.end(); it++){
		cout << it->first << " - " << it->second << endl;
	}
		
	cout << p1.nome << " - " << p1.idade << endl;	
	cout << v1.tipo << " - " << v1.nome << endl;	
		
	cout << vetor[3] <<	endl;
		
	return 0;	
}


