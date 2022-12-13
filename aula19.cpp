#include <iostream>
using namespace std;

int main(){
	
	int matriz[3][4];
	int outraMatriz[2][2];
	
	matriz[0][0] = 0;
	matriz[0][1] = 0;
	matriz[0][2] = 0;
	matriz[0][3] = 0;
	
	matriz[1][0] = 1;
	matriz[1][1] = 1;
	matriz[1][2] = 1;
	matriz[1][3] = 1;
	
	matriz[2][0] = 2;
	matriz[2][1] = 2;
	matriz[2][2] = 2;
	matriz[2][3] = 2;
	
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
//			cout << matriz[i][j] << "\n";
		}
//		cout << "\n";
	}
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cin >> outraMatriz[i][j];
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			cout << matriz[i][j] << "\n";
		}
		cout << "\n";
	}
	
	return 0;
}