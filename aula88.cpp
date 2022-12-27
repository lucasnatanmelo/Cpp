#include <iostream>
#include <vector> 

using namespace std;

int main(){
	
	vector<int>vct={9,2,4,6,7,2,3,5,9,6};
	int index{0};
		
	// Primeira forma de dar um loop no vector
	for(auto it= vct.begin(); it != vct.end(); it++){
		
		cout << "Index: "<< index << " Item: " << *it << endl;
		
		index++;
	}
	
	// Acessar elementos do vector
	
	cout << vct[3] << endl;
	cout << vct.at(3) << endl;
	cout << vct.front() << endl; // Retorna o primeiro elemento do vector
	cout << vct.back() << endl; // Retorna o último elemento do vector
		
	// Verificar tamanho do vector
	
	cout << vct.size() << endl; // Número de elementos atual do vector
	cout << vct.max_size() << endl; // Número máximo de elementos que o vector pode ter
	
	vct.resize(5); // Ajusta o tamanho do vector para o determinado
	
	cout << vct.size() << endl; // Novo tamanho
	
	index = 0;
	
	// Segunda forma de dar um loop no vector
	for(auto x:vct){
		cout << "Index: "<< index << " Item: " << x << endl;
		index++;
	}
	
	// Reformula a capacidade do vector
	vct.shrink_to_fit();
	
	// Capacidade do vector pré-definida (mesmo sendo reduzido)
	cout << vct.capacity() << endl;
	
	// Apaga todos os items do vector
	vct.clear();
	
	// Retorna se está vazio ou não
	cout << (!!vct.empty() ? "Vector vazio" : "Vector nao vazio") << endl;
	
	vector<int>vct1={9, 2, 3, 4, 1, 7, 8, 4, 9};
	vector<int>vct2;
	vector<int>vct3;
	
	// Atribui 5 elementos com valor 0 no vector
	vct2.assign(5, 0);
	
	// Atribui todoso os elementos de vct1 para vct2
	vct3.assign(vct1.begin(), vct2.end());
	
	vct2.push_back(13); // Adiciona um elemento na ultima posição do vector
	vct2.pop_back(); // Remove o ultimo elemento do vector
	
	for(auto x:vct2){
		cout << x << endl;
	}
	
	vector<int>vct4={9, 2, 3, 4, 1, 7, 8, 4, 9};
	vector<int>::iterator it1;
	
	// Para inserir elementos em uma determinada posição do vector
	it1=vct4.begin() + 5; // Necessário ter a referência pelo begin()
	vct4.insert(it1, 0);
	
	for(auto x:vct4){
		cout << x << endl;
	}
	
	vector<int>vct5={9, 2, 3, 4, 1, 7, 8, 4, 9};
	vector<int>::iterator it2;
	
	it2=vct5.end();
	vct5.insert(it2, 5, 9); // 5 vezes o elemento 9 no final do vector
	
	for(auto x:vct5){
		cout << x << endl;
	}
	
	vector<int>vct6={9, 2, 3, 4, 1, 7, 8, 4, 9};
	vector<int>::iterator it3;
	
	// Para deletar elementos de uma determinada posição
	
	it3=vct6.end() - 1;
//	it3 = vct6.begin() + 2; 
	vct6.erase(it3);
	
//	vct.erase(vct6.begin() + 2, vct6.end() - 1); // Retirar elementos de um range determinado
	
	for(auto y:vct6){
		cout << y << endl;
	}
	
	vector<int>vct7={44, 2, 3, 4, 1, 7, 8, 4, 33};
	vector<int>vct8={1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	// Troca todos os valores de um vector para o outro
	vct7.swap(vct8);
	
	for(auto y:vct8){
		cout << y << endl;
	}
	
	vector<int>vct9={1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	// Insere no lado esquerdo do elemento selecionado
	vct9.emplace(vct9.begin() + 2, 99);
	// Insere no final do vector
	vct9.emplace_back(88);
	
	for(auto y:vct9){
		cout << y << endl;
	}
	
	return 0;
}

