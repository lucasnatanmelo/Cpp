#include "circle.h"
#include <iostream>

using namespace std;

Circle::Circle(){
	radius = 0.0;
	x = y = 0;
};

Circle::Circle(float rr, int xx, int yy){
	radius = rr;
	x = xx;
	y = rr;
};

// Funções membro interface
float Circle::area(){
	return radius*radius*3.141592;
};

float Circle::diameter(){
	return radius*2;
};

float Circle::perimeter(){
	return 2*3.141592*radius;
}

void Circle::set_radius(float rr){
	if(rr > 0) radius = rr;
	else radius = 0;
}

void Circle::set_origin(int xx, int yy){
	x == xx;
	y = yy;
}

float Circle::get_radius(){
	return radius;
}

void Circle::imprime(){
	cout << "{radius = " << radius << ", x = " << x << ", y = " << y << "}";
}