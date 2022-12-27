#include <iostream>
#include <map> 

using namespace std;

// MAP ---------------------

// Para debugar, comente a cada item

int main(){
	map<int, string>mp;
	map<int, string>::iterator it;
	
	// Não precisa estar ordenado
	mp[0] = "Branco";
	mp[1] = "Preto";
	mp[2] = "Vermelho";
	mp[3] = "Verde";
	mp[4] = "Azul";
	
	//  -- Acesso ao elementos pelo loop -----------------
	for(auto x:mp){
		cout << x.first << " - " << x.second << endl;
	}
	
	cout << endl;
	
	for(it=mp.begin(); it!=mp.end();it++){
		cout << it->first << " - " << it->second << endl;
	}
	
	cout << endl;
	
	//  -- Capacidade ------------------------------------
	map<char, int>mp2;
	
	mp2['a'] = 10;
	mp2['b'] = 20;
	mp2['c'] = 30;
	mp2['d'] = 40;
	mp2['e'] = 50;
	
	cout << mp2.size() << endl; // Retorna o tamanho da estrutura
	cout << mp2.map_size() << endl; // Retorna o máximo tamanho da estrutura
	cout << endl;
 	
	 //  -- Visualização -----------------------------------
 	map<char, int>mp3;
 	
 	mp2['a'] = 10;
	mp2['b'] = 20;
	mp2['c'] = 30;
	mp2['d'] = 40;
	mp2['e'] = 50;
 	
 	cout << mp3['a'] << " - " << mp3['b'] << endl;
 	cout << mp3.at('a') << " - " << mp3.at('b') << endl;
 	cout << endl;
 	
 	// -- Modificadores ---------------------------------
 	map<int, string>mp4;
 	map<int, string>mp5;
 	
 	// Para inserção de elementos
 	mp4.insert(pair<int, string>(10, "Laranja"));
 	mp4.insert(pair<int, string>(20, "Abacaxi"));
 	mp4.insert(pair<int, string>(30, "Uva"));
 	mp4.insert(pair<int, string>(40, "Morango"));
 	mp4.insert(pair<int, string>(500, "Banana"));
 	
 	mp4.erase(mp4.find(30));
 	
 	for(auto x:mp4){
		cout << x.first << " - " << x.second << endl;
	}
	
	mp4.swap(mp5);
	mp5.emplace_hint(mp5.end(), 60, "Manga");
	
	for(auto x:mp5){
		cout << x.first << " - " << x.second << endl;
	}
	
	// Para deletar todos os itens
	mp5.clear();
	
	// Verifica se está vazio
	cout << (!!mp4.empty() && !!mp5.empty() ? "MAP 4 e MAP 5 estao vazios" : "MAP 4 ou MAP 5 nao estao vazios") << endl;  

	// -- Operaçoes --------------------------------------
	
	map<int, char>mp6;
	map<int, char>::iterator it2;
	
	mp6[0] = 'a';
	mp6[1] = 'b';
	mp6[2] = 'c';
	mp6[3] = 'd';
	mp6[4] = 'e';
	
	// cout -> retorna se o valor foi encontrado ou não
	if(mp6.count(1) != 0){
		it2 = mp6.find(1);
		cout << it2->first << " - " << it2->second << endl;	
	} else {
		cout << "A chave não foi encontrada" << endl;	
	}
	
	// lower_bound() também retorna se foi encontrado ou não
	it2 = mp6.lower_bound(3);
	
	// apaga o item do map
	mp6.erase(it2);
	for(auto x:mp6){
		cout << x.first << " - " << x.second << endl;
	}
	
	return 0;
}

