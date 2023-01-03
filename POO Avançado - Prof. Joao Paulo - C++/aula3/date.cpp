#include "date.h"
#include <iostream>

using namespace std;

int Date::howmany = 0;

// constutor -> 2 formas
Date::Date(int dd, int mm, int yy): d{dd}, m{mm}, y{yy}{
//	this->d = dd; this->m = mm; this->y = yy;
	cout << "Objeto inicializado!\n";
	this->howmany++;
}

Date::~Date(){
	cout << "Objeto destruido!\n";
	this->howmany--;
}

// imprime a data e conta a quantidaed de chamadas
void Date::print(){
	cout << this->d << "/" << this->m << "/" << this->y;
	this->count++;
}

void Date::set_day(int value){
	if(value > 0 && value <= 31)
		this->d = value;
}

void Date::set_month(int value){
	if(value > 0 && value <= 12)
		this->m = value;
}

void Date::set_year(int value){
	if(value > 0)
		this->y = value;
}