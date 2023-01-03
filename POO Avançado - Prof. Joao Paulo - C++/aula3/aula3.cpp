#include <iostream>
#include "date.cpp"
#include "date.h"

using namespace std;

int main(){
	Date aniversario {24, 8, 1998};
	cout << "Data completa aniversario: ";
	aniversario.print(); 
	
	cout << endl;
	
	cout << "Ano de aniversario: " << aniversario.get_year() << endl;
	
	cout << "Mês de aniversario: " << aniversario.get_month() << endl;
	
	cout << "Dia de aniversario: " << aniversario.get_day() << endl;

	cout << "Contador: " << aniversario.get_count() << endl;
	
	Date today {3, 1, 2022};
	cout << "\nHoje: ";
	today.print();
	
	cout << "\nQuantas instancias ativas? " << Date::how_many_instances() << endl; //today.how_many_instances()
	
	return 0;
}
