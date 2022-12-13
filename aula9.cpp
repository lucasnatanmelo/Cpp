#include <iostream>
using namespace std;

int main(){
	
	int num1, num2;
	bool variable;
	char opc;
	
	num1 = 4;
	num2 = 2;
	variable = true;
	opc = 's';
	
	// >
	// <
	// >=
	// <=
	// ==
	// !=
	
//	if(num1 == 10){
//		cout << "Value is: " << opc; 
//	} else if(num1 == 10 && num2 == 2){
//		cout << "Value is 5: ";
//	} else{
//		cout << "Value is not neither 10 and neither 5";
//	}
	
	
	if(!!variable){
		cout << "It's true"; 
	} else{
		cout << "It's false";
	}
	
	
	return 0;
}