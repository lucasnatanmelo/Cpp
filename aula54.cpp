#include <iostream>
#include<vector>
#include<stdexcept>

using namespace std;

double divide(double n1, double n2);

// Tratamento de erros

int main() {
	double n1, n2;
	
	cin >> n1 >> n2;
		
	try{
		cout << divide(n1, n2);			
	}catch(const char* error){
		cout << "ERRO: " << error  << endl;
	}
	
	return 0;
};

double divide(double n1, double n2){
	n2 == 0 ? throw "Erro de divisao por zero" 
	:
	n1 >=10 ? throw "N1 precisa ser menor que 10" 
	: n1/n2;
}


