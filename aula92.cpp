#include <iostream>
#include <stack> // PILHA - LIFO (last-In-First-Out)

using namespace std;

int main(){
	
	stack<int>pilha1, pilha2;
	
	int count{0};
	
	while(count != 5){
		pilha1.push(count);
		count++;
	}
	
	pilha2.emplace(60); // Outro método de adicionar itens na pilha
	
	// pilha1.swap(pilha2); -> alterna os elementos da pilha1 e pilha2
	
	cout << "Numero de elementos da pilha " << pilha1.size() << endl;
	
	while(!pilha1.empty()){
		cout << pilha1.top() << endl; //Imprime todos os valores internos a pilha
		pilha1.pop(); // Retira os elementos
	}
	
	cout << (!!pilha1.empty() ? "Pilha vazia" : "Pilha nao vazia") << endl;
	
	cout << "Numero de elementos da pilha apos delecao : " << pilha1.size() << endl;
	
	return 0;
}

