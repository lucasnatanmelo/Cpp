#include <iostream>
#include<utility>
#include<vector>

using namespace std;

int main() {
	
	// Tipos de definições de pares:
	
	pair <int, string> primeiroPar(24, "Lucas");
		
	pair <int, string> segundoPar;
	
	const int tam = 3;
	
	pair <int, string> arrayDePar[tam];
	
	pair <int, pair <string, double>> produtos[tam];
	
	vector <pair<int, string>> vectorDePar;
	
	segundoPar.first = 100;
	segundoPar.second = "Natan";
		
	cout << primeiroPar.first << " - " << primeiroPar.second << endl;
	cout << segundoPar.first << " - " << segundoPar.second << endl;
 		
 	arrayDePar[0] = make_pair(10, "Primeiro");	
 	arrayDePar[1] = make_pair(20, "Segundo");	
 	arrayDePar[2] = make_pair(30, "Terceiro");	
 	
 	for(int i = 0; i < 3; i++){
 		cout << arrayDePar[i].first << " - " << arrayDePar[i].second << endl;
	}
 	
 	// Pair interno ao pair
 	produtos[0]=make_pair(10, make_pair("mouse", 10.55));
 	produtos[1]=make_pair(20, make_pair("teclado", 50.49));
 	produtos[2]=make_pair(30, make_pair("monitor", 399.98));
 	 	
 	for(int i = 0; i < 3; i++){
 		cout << produtos[i].first << " - " << produtos[i].second.first << " - " << produtos[i].second.second << endl;
	}
 	
 	vectorDePar.push_back(make_pair(10, "mouse"));
 	vectorDePar.push_back(make_pair(20, "teclado"));
 	vectorDePar.push_back(make_pair(30, "monitor"));
 	
 	for(auto i:vectorDePar){
 		cout << i.first << " - " << i.second << endl;
	 }
 	
	return 0;	
}


