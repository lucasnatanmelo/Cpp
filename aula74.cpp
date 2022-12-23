#include <iostream>
#include <cstdlib>

using namespace std;

void fim(){
	cout << "LUCAS NATAN" << endl;
}

// Função auxiliar para ordenação de vetor
int comparacao(const void*a, const void*b){
	return (*(int*)a - *(int*)b);
}


int main(){
	
	atexit(fim); // É executada no final da execução do programa
	// at_quick_exit(fim); C++ 11
	
	for(int i=0; i < 10; i++){
		if(i<5){
			cout << i << endl;
		} else {
			// abort();
			exit(EXIT_SUCCESS); // Retorna 0
			// exit(EXIT_FAILURE); // Retorna 1
			
			// quick_exit(EXIT_SUCCESS); // Retorna 0 - C++ 11
			
			cout << i << endl;
		}
	}
	
	const char* p;
	
	// Para pegar os valores das variáveis de ambiente
	p = getenv("PATH");
	
	cout << p << endl;
	
	const char* user = "Lucas Natan";
	
	for(int i=0; i < 10; i++){
		cout << i << endl;
	}
	
	// Funções internas ao sistema
	system("cls");
	system("dir");
	cout << user << endl;
	system("pause");
	
	
	int vetor[] = {9, 1, 8, 2, 7, 3, 6, 4, 5, 0};
	
	// Item a pesquisar
	int pesq = 7;
	int *pos;
	
	// Função de ordenação de um vetor
	qsort(vetor, 10, sizeof(int), comparacao);
	
	for(int i = 0; i<10; i++){
		cout << vetor[i] << endl;
	}
	// Função para retornar a posição do elemento
	// necessário fazer tapecast -> estudar tapecast
	pos=(int*)bsearch(&pesq, vetor, 10, sizeof(int), comparacao);
	
	cout << "Elemento: " << pesq << "esta na posicao" << *pos << endl;
	
	return 0;
}
