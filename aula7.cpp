#include <iostream>
using namespace std;

int main(){
	int n1, n2, n3, n4, n5, n6;
	
	n1 = 0;
	n2 = 10;
	n3 = 20;
	n4 = 30;
	n5 = 5;
	n6 = 5;
	
	n1 = n1 + 1;
	n1 += 1;
	n1++;
	
	n2 = n2 - 1;
	n2 -= 1;
	n2--;
	
	n3 *= 2;
	
	n4 /= 3;
	cout << "N1 value: " << n1 << "\n\n";
	cout << "N2 value: " << n2 << "\n\n";
	cout << "N3 value: " << n3 << "\n\n";
	cout << "N4 value: " << n4 << "\n\n";
	
	cout << "N5 value with before increment: " << n5++ << "\n\n";
	//  variable++ behaviour result -> 5
	cout << "N6 value with before increment: " << ++n6 << "\n\n";
	//  ++variable behaviour result -> 6
	return 0;
}