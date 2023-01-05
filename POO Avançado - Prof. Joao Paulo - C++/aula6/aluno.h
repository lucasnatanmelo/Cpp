#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>

#include "pessoa.h"

using namespace std;

// Herda as propriedas de pessoa

class Aluno : public Pessoa {
	private:
		string curso;
		int matricula;
	public:
		Aluno(string, string, string, int);
		~Aluno(){ }
		void setCurso(string);
		void imprime();
};

#endif