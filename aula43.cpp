#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	
	// system() -> executa funções do sistema
	// retorna todas as pastas 
	system("dir");
	
	// limpa o cmd
	system("cls");
	
	
	// Troca o fundo do prompt
	system("color 06");
	
	return 0;
};



