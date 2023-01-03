#ifndef DATE_H
#define DATE_H

class Date {
	private: 
		int d, m, y;
		mutable int count;
		static int howmany; // Variável compartilhada por todos os objetos instanciados pela classe
		
	public:
		Date(int i = 1, int = 1, int = 1972); // Valores default caso não seja inicializado
		~Date(); 
		
		int get_day() const {return this->d;};
		int get_month() const {return this->m;};
		int get_year() const {return this->y;};
		int get_count() const {return this->count;};
		static int how_many_instances() {return howmany;}
		void print();
		
		void set_day(int);
		void set_month(int);
		void set_year(int);
};

#endif

/*
	const -> Declara que o valor será constante sempre
*/