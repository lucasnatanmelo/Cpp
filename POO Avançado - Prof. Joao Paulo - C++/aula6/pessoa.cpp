#include "pessoa.h"
#include <string>
#include <iostream>
using namespace std;

Pessoa::Pessoa(string n, string e) : nome{n}, endereco{e}{ }

void Pessoa::setEndereco(string e){
	this->endereco = e;
};

void Pessoa::imprime(){
	cout << "Nome: " << this->nome << "\n";
	cout << "Endereco: " << this->endereco << "\n";
};