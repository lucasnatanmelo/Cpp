#include <iostream>
#include <functional>

using namespace std;

// Biblioteca functional -> Funções para manipular métodos e variaveis internas a classes ou struct

int soma(int n1, int n2){
	return n1 + n2;
}

struct Cfb{
	int num;
	int dobro(){
		return num*2;
	}
};

class CfbClass{
	public:
		int num;
		CfbClass(int n):num(n){};
		int dobro(){
			return num*2;
		}
};

int main(){
	
	int n1 = 10;
	const int n2=5;
	
	// executa a função com os argumentos
	auto s1 = bind(soma, n1, n2); 
	
	cout << s1() << endl; // -> 15
	
	// Referencia outra variável
	
	int n3 = 10;
	
	auto n4 = cref(n3);
	
	n3++;
	
	cout << n4 << endl; //11
	
	Cfb n5{10};
	Cfb n6{5};
	
	auto dobro2 = mem_fn(&Cfb::dobro); //Pega determinado método da classe ou struct e aplica na variável
	
	cout << dobro2(n5) << endl;
	
	CfbClass n7{111};
	
	auto dobro3 = mem_fn(&CfbClass::dobro); //Pega determinado método e aplica na variável
	
	cout << dobro3(n7) << endl;
	
	return 0;
}
