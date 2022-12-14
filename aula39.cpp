#include <iostream>
#include <stdio.h> // Para função gets
#include <stdlib.h> // Para função malloc
using namespace std;

int main() {
	
	/*
		Problema de alocação de memória:
		Ao declarar uma variável do tipo char com n posições, se todas essas posições não for utilizado ,ainda sim
		ficará espaço alocado para tal variável.
		Caso exceda o tamanho, poderá ocasionar ocupação de memória que foi alocada para outra variável ou rotina do sistema.
		
		A alocação de memórica com malloc resolve esse problema alocando o tamanho necessário para essa variável
	*/
	
	
	char *vnome;
	
	// malloc retorna void, logo é necessário definir o retorno como char *
	// + 1 auxiliar com mais na quantidade de memória
	vnome = (char *) malloc(sizeof(char) + 1);
	
	gets(vnome); // Substitui o cin >> vnome (O cin não captura textos com espaço. Ex: "Lucas Natan" -> "Lucas")
	
	cout << vnome;	
	
	return 0;
};



