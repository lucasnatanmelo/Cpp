#include <iostream>
#include <cstdlib>
// #include <stdlib.h> Biblioteca de cabeçalho antiga
#include <ctime>

using namespace std;

int main(){
	
	double num;
	char numero[80];
	
	// Para transformar de um tipo para o outro
	/*
		atof -> char to float
		atoi -> char to int
		atol -> char to long int
		atoll -> chat to long long int
		
		astrtod -> string to double
		astrtof -> string to floar
		astrtol -> string to long int
		astrtoll -> string to long long int
	*/
	
	cin >> numero;
	// atof -> Converte para float e double
	num = atof(numero);
	
	// str -> converte char ou string para double
	num = strtod(numero, NULL);
		
	cout << num << endl;
	
	// Gerar números aleatórios:
	
	srand(time(NULL)); // Gera uma nova semente para os números aleatórios não se repetirem
	for(int i = 0; i < 10; i++){
		cout << rand()%50 << endl; // gera numeros aleatorios de 0 a 50
	}
	
	// Funções para gerenciamento de memória
		
	/*
		calloc malloc - Para alocação de memória
		free -> libera memória
		realloc -> aumentar ou diminuir o tamanho de memória para o componente
	*/
	
	int tam=10;
	int *vetor;
	
//	vetor=(int*)calloc(tam, sizeof(int));
	vetor=(int*)malloc(sizeof(int));
	
	srand(time(NULL));
	
	for(int i = 0; i < tam; i++){
		vetor[i] = rand()%100;
		cout << vetor[i] << endl;
	}
	
	// libera o espaço armazenado
	free(vetor);
	
	return 0;
}
