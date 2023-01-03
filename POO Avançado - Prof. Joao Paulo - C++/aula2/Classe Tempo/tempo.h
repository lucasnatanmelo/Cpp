// Arquivo de cabeçalho ( h -> header )
#ifndef TEMPO_H
#define TEMPO_H

/*
	Aqui são somente declaradas os métodos
	Os métodos são descritos em tempo.cpp
*/

class Tempo {
	// membros privados
	private:
		int hora, minuto, segundo;
		
	public:
		Tempo(); // construtor -> inicializar
		Tempo(int, int, int);
		void setTempo(int, int, int);
		void imprime();
		~Tempo(); // destrutor
};

#endif 