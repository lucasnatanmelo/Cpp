#include <iostream>
using namespace std;

void somar(float *var, float valor);
void iniVetor(float *v);

int main() {

	float num = 0;
	float vetor[5];
	
	// É passado o valor da memória
	somar(&num, 15);
	iniVetor(vetor);
	
	cout << num << "\n\n";
	
	for(int i = 0; i < 5; i++){
		cout << vetor[i] << "\n";
	}	
	return 0;
};

// Parametro recebido com *
void somar(float *var, float valor){
	*var += valor;
}

// Função para inicializar um vetor
void iniVetor(float *v){
	v[0] = 5;
	v[1] = 5;
	v[2] = 5;
	v[3] = 5;
	v[4] = 5;
}


