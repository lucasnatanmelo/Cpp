#include <iostream>
#include <vector>  
#include <algorithm> 
 
using namespace std;

int main(){
	
	vector<int>vt1 = {5, 10, 7, 3, 8, 9, 4, 2, 1, 0};
	vector<int>vt2 = {5, 10, 7, 3, 8, 9, 4, 2, 1, 0};
	vector<int>vt3 = {5, 10, 7, 3, 8, 9, 4, 0, 2, 1};
	vector<int>vt4 = {2, 5, 8};
	vector<int>vt5 = { 10, 11, 12};
	vector<int>::iterator it;
	
	// replace_if = Substitui valores da coleção que atendam a determinada condição
	cout << "replace_if" << endl;
	
	// Faz o replace em todos os item menores que 5 para 10
	replace_if(vt1.begin(), vt1.end(), [](int i){return i < 5;}, 10);
	for(auto x:vt1){
		cout << x << " ";
	}
	
	cout << "\n\n";
	
	// função fill -> preenche a coleção com determinado valor
	
	// remove -> Remove um valor indicado da coleção
	
	cout << "remove" << endl;
	vector<int>vt6{2,1,2,3,2,4,2,5,2,6,2};
	// Rotina para deleção
	// Conta quantos elementos "2" existem na coleção
	int qtde = count(vt6.begin(), vt6.end(), 2);
	// Remove todos os itens "2"
	remove(vt6.begin(), vt6.end(), 2);
	// Faz o resize da coleção
	vt6.resize(vt6.size() - qtde);
	vt6.shrink_to_fit();
	for(auto x:vt6){
		cout << x << " ";
	}
	
	cout << "\n\n";
	
	// unique -> remove sequencias repetidas consecutivas
	
	// reverse -> reverte a ordem dos elementos
	
	// sort -> ordena os elementos da coleção
	
	vector<int>vt7{2,1,2,3,2,4,2,5,2,6,2};
	
	cout << "sort" << endl;
	sort(vt7.begin(), vt7.end());
	for(auto x:vt7){
		cout << x << " ";
	}
	
	cout << "\n\n";
	
	// is_sorted -> verifica se a coleção está ordenada
	
	// merge -> faz a união de duas coleções
	
	// set_union -> faz a união de duas coleções
	
	// set_intersection -> interseção de duas coleções -> retorna os elementos de interseção
	
	// set_diference -> retorna os elementos que não se intercedem
	
	// min(n1, n2) e max(n1, n2) -> retorna os menores e maiores valores
	
	int n3{10}, n4{5}, n5{10}, n6{3}, n7{8}, n8{9};
	
	auto res = minmax({n3, n4, n5, n6, n7, n8});
	cout << "Menor: " << res.first << "Maior: " << res.second;
	
	//min_element, max_element, minmax_element -> Duas formas de retornar os valores maximos e minimos de coleções
	
	cout << "min_element, max_element, minmax_element" << endl;
	vector<int>vt20{5, 4, 10, 30, 12, 15, 8, 7};
	vector<int>::iterator it1, it2;
	
	it1 = min_element(vt20.begin(), vt20.end());
	it2 = max_element(vt20.begin(), vt20.end());
	auto res2 = minmax_element(vt20.begin(), vt20.end());
	
	cout << "Menor: " << *it1 << " Maior: " << *it2 << endl;
	cout << "Menor: " << *res2.first << " Maior: " << *res2.second << endl;
	
	return 0;
}

