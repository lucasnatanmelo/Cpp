#include <iostream>
#include <string> 

using namespace std;

// Biblioteca string - Lib string - Implementa a classe string

int main(){
	
	string txt("Lucas Natan - C++");
	string::iterator it;
	
	// Retorna o primeiro item
	it = txt.begin();
	
	// Retorna o último item
//	it = txt.end() - 1;
	
	cout << *it << endl;
	
	// Size e Length -> Retornam o tamanho da string
	cout << txt.size() << endl;
	cout << txt.length() << endl;
	
	// max_size e capacity retorna o tamanho máximo que a string pode ter
	cout << txt.max_size() << endl;
	cout << txt.capacity() << endl;
	
//	txt.resize(10); -> modifica o tamanho alocado para a string
	
	txt.clear(); // limpa o conteúdo armazenado
	
	// Verifica se a string está vazia
	!!txt.empty() 
	? cout << "String vazia " << endl
	: cout << "String nao esta vazia " << txt << endl; 
	
	// Compacta para o tamanho da string ideal - Sem espaços vazios - tamanho mínimo de 15
	txt.shrink_to_fit();
	
	return 0;
}

