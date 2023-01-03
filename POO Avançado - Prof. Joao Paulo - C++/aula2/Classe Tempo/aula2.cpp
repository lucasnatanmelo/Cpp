#include <iostream>
#include "tempo.cpp"
#include "tempo.h"

using namespace std;

int main(){
	Tempo tempoPadrao;
	Tempo customTempo(11, 20, 36);
	
	cout << "Hora Padrao: ";
	tempoPadrao.imprime();
	
	cout << "\nHora customizada: " << endl;
	customTempo.imprime();
	
	tempoPadrao.setTempo(11, 25, 00);	
		
	cout << "\nHora padrao atualizada: ";
	tempoPadrao.imprime();
	return 0;
}
