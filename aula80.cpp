#include <iostream>
#include <chrono> //subnamespace
#include <ctime>

using namespace std;
using namespace chrono;

int main(){
	
	// Caso não declare o namspace chrono
//	chrono::second s(1);
	
	/* 
		minutes m;
		seconds;
		hours
		miliseconds
		microseconds
		nanoseconds
	*/
	
	seconds s(60);
	minutes m = duration_cast<minutes>(s);
	
	cout << m.count() << endl;
	
	using chrono::system_clock;
	duration<int, ratio<60*60*24>> um_dia(1);
	
	system_clock::time_point hoje=system_clock::now();
	system_clock::time_point amanha=hoje + um_dia;
	system_clock::time_point ontem=hoje - um_dia;
	
	time_t tt;
	
	tt=system_clock::to_time_t(hoje);
	cout << "Hoje: " << ctime(&tt) << endl;

	tt=system_clock::to_time_t(amanha);
	cout << "Hoje: " << ctime(&tt) << endl;

	tt=system_clock::to_time_t(ontem);
	cout << "Hoje: " << ctime(&tt) << endl;
	
	// Metrificar tempo de execução do sistema
	
	steady_clock::time_point t1 = steady_clock::now();
	cout << "Imprimindo 9000 estrelas: " << endl;
	for(int i = 0; i < 9000; i++){
		cout << "*";
	}
	cout << endl;
	steady_clock::time_point t2 = steady_clock::now();
	
	duration<double> tempo = duration_cast<duration<double>>(t2-t1);
	
	cout << "Tempo de trabalho executado: " << tempo.count() << "segundos" << endl; 	
	return 0;
}
