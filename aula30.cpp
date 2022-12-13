#include <iostream>
#include <queue>
using namespace std;


int main(){
	
	/*
	empty
	size
	front
	back
	push
	pop
	*/
 	
 	// inicializa a pilha
	queue <string> cartas;

	// .push() -> Adiciona itens a pilha
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	
	// .empty() -> Retorna se a fila está vazia
	!!cartas.empty() ? cout << "Pilha vazia \n\n" : cout << "Pilha com cartas \n\n";
	
	// .front() -> Retorna a primeira carta da fila
	cout << "Primeira carta: " << cartas.front() << "\n";
	
	// .back() -> Retorna a última carta da fila
	cout << "Primeira carta: " << cartas.back() << "\n";
	
    // .size() -> Retorna o tamanho da fila
    cout << "Primeira carta: " << cartas.size() << "\n";
    
    // .pop() -> Retira a primeira carta da fila
    cout << "Primeira carta: " << cartas.pop() << "\n";
	 	
	return 0;
}



