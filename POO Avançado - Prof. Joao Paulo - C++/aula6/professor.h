#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>

#include "pessoa.h"

// Herda as propriedas de pessoa

class Professor : public Pessoa {
	private:
		int siape;
		int categoria;
		string instituto;
	public:
		Professor(string, string, int, int, string);
		~Professor(){ }
		int promover() { return ++this->categoria;};
		void setInstituto(string i) { this->instituto = i;};
		void imprime();
};

#endif