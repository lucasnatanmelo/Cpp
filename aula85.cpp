#include <iostream>
#include <string> 

using namespace std;

// Biblioteca string - Lib string - Implementa a classe string

int main(){
	
	string txt("Lucas Natan de Almeida Melo");
	int tam = txt.size();
	
	// Retorna o elemento na posição selecionada
	cout << txt.at(3) << endl; // Mesma aplicação -> txt[3]
	
	// Retorna o último elemento da string	
	txt.back() = 'O';	
		
	cout << txt.back() << endl; 
	
	// Retorna o primeiro elemento da string	
	txt.front() = 'l';	
	
	cout << txt.front() << endl; 	
	
	string txt2("CFB CURSOS");
	
	// Para concatenar mais conteúdos na string 
	txt2+= " - C++";
	
	txt2.append(" - Lucas Natan");
	
	txt2.push_back('N'); // Adiciona somente um caracter
	
	txt2.pop_back(); // Para retirar o ultimo item da string
		
	cout << txt2 << endl;
	
	string txt3("Exemplo");
	
	txt3.assign("Curso de C++"); // Mesma aplicação txt3 = "Curso de C++"
	
	cout << txt3 << endl;
	
	string txt4("CFB CURSOS");
	
	txt4.append("Curso de C++");
	
	// Insere itens na posição determinada
	txt4.insert(10, " - ");
	
	cout << txt4 << endl;
	
	string txt5("FPF TECH");
	
	// Apaga até determinada posição
	txt5.erase(4, 4);
	
	cout << txt5 << endl;
	
	string txt6("CURSO DE C++");
	string textToReplace = "JavaScript";
	
	// Troca os valores da string
	txt6.replace(9, 3, textToReplace);
	
	cout << txt6 << endl;
	
	string txt7("Primeiro texto");
	string txt8 = "Segund texto";
	
	txt7.swap(txt8);
	
	cout << txt7 << endl;
	cout << txt8 << endl;
	
	return 0;
}

