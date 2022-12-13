#include <iostream>
using namespace std;

int main(){

	int n1, n2, nota;
	string res;
	
	cout << "Dgite a primeira nota: ";
	cin >> n1;
	cout << "Digite a segunda note: ";
	cin >> n2;
	
	nota = n1 + n2;
	
	// Operador ternario		
	nota >=60 ? res = "Aprovado" : res = "Reprovado";
	
	// Operador ternario
	
	res = (nota >= 60) ? "Aprovado" : "Reprovado;
	
	cout << "\n\nSituacao do aluno: " << res << "\n";
	
	return 0;
}l