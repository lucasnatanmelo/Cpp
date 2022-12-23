#include <iostream>
#include <ctime> //time.h
#include <cmath> //math.h

using namespace std;

int numeros_primos(int n){
	int i, j;
	int freq = n-1;
	for(i=2; i<=n; ++i){
		for(j=sqrt(i); j>1;--j){
			if(i%j==0){
				--freq;
				break;
			}
		}
	}
	return freq;
}

int main(){
	
	int primos1;
	// Metrificar o tempo de execução de uma tarefa
	clock_t t;
	t=clock();
	primos1 = numeros_primos(999);
	t=clock() - t;
		
	cout << "Qtd de primos: " << primos1 << endl;	
	cout << "Tempo de CPU: " << ((float)t)/CLOCKS_PER_SEC << " segundos" << endl;
	
	int primos2;
	// Outra forma de metrificar o tempo de execução de uma tarefa
	clock_t t1, t2, t3;
	t1=clock();
	primos2 = numeros_primos(999);
	t2=clock();
	t3=difftime(t2, t1);
	
	cout << "Qtd de primos: " << primos2 << endl;	
	cout << "Tempo de CPU: " << ((float)t3)/CLOCKS_PER_SEC << " segundos" << endl;
	
	// Metrificar a quantidade de segundos desde o início 
	
	time_t timeSince1970;
	
	time(&timeSince1970);
	
	cout << timeSince1970 << " segundos desde 00:00 de 1 de Janeiro de 1970" << endl;
	
	// Pegar data formatada com várias informações
	
	time_t formattedDate;
	struct tm * infoTempo;
	
	time(&formattedDate);
	infoTempo = localtime(&formattedDate);
	
	cout << asctime(infoTempo) << endl;
	
	// Para imprimir os membros separados
	cout << infoTempo->tm_sec << endl;
	cout << infoTempo->tm_min << endl;
	cout << infoTempo->tm_hour << endl;
	cout << infoTempo->tm_mday << endl;
	cout << infoTempo->tm_mon << endl;
	cout << infoTempo->tm_year << endl;
	cout << infoTempo->tm_wday << endl;
	cout << infoTempo->tm_yday << endl;
	cout << infoTempo->tm_isdst << endl;
	
	// Forma mais simples sem utilizar struct
	
	// time_t formattedDate;
	
	// time(&formattedDate);
	
	// cout << ctime(&t) << endl;
	
	// Melhor forma de formatação
	
	time_t timeBetterFormatter;
	struct tm * infoTime;
	char buffer[80];
	
	time(&timeBetterFormatter);
	infoTime = localtime(&timeBetterFormatter);
	
	strftime(buffer, 80, "%d/%m/%Y", infoTime);	
	
	cout << buffer << endl;
	
	return 0;
}
