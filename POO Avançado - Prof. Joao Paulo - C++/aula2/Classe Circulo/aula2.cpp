#include <iostream>
#include "circle.h"
#include "circle.cpp"

using namespace std;

int main(){
	Circle c1; // {0.0, 0, 0}
	Circle c2(15.7, 8.9, -5.1);
	Circle c3(7.7);
	
	cout << "\nCircle c1: ";
	c1.imprime();
	// Outros métodos aqui
	
	cout << "\nCircle c2: ";
	c2.imprime();
	// Outros métodos aqui
	
	cout << "\nCircle c3: ";
	c3.imprime();
	// Outros métodos aqui
	
	return 0;
}

/*
	Encapsulamento -> Separar métodos publicos dos privados
*/