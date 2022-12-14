#include <iostream>
#include <stdio.h> // Para função printf e scanf
#include <stdlib.h> // Para função malloc
using namespace std;

int main() {
	
	int num1, num2, num3;
	char nome[10] ="Lucas";
	
	num2 = 2, num3 = 3;
	
	scanf("%d %s", &num1, &nome);
	
	printf("Valores das variaveis: %d\nNome: %s\n", num1, nome);
	
	return 0;
};



