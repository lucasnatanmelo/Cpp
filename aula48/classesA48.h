#ifndef CLASSESA48_H_INCLUDED
#define CLASSESA48_H_INCLUDED

#include <iostream>
using namespace std;

class Base1{
	public:
		void impBase1();
};

void Base1::impBase1(){
	cout << "Impt classe Base1" << endl;
}

// ------------------------------------

class Base2{
	public:
		void impBase2();
};

void Base2::impBase2(){
	cout << "Impt classe Base2" << endl;
}

// ------------------------------------

class CFB:public Base1, public Base2{
	
};

#endif // CLASSES_HA48_INCLUDED