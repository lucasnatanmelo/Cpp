#include <iostream>
#include <string> 

using namespace std;

// Biblioteca string - Lib string - Implementa a classe string

int main(){
	
	string txt1("Curso de C++ - Biblioteca string");
	string txt2;
	
	// Encontra o item especificado
	size_t encontrado=txt1.find("de");
	
	if(encontrado!=string::npos){ //npos -> número estático quando não é encontrado
		cout << "Encontrado na posiçao: " << encontrado << endl;
	} else {
		cout << "Nao encontrado " << endl;
	}
	 
	string txt3("Curso de C++ - Biblioteca string");
	string txt4;
	
	txt4=txt3.substr(15, 10); // Seleciona a partir da posição e pega a quantidade determinada
	
	cout << txt4 << endl;
	
	string txt5("Lucas Natan");
	string txt6("Lucas Natan");
	
	
	// Para comparar strings
	if(txt5.compare(txt6)==0){
		cout << "String iguais " <<endl;
	} else {
		cout << "String diferentes" << endl;
	}
	
	string txt7("18"), txt8;
	int ano = 2018, res;
	
	res = ano - stoin(txt7);
	int ano = 2018, res;
	
	// Transforma string para inteiro
	res = ano - stoin(txt7;)
	
	// Transforma inteiro para string
	txt7 = to_string(res);
	
	cout << res << endl;
	
	cout << txt7 << endl;
	
	return 0;
}

