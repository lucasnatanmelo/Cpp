#include "aluno.h"

Aluno::Aluno(string n, string e, string c, int m) : Pessoa{n, e}, curso{c}, matricula{m}{ }

void Aluno::setCurso(string c){
	this->curso = c;
}

void Aluno::imprime(){
	Pessoa::imprime(); // Chama as outras caracteristicas de pessoa
	cout << "Curso: " << this->curso << endl;
}