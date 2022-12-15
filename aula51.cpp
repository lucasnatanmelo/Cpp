#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
//	ofstream arquivoS;
//	
//	arquivoS.open("lucas.txt ", ios::app); // cria um arquivo txt //ios::app não sobrescreve o texto anterior, somente inclui
//	
//	arquivoS << "Cadastro: \n";
//	arquivoS << "Lucas Natan\n";
//	arquivoS << "24 anos de idade\n";
//	arquivoS << "Dev\n";
//		
//	arquivoS.close();
		
	ifstream arquivoE;
	string linha;

	arquivoE.open("lucas.txt");
	if(!!arquivoE.is_open()){
		while(getline(arquivoE, linha)){
			cout << linha << endl;
		}
		arquivoE.close();
	} else{
		cout << "Nao foi possivel abrir o arquivo" << endl;
	}
	
		
	return 0;
};



