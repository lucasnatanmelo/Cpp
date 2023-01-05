#ifndef PILHA_H
#define PILHA_H

template <typename T>

class Pilha {
	private:
		int tamanho;
		int topo;
		T *pilha;
	public:
		Pilha(int = 10);
		~Pilha(){
			delete[] pilha;
		}
		
		bool push(T&);
		bool pop(T&);
		
		bool is_empty(){return this->topo == -1;};
		bool is_full(){return this->topo == tamanho - 1;}
};

#endif

// Construtor inicial
template <typename T>
Pilha<T>::Pilha(int size){
	this->tamanho = (size > 0 ? size : 10);
	topo = - 1; // Quando topo for -1, a pilha está cheia
	pilha = new T[this->tamanho];
}


template <typename T>
bool Pilha<T>::push(T &valor){
	if(this->is_full()){
		return false;
	} else{
		topo++;
		this->pilha[this->topo] = valor;
		return true;
	}
}
template <typename T>
bool Pilha<T>::pop(T &valor){
	if(this->is_empty()){
		return false;
	} else{
		valor = this->pilha[this->topo];
		topo--;
		return true;
	}
}



