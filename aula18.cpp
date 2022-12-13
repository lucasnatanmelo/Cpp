#include <iostream>
using namespace std;

int main(){
	
	// Inicializa o vetor com a quantidade de posicoess desejadas
	int vetor[5];
	
	//estrutura do vetor
	int esseVetor[5] = {10, 20, 30, 40, 50}; 
	
	// sizeof retorna a quantidade de bytes no array. Cada int possui 4 bytes.
	for(int i = 0; i < sizeof(esseVetor)/4 ; i++){
		cout << esseVetor[i] << "\n";
	}
	
	//Obs: Dependendo do SO, o tamanho do byte pode variar, sendo melhor utilizar 
	// sizeof(vetor) / sizeof(vetor[0]) para metrificar range

	// Outra forma de auxiliar
	int size = 5;
	
	int outroVetor[size];
	
	outroVetor[0] = 10;
	outroVetor[1] = 20;
	outroVetor[2] = 30;
	outroVetor[3] = 40;
	outroVetor[4] = 50;
	
	for(int i =0; i < size ; i++){
		cout << "\nVet na posi " << i << ": " << outroVetor[i] << "\n";
	}
	
	return 0;
}