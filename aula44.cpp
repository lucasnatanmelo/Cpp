#include <iostream>

using namespace std;

class Aviao{
	
	public:
		int vel = 0;
		int velMax;
		string tipo;
		void init(int tp);
		
	private:
		
		
};

void Aviao::init(int tp){
	switch(tp){
		case 1:
			this->velMax = 800;
			this->tipo = "Jato";
			break;
		case 2:
			this->velMax = 350;
			this->tipo = "Monomotor";
			break;
		case 3:
			this->velMax = 180;
			this->tipo = "Planador";
			break;
		default: break;
	}
}


int main() {
	
	Aviao *av1 = new Aviao();	
	Aviao *av2 = new Aviao();
	Aviao *av3 = new Aviao();
	
	av1->init(1);
	av2->init(2);
	av3->init(3);
	
	cout << "AV1: " << av1->velMax << "\n\n";
	cout << "AV2: " << av2->velMax << "\n\n";
	cout << "AV3: " << av3->velMax << "\n\n";
	
	return 0;
};



