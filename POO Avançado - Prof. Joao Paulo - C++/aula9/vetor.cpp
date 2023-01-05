#include <iostream>

using namespace std;

// Templates -> gabaritos
	/*
		Templates de classes e de templates de funções possibilitam a especificação, através de um único trecho
		de código, de um conjunto inteiro de classes ou funções relacionadas entre si, que diferem apenas por
		detalhes de tipo.
		
		Técnica chamada de programação genérica
		
		Ao invés de sobrecarregar uma função que possui vários tipos de entrada, é possível definir uma função
		nérica que aceite qualquer tipo de dados para tratamento
		
	*/

/*
	@description: função que printa todos os valores internos ao um array, com base em template
*/

template <typename T>
void print_vetor(T *v, int size){
	for(int i = 0; i < size; i++){
		cout << v[i] << " ";
	}
}

template <typename A>
void sort_vector(A vetor[], int tam){
	A aux;
	for(int i = 0; i < tam; i++){
		for(int j = 0; j < tam - 1 - i; j++){
			if(vetor[j+1] < vetor[j]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}
}

int main(){
	// Desclaração dos arrays
	
	float vf[10];
	int vi[10];
	
	// preencher os vetores
	
	for(int i = 0; i < 10; i++){
		vf[i] = (float)(rand()%100)/100.0;
	}
	
	for(int i = 0; i < 10; i++){
		vi[i] = rand() % 100;
	}
	
	// imprimir vetores
	cout << "\nVetor de float: ";
	print_vetor(vf, 10);
	
	cout << "\nVetor de int: ";
	print_vetor(vi, 10);
	
	return 0;
}