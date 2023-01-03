#include <iostream>
#include <string>

using namespace std;

#define SIZE 50

void soma(int x, int y, int z);
void soma2(int *x, int *y, int *z);
void soma3(int &x, int &y, int &z);
inline int fatorial(int n);


int main(){
	
	/*
		Revisão rápida de conceitos
	*/
	
	int vetor[] {1, 2, 3, 4, 5, 6, 7, 8};
	
	int i{0};
	for(auto x : vetor){
		cout << "Index: " << i <<" - Value: " << x << endl;
		i++;
	}
	
	string nome;
	string sobrenome;
	
	cout << "Entre com seu nome: ";
//	cin >> nome; // Para evitar problema dos nomes com as linhas
	getline(cin, nome);
	
	cout << "Entre com seu sobrenome: ";
//	cin >> sobrenome; // Para evitar problema dos nomes com as linhas
	getline(cin, sobrenome);
	
	string nome_completo = nome + " " + sobrenome;
	
	cout << "Nome completo: " << nome_completo << endl;
	
	
	// ---- Ponteiros ------------------------------------------------
	
	int a = 50;
	cout << "Valor de a: " << a << endl;
	cout << "Endereço na memória de a: " << &a << endl;
	
	int *ptr_a = nullptr; 
	ptr_a = &a;
	cout << "Valor do ptr_a: " << ptr_a << endl;
	cout << "Valor apontado por ptr_a: " << *ptr_a << endl;
	
	// Alterando os valores por referencia
	
	int b{10}; int c{20}; int d{0};
	
	soma(b, c, d);
	cout << "Valor de d (por valor): " << d << endl;
	
	soma2(&b, &c, &d);
	cout << "Valor de d (por ref): " << d << endl;
	
	soma3(b, c, d);
	cout << "Valor de d (por ref - mais atual): " << d << endl;
	
	// Vetor com tamanho dinâmico
	
	int *vet = nullptr;
	vet = new int[SIZE];
	
	for(int i = 0; i < SIZE; i++)
		vet[i] = rand()%10;
		
	cout << "Vetor dinamico criado: " << endl;
	for(int i = 0; i < SIZE; i++)
		cout << vet[i] << " ";
		
	delete[] vet;
	
	cout << endl;
	
	// Declaração de variável que não irá mudar o valor - Promessa 
	const double pi = 3.1415; 
	
	// Otimização de funções - Melhora no tempo de execução
	
	cout << "Fatorial otimizado: " << fatorial(3) << endl;
	
	return 0;
}

// Ao não utilizar referencia pela memória, a função faz uma cópia somente das variaveis
void soma(int x, int y, int z){
	z = x+y;
}

// Passando como referência
void soma2(int *x, int *y, int *z){
	*z = *x + *y;
}

// Passando como referência - mais moderno
void soma3(int &x, int &y, int &z){
	z = x + y;
}

// Função otimizada -> Melhora no tempo de execução
inline int fatorial(int n){
	return (n < 2 ? 1 : n*fatorial(n-1));
}
