#include <iostream>
#include <string.h>
using namespace std;

// Fatorial
// Fibonacci

int fatorial(int number, int result = 0);

int main(){
	
	fatorial(6); //Ex: Fatorial de 6
	
	return 0;
}

int fatorial(int number, int result){
	return result = (number != 0) ? (fatorial(--number, result == 0 ? number : (result)*(number))) : (result);
};


