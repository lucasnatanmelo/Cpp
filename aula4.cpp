// Aula 4

#include <iostream>

using namespace std;

int main(){
	//Tipo, Nome = valor;
	
	int vidas = 0; //10, 25, 400, -3, -5
	double decimal = 2.49999; // 2,49999
	float decimal2 = 2.5; // 2,5 -> Precisao menor
	bool vivo = true; //true = verdadeira | false = falso
	string nome = "Lucas"; // "Lucas"
	char letra = 'B'; // 'B' -> Recebe somente um caracter
	char letras[20]; // String vetor
	
	
	cout << "Digite o numero de vidas: ";
	cin >> vidas;
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "Dinheiro: ";
	cin >> decimal;
	cout << "Digite seu nome: ";
	cin >> nome;
	
	vidas = 100;
	
	// printa valores na tela
	cout << "\nVidas: " << vidas << "\nDecimal: " << decimal << "\nDecimal2: " << decimal2 << "\nNome: " << nome << "\nLetra: " << letra << "\nVivo: " << vivo << "\n";
//	cout << decimal << "\n";
//	cout << decimal2 << "\n";
//	cout << nome << "\n";
//	cout << letra << "\n";
	
	return 0;
}