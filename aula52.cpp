#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void imprimeNomes(fstream arquivo);

int main() {
	
	fstream arquivo;
	char opc = 's';
	string nome, linha;
	
	arquivo.open("lucasNatan.txt", ios::out | ios::app);
	
	while((opc == 's') || (opc == 'S')){
		cout << "Digite um nome: ";
		cin >> nome;
		arquivo << nome << "\n";
		cout << "\nDigita um novo nome?[s/n]";
		cin >> opc;
		system("CLS");
	}
	
	arquivo.close();
	
	arquivo.open("lucasNatan.txt", ios::in);
	
	cout << "Nomes digitados: " << endl;
	
	if(arquivo.is_open()){
		while(getline(arquivo, linha)){
			cout << linha << endl;
		}
		arquivo.close();
	} else {
		cout << "Não foi possível abrir o arquivo" << endl;
	}
		
	return 0;
};




