#include <iostream>
#include <string.h>
using namespace std;

// int argc -> armazena a quantidade de argumentos
// char *argv[] -> armazena os argumentos

int main(int argc, char *argv[]){
	
//	cout << argv[0] << "\n";
//	cout << argc << "\n";
	
	if(argc > 1){
		if(!strcmp(argv[1], "sol")){
			cout << "Vou ao clube\n";
		} else if(!strcmp(argv[1], "nublado")){
			cout << "Vou ao cinema\n";
		} else{
			cout << "Vou ficar em casa\n";
		}
	}
	
	// argv[0] -> Nome do programa, por padrão
	// no cmd, ao passar o nome do programas mais os argumentos, estes argumentos serão armazenados
	// ex: aula21 Lucas Dev Fpf
	// cout << argc -> 4
	// cout << argv[2] -> Dev

	return 0;
}