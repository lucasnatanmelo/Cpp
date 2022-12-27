#include <iostream>
#include <cstring> //string.h

using namespace std;

// Biblioteca para manipulação de strings

struct{
	char nome[40];
} pessoa1, pessoa2;

int main(){
	
	char txt1[50] = "Curso de programação";
	char txt2[50] = "";
	
	char meuNome[] = "Lucas";
		
	char varToConcat1[80] = "Curso de programação";
	char varToConcat2[80] = "- CFB CURSOS";
		
	// Faz a copia de txt1 para txt2  - Ideal para cópia de char
	strcpy(txt2, txt1);
//	strncpy(txt2, txt1, 2); copia somente 2 caracteres
		
	cout << txt2 << endl;
	
	// Faz a copia do bloco de memoria	
	memcpy(pessoa1.nome, meuNome, strlen(meuNome)+1);
	memcpy(pessoa2.nome, pessoa1.nome, sizeof(pessoa1.nome)+1);
	
	cout << pessoa2.nome << endl;
	
	strcat(varToConcat1, varToConcat2);
//	strncat(varToConcat1, varToConcat2, 6); concatena até a posição 6
	
	cout << varToConcat1 << endl;
	
	// Para comparar as strings
	
	int result1;
	
	char textToCompare1[80] = "Lucas Natan";
	char textToCompare2[80] = "de Almeida Melo";
	
	result1 = strcmp(textToCompare1,textToCompare2);
//	result = strncmp(textToCompare1,textToCompare2, 5); // Compara até determinada posição
		
	if(result1 == 0){
		cout << "iguais" << endl;
	} else if(result1 >= 0){
		cout << "texto 1 maior que o 2" << endl;
	} else if(result1 <= 0){
		cout << "texto 2 maior que o 1" << endl;
	}
		
	int result2;	
		
	char textToCompare3[80] = "Lucas Natan";
	char textToCompare4[80] = "Lucas Natan - C++";	
	
	result2 = memcmp(textToCompare3, textToCompare4, 5); // Compara até a posição determinada
	
	if(result2 == 0){
		cout << "iguais" << endl;
	} else if(result2 >= 0){
		cout << "texto 1 maior que o 2" << endl;
	} else if(result2 <= 0){
		cout << "texto 2 maior que o 1" << endl;
	}
			
	return 0;
}

