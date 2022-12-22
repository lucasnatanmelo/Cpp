#include <iostream>

using namespace std;

int main(){
	
	int idade;
	string nome;
	
	cin >> nome >> idade;
	
	cout << nome << " - " << idade << " - " << "Usuario" << endl;
	
	char nome1[80];
	
	// Lê caracter por caracter
	cin.get(nome1, 80);
	
	cout << nome1  << endl;
	
	char nome2[80];
	
	// Lê a linha inteira - Recomendado para leitura de arquivo
	cin.getline(nome2, 80);
	
	cout << nome2  << endl;
	
	cout << nom2 << " - Tamanho da string: " << cin.gcount() << endl;
	
	// Armazena as primeiras letras 
	char n, s;
	
	n = cin.get();
	cin.ignore(80, ' '); 
	s = cin.get();
	cout << n << " - " << s << endl;
		
	return 0;
}
