#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	cout << "É possível escrever maçã" << endl;
	
	return 0;
} 