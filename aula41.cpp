#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	
	int num = 30;
	float pi = M_PI;
	
	// Precisao em 4 digitos casas decimais
	cout.precision(4);
	
	cout << "Valor de PI: " << pi << "\n";
	
	// Volta a precisao para antiga
	cout.precision(-1);
	
	cout << "Valor de PI: " << pi << "\n";
	
	// setw -> Dá um padding pra esquerda do número
	// setfill -> Preenche o vazio com o valor indicado
	cout << "Valor de NUM: " << setw(10) << setfill('0')<< num << "\n";
	
	return 0;
};



