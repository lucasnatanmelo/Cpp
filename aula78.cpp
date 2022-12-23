#include <iostream>
#include <utility>

using namespace std;

// Biblioteca utility
/*
	swap
	pair
	make_pair
*/

int main(){
	
	int a,b;
	
	a = 10;
	b = 5;
	
	// Troca os valores das variaáveis
	swap(a, b);
	
	cout << "Valor de a: " << a << "/n" << "Valor de b: " << b << endl;
	
	// ATENÇÃO:
	// String -> Aspadas duplas -> " "
	// Char -> Aspas simples -> ' ' 
		
	pair<int, int>p1;		
	pair<int, char>p2;		
	pair<int, string>p3;		
	
	p1=make_pair(10, 5);	
	p2=make_pair(10, 'L');	
	p3=make_pair(10, "LUCAS NATAN");	
	
	cout << "Par 1: " << p1.first << " - " << p1.second << endl;
	cout << "Par 2: " << p2.first << " - " << p2.second << endl;
	cout << "Par 3: " << p3.first << " - " << p3.second << endl;
	
	return 0;
}
