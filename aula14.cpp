#include <iostream>
using namespace std;

int main(){
	
	int n = 0;
	
	while(n<10){
		cout << n << "\n";
		
		n++;
	}
	
	// Outra maneira
//	while(n++<10){
//		cout << n << "\n";
//	}

	// Outra maneira
//	while(n++<10){
//		cout << n << "\n";
//		
//		if(n == 10){
//			break;
//		}
//	}

	
	cout << "Rotina finalizada\n";
	
	return 0;
}