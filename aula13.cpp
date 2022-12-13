#include <iostream>
using namespace std;

int main(){
	
	int val;
	
	cout << "Selecione uma cor:\n";
	cout << "\n[1, 2] - Transporte Terrestre, [3, 4] - Transporte aereo\n";
	
	cin >> val;
	
	switch(val){
		case 1:
		case 2:
			cout << "\nTransporte terrestre\n";
			switch(val){
				case 1:
					cout << "Carro selecionado\n";
					break;
				case 2:
					cout << "Moto selecionada\n";
					break;
			}
			break;
		case 3:
		case 4:
			cout << "\nTransporte aereo\n";
			switch(val){
				case 1:
					cout << "Aviao selecionado\n";
					break;
				case 2:
					cout << "Helicoptero selecionado\n";
					break;
			}
			break;
		default:
			cout << "Invalido\n";
	}
	
	cout << "Programa Finalizado";
	
	return 0;
}