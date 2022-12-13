#include <iostream>
#include <stack>
using namespace std;


int main(){
	
	// inicializa a pilha
	stack <string> cartas;
	
	/*
	empty
	size
	push
	pop
	top
	*/
	
	// .push() -> Adiciona itens a pilha
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	
	// .empty() -> Retorna se a pilha está vazia
	!!cartas.empty() ? cout << "Pilha vazia \n\n" : cout << "Pilha com cartas \n\n";
	
	// .top() -> Retorna o elemento do topo da pilha
	cout << "Carta do topo antes do pop(): " << cartas.top() << "\n";
	
	cartas.pop();
	cartas.pop();
 	
 	cout << "Nova carta do topo: " << cartas.top() << "\n";
 	
	return 0;
}



