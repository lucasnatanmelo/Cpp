#include <iostream>
#include <cctype> // ctype.h

using namespace std;

int main(){
	
	char str[] = "Lucas Natan";
	int i{0}, contSpace{0};
	char c;
	
	// isalnum -> retorna se é alfa numérico ou não
	while(!!(str[i])){
		cout << "O Caracter " << str[i];
		!!isalnum(str[i]) ? cout << " eh alfanumerio\n"  : cout << "nao eh alfanumerico\n";
		
		c = str[i];
		putchar(toupper(c)); // transforma tudo para maiusculo -> tolower -> tudo para minusculo
		
		if(isspace(str[i])){contSpace++;}
		i++;
	}
	
	cout << "Quantidade de espacos " << contSpace << endl;
	
	return 0;
}

/*
	isalnum
	isalpha
	isspace
	iscntrl -> \n -> Verifica se chegou no final
	isdigit -> se é um digito numérico
	islower -> verifica se é minusculo
	isupper -> verifica se é maiusculo
	isprint -> verifica se é possível
	ispunct -> verifica se é pontuação
	isxdigit -> verifica se é um caracter especial
*/