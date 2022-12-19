#include <iostream>
#include <memory>
#include<map>

using namespace std;

class Carro{
	public:
		int vel = 0;
		int getVel(){
			return vel;
		}
};

int main() {
	
	/*
	Revisao de ponteiros --------------------------------------------
	*/
	
	int *pnum;
	int num;
	
	num=10;
	pnum = &num;
	
	cout << "Valor de num pelo ponteiro: " << *pnum << endl;
	cout << "Valor de num pelo ponteiro - memoria: " << pnum << endl;
	
	delete pnum;
	
	// --------------------------------------------------------------
	// Ponteiro unico
	
	unique_ptr<int>uniquepnum(new int);
	
	*uniquepnum = 10;
	
	cout << *uniquepnum << " - " << &uniquepnum << endl;
	
	// --------------------------------------------------------------
	// Ponteiro compartilhado
	
	shared_ptr<int>sharedpnum(new int);
	shared_ptr<int>sharedpnum2 = sharedpnum;
	
	*sharedpnum = 10;
	
	cout << *sharedpnum << " - " << &sharedpnum << endl;
	
	// --------------------------------------------------------------
	// Com strings
	
	unique_ptr<string> str(new string("Lucas Natan"));
	cout << *str << " - tamanho: " << str->size() << endl;
		
	// --------------------------------------------------------------
	// Com classes
	
	unique_ptr<Carro>c1(new Carro);
	cout << "Velocidade: " << c1->getVel() << endl; 	
	return 0;	
}


