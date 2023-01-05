#include "pessoa.h"

#include "pessoa.cpp"
#include "aluno.cpp"
#include "professor.cpp"


#include <iostream>

using namespace std;

int main(){
	
	cout << " --- Pessoa --- " << endl;
	Pessoa p1 {"Lucas Natan", "Manaus-AM"};
	p1.imprime();
	
	cout << endl;

	cout << "--- Aluno ---" << endl;	
	Aluno a1{"Mateus", "São Paulo", "Eng" , 12345};
	a1.imprime();
	
	cout << endl;
	
	cout << "--- Professor ---" << endl;
	Professor pr1 {"Jose", "Florianopolis", 678910, 3 , "ITA"};
	pr1.imprime();
	
	return 0;
}

/*
	Nota:
		Exemplo de herença multipla no video - Aula 06
*/
