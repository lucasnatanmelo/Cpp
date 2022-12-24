#include <iostream>
#include <cstring> //string.h

using namespace std;

struct{
	char nome[40];
} pessoa1, pessoa2;

int main(){
	
	char txt1[50] = "Curso de programação";
	char txt2[50] = "";
	
	char meuNome[] = "Lucas";
		
	char varToConcat1[80] = "Curso de programação";
	char varToConcat2[80] = "- CFB CURSOS";
		
	// Faz a copia de txt1 para txt2  
	strcpy(txt2, txt1);
//	strncpy(txt2, txt1, 2); copia somente 2 caracteres
		
	cout << txt2 << endl;
	
	// Faz a copia pela memoria	
	memcpy(pessoa1.nome, meuNome, strlen(meuNome)+1);
	memcpy(pessoa2.nome, pessoa1.nome, sizeof(pessoa1.nome)+1);
	
	cout << pessoa2.nome << endl;
	
	strcat(varToConcat1, varToConcat2);
//	strncat(varToConcat1, varToConcat2, 6); concatena até 6 parametros
	
	cout << varToConcat1 << endl;
	
	// Para comparar as strings
	
	int result;
	
	char textToCompare1[80] = "Lucas Natan";
	char textToCompare2[80] = "de Almeida Melo";
	
	result = strcmp(textToCompare1,textToCompare2);
	
	cout << "VALUE FROM RESULT: " << result << endl;
	
	if(result == 0){
		cout << "iguais" << endl;
	} else if(result >= 0){
		cout << "texto 1 maior que o 2" << endl;
	} else if(result <= 0){
		cout << "texto 2 maior que o 1" << endl;
	}
			
	return 0;
}

