#include <iostream>
#include <cstring> //string.h

using namespace std;

// Biblioteca para manipulação de strings

int main(){
	
	char * txt1;
	char txt2[] = "Lucas Natan";
	char pesquisa1 = 's';
	
	// Para encontrar o item determinado
	txt1 = (char*)memchr(txt2, pesquisa1, strlen(txt2));
	
	// Tratamento do retorno
	txt1 != NULL 
	? cout << "Letra " << pesquisa1 << " encontrada na posicao: " << txt1-txt2 + 1 << endl //1 -> Opcional
	: cout << "Letra " << pesquisa1 << " nao encontrada" << endl;
		
	char txt3[] = "Lucas Natan";
	char * c;
	char pesquisa2 = 'C'; // Case sensitive - Ideal
		
	c = strchr(txt3, pesquisa2);
	
	// Tratamento do retorno
	(c - txt3) >= 0 
	? cout << "Letra " << pesquisa2 << " encontrada na posicao: " << c - txt3 +1 << endl //1 -> Opcional
	: cout << "Letra " << pesquisa2 << " nao encontrada" << endl;
	
	
	char txt4[] = "Lucas Natan - www.youtube.com";
	char chave[] = "yNty"; // Case sensitive - Ideal
	int i;
	
	// Dos itens que compoem chave, retorna o item mais proximo em txt4
	i = strcspn(txt4, chave);
	
	cout << "Pos: " << i << " - " << txt4[i] << endl;
	
	
	
	char txt5[] = "CFB CURSOS, Curso de C++ - www.youtube.com/cfbcursos";
	char * elements;
	
	// Printa os elementos separadamente conforme os elementos definidos em strtok
	
	elements=strtok(txt5, ",-");
	while(elements != NULL){
		cout << elements << endl;
		elements = strtok(NULL, ",-");
	}
	
	
	
	char txt6[] = "Lucas Natan de Almeida Melo";
	int size;
	
	// Retorna o tamanho da string como parametro
	size = strlen(txt6);
	
	cout << size << endl;
	
	for(int i=0; i < strlen(txt6); i++){
		cout << txt6[i] << endl;
	}
	
	
	return 0;
}

