#include <iostream>
#include <queue> // FILA - (first-In-First-Out)

using namespace std;

int main(){
	
	queue<int> fila1, fila2;
	
	int count{0};
	
	while(count != 5){
		fila1.push(count);
		count++;
	}
	
	fila1.emplace(60); // Outro método de adicionar itens na pilha
	
	// fila1.swap(fila2); -> alterna os elementos da pilha1 e pilha2
	
	cout << "Primeiro elemento: " << fila1.front() << endl;
	cout << "Ultimo elemento: " << fila1.back() << endl;
	cout << "Numero de elementos da Fila " << fila1.size() << endl;
	
	while(!fila1.empty()){
		cout << "Elemento da fila: " << fila1.front() << endl;
		fila1.pop(); // Retira o ultimo elemento da fila
	}
	
	cout << (!!fila1.empty() ? "Fila vazia" : "Fila nao vazia") << endl;
	
	cout << "Numero de elementos da Fila apos delecao : " << fila1.size() << endl;
	
	return 0;
}

