#include <iostream>
#include <fstream>  
#include <string>  
 
using namespace std;

/*
	Biblioteca para manipulação de arquivos
*/

int main(){
	
	fstream arquivo;
	string linha;
	char linha_b[255];
	
	// -- Gerar o arquivo ------------------------------------------------------------------
	
	arquivo.open("lucasnatan.txt", fstream::in|fstream::out|fstream::app);
	
	// in -> input(leitura)
	// out -> output(escrita)
	// binary -> modo binário
	// ate -> abre para escrita e posiciona no final
	// app -> append, abre para escrita sem deletar o conteúdo atual, posiciona no final
	// trunc -> truncate, abre para escrita e remove o conteúdo atual antes de abrir
	
	!!arquivo.is_open() // Verifica se o arquivo está aberto
	? arquivo << "Curso de C++ " << endl << "Biblioteca fstream" << endl // Escreve no arquivo  
	: cout << "Arquivo nao esta aberto " << endl;  
	
	arquivo.close(); // Fecha o arquivo
	
	cout << endl;
	
	// -- Leitura do arquivo --------------------------------------------------------------
	
	arquivo.open("lucasnatan.txt", fstream::in);
		
	if(!!arquivo.is_open()){
		while(getline(arquivo, linha)){
			cout << linha << endl;
		}
	} else {
		cout << "Arquivo nao esta aberto " << endl; 
	}
	
	arquivo.close(); // Fecha o arquivo
	
	cout << endl;
	return 0;
	
	// -- Escrever no arquivo --------------------------------------------------------------
	
	arquivo.open("lucasnatan.txt", fstream::out|fstream::app);
	
	!!arquivo.is_open() // Verifica se o arquivo está aberto
	? arquivo.write("\nwww.youtube.com\n", 26) // (O que sera escrito, tamanho do que sera escrito)
	: cout << "Arquivo nao esta aberto " << endl;  
	
	arquivo.close();
	cout << endl;
	
	arquivo.open("lucasnatan.txt", fstream::in);
		
	// leitura do arquivo por linha
	if(!!arquivo.is_open()){
		while(getline(arquivo, linha)){
			cout << linha << endl;
		}
	} else {
		cout << "Arquivo nao esta aberto " << endl; 
	}
	
	// read -> lê o arquivo
	
	arquivo.open("lucasnatan.txt", fstream::in);
	arquivo.read(linha_b, 3); // lê somente 3 caracteres
	cout << linha_b << endl;
	arquivo.close();
	cout << endl;
	
	// tellp = Retorna a posição do ponteiro dentro da stream
	// seekp = Define a posição do ponteiro dentro da stream
	
	// beg, cur, end = Constantes para definir a posição no steam
	
	arquivo.close();
}

