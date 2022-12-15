#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	/*
		ofstream -> arquivo de saida. Sai do programa e entra no arquivo
		ifstream -> arquivo de entrada. Sai do arquivo e entra no programa
		fstream -> Tanto entrada como saida
	*/
	
	ofstream arquivo;
	
	arquivo.open("lucas.txt ", ios::app); // cria um arquivo txt //ios::app não sobrescreve o texto anterior, somente inclui
	
	arquivo << "Cadastro: \n";
	arquivo << "Lucas Natan\n";
	arquivo << "24 anos de idade\n";
	arquivo << "Dev\n";
		
	arquivo.close();
		
	return 0;
};



