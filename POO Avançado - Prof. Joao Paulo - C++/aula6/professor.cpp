#include "professor.h"

Professor::Professor(string n, string e , int s, int c, string i): Pessoa{n, e}{
	this->siape = s;
	this->categoria = c;
	this->instituto = i;
};
void Professor::imprime(){
	Pessoa::imprime(); // Chama as outras caracteristicas de pessoa
	cout << "SIAPE: " << this->siape << endl;
	cout << "Categoria: " << this->categoria << endl;
	cout << "Instituto: " << this->instituto << endl;
};