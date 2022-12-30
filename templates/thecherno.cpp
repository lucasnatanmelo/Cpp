#include <iostream>
#include <string>
 
using namespace std;

/*
	Aula sobre template - The Cherno
		Permite que uma função possa ser sobrecarregada com vários tipos de entrada
		
*/

// Funções com template não existem na memória até o momento que sejam chamadas

template<typename T>
void Print(T value){
	cout << value << endl;
}

template <typename T, int N>
class Array{
	private: 
		T m_Array[N];
	public:
		int GetSize() const {
			return N;
		}

};

int main(){
	
	// A tipagem com <> pode ser omitida
	Print<int>(5);
	
	Print("Hello word");
	
	Print(5.5);
	
	// Pela classe
	Array<string, 5> array;
	
	cout << array.GetSize() << endl;
 	
	cin.get();	
}

