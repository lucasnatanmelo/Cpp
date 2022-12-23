#include <iostream>
#include <typeinfo>

using namespace std;

class User{
	
};

// biblioteca typeinfo -> retorna informações de tipo

int main(){
	
	auto num1{10};
	auto num2{"L"};
	auto num3{10.5};
	User user;
	
	cout << "Tipo de num1: " << typeid(num1).name() << endl; // "i" -> int
	cout << "Tipo de num2: " << typeid(num2).name() << endl; // "c" -> char
	cout << "Tipo de num3: " << typeid(num3).name() << endl; // "d" -> double
	cout << "Tipo de user: " << typeid(user).name() << endl; // "4User" -> length: 4 and User
	
	return 0;
}
