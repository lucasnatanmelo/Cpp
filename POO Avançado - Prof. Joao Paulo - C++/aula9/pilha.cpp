#include <iostream>
#include <cstdlib>
#include <string>
#include "pilha.h"

using namespace std;

int main(){
	Pilha<string> p;
	string v{""};
	
	cout << "Inserindo intens na pilha: " << endl;
	while(v != "stop"){
		getline(cin, v);
		if(v != "stop" ){p.push(v);};
	}
	
	cout << "Removendo intens..." << endl;
	
	while(!(p.is_empty())){
		p.pop(v);
		cout << v << " ";
	}
	
	return 0;
}