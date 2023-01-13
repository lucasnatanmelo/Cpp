**<strong>C++**
----
  **Anotações e utilidades pessoais referentes a linguagem de programação C++** <br/>
  *CFB Cursos*

**DESCRIÇÃO - AULAS:**

*  #01 - Introdução ao Curso
*  #02 - Computador Simplificado
*  #03 - Estrutura básica de um programa de C++
*  #04 - Variáveis em C++
    * Tipos de variáveis em C++: int, double, float, bool, string, char;
*  #05 - Declarações múltiplas de variáveis, Constantes #Define:
    * Argumento #define
*  #06 - Variaveis Globais e Locais, Operadores matemáticos:
*  #07 - Incremento e Decremento de Variaveis, Operadores pós e pré-fixados
*  #08 - Invertendo valores de variáveis
*  #09 - Comando de decisão IF ELSE - Parte 1
    * < > <= >= != ==
    * if{} elseif{} else{}
*  #10 - Comando de decisão IF ELSE e comando Goto - Parte 2
    * Argumento "goto"
*  #11 - Operador AND, OR, NOT
    * && e ||
*  #12 - Operador ternário
    * valor ? true : false
*  #13 - Comando Switch Case
    * switch(){case1: ; case 2: ; default:;}
*  #14 - Comando de laço While
    * while(condition){ }
*  #15 - Comando break
    * break interno ao comando de repetição
*  #16 - Comando de loop do While
    * do{ } while{ }
*  #17 - Comando de loop FOR
    * for(int; cond; inc/dex){// comandos}
*  #18 - Array/Vetor
    * int vetor[5]
    * sizeof(vetor)
    * sizeof(vetor) / sizeof(vetor[0])
*  #19 - Array bidimensional / Matriz
    * int matriz[3][4];
*  #20 - Jogo da Forca
*  #21 - Argumentos para a função main, argc e argv
    * int main(int argc, char *argv[]){return 0;}
*  #22 - Funções - Parte 1
    * Declarações de funções
    * Prototipagem - Antes da função main
*  #23 - Sobrecarga de funções
    * Funções com mesmo identificador, mas com parâmetros diferentes
*  #24 - Omissão de argumentos e argumentos padrão
    * Omissão de argumentos na função - Declaração de valores default
    * void imp(string txt="Texto default");
*  #25 - Funções recursivas (recursividade)
    * Loop com recursividade
*  #26 - Resolução dos exercícios da aula 25
    * Função Fatorial + Operador ternário
*  #27 - Enum
    * Estrutura enum
*  #28 - Pilha/Stack - Parte 1
    * #include \<stack>
    * push(), empty(), pop(), top()
*  #29 - Pilha/Stack - Parte 2
    * #include \<stack>
    * empty(), size(), front(), back(), push(), pop()
*  #30 - Fila / Queue
    * #include \<queue>
    * empty(), size(), front(), back(), push(), pop()
*  #31 - Lista - Parte 1
    * #include \<list>
    * iterator
    * push_front(), push_back(), begin(), advance(), sort(), reverse(), size()
*  #32 - Lista - Parte 2
    * #include \<list>
    * iterator
    * it_erase, merge()
*  #33 - Struct - Parte 1
    * Definição - struct
*  #34 - Struct - Parte 2
    * Métodos e construtor - struct
*  #35 - Struct - Parte 3
    * Métodos e construtor - struct
*  #36 - Ponteiros - Parte 1
    * Definição
    * Armazenamento do endereço de memória
    * Acesso pela memória
*  #37 - Ponteiros - Parte 2
    * Ponteiros utilizando arrays
    * \*(p++)
*  #38 - Ponteiros - Parte 3
    * Funções recebendo ponteiros como argumento
*  #39 - Alocação dinâmica de memória
    * char*, malloc, gets
*  #40 - prinf e scanf
*  #41 - Mais sobre printf e cout
*  #42 - Vector
    * #include \<vector>
    * push_back(), insert(), begin(), end(), empty(),pop_back(), at(), front(), back(), size()
*  #43 - System
    * #include \<stdlib.h>
    * system("dir"), system("cls"), system("color 06")
*  #44 - POO, Classes, public, private, métodos - P1
    * Definição - Classes
    * public, private
    * Método Construtor
    * Instanciação -> Aviao *av1 = new Aviao();
    * av1->init(1);
*  #45 - POO, Classes, Classe em arquivo externo, Construtor - P2
    * Separando a classe em arquivos .cpp e .h
    * #ifndef AVIAO_H_INCLUDED, #define AVIAO_H_INCLUDED, #endif
*  #46 - POO, Classes, Get e Set - P3
    * Definindo métodos get() e set()
*  #47 - POO, Classes, Herança - P4
    * Herdando classes e métodos - Veiculo -> Carro -> Moto -> Tanque
*  #48 - POO, Classes, Herança Múltipla- P5
*  #49 - Alternado tema do Code::Blocks
*  #50 - Operações com arquivos (ofstream) - Parte 1
    * #include \<fstream>\
    * ofstream, open(), close()
*  #51 - Operações com arquivos (ifstream) - Parte 2
    * ifstream, is_open(), getline(), close()
*  #52 - Operações com arquivos (fstream) - Parte 3
    * arquivo.open("exemplo.txt", ios::out | ios::app);
*  #53 - Iterator
    * Funções prontas - Iterator
    * iterator, end(), begin(), \*it\, \*next()\, \*prev()\
*  #54 - Tratamento de Erros com try catch
    * Bloco try(){ }catch(const chat* error){}
*  #55 - Inicialização uniforme - C++11 (C++ moderno)
    * int num -> int num{10}
*  #56 - Classes de armazenamento (auto, register, static) - C++11 (C++ moderno)
    * register -> armazenamento a critério do sistema de armazeamento
    * auto -> tipagem dinâmica
    * static -> transforma uma variável com valor estático em seu escopo
*  #57 - Classes de armazenamento (extern) - C++11 (C++ moderno)
*  #58 - FOR com base em intervalo / for-range-declaration - C++11 (C++ moderno)
    * for(auto i:x){cout << i << endl;}
    * for(auto it = v.begin(); it < v.end(); it++){cout << *it << endl;}
*  #59 - Funções Lambda - C++11 (C++ moderno)
    * Definição de funções lambda
    * \[ ]( ){ }
*  #60 - Pair - Dados em Pares
    * #include \<utility>
    * pair <int, string> variavelPar
    * variavelPar.first, variavelPar.second
    * make_pair()
*  #61 - Map - Container de Associação Chave x Valor
    * #include \<map>
    * map<int, string> variavelMap
    * map<int, string>::iterator itmap;
    * variavelMap.insert(), variavelMap.erase(), variavelMap.begin(), variavelMap.find(),variavelMap.clear(), 

*  #62 - Map - Smart Pointer / Ponteiro Inteligente - C++11 (C++ moderno)
    * #include \<memory>
    * unique_ptr<int>uniquepnum(new int) -> Ponteiro único
    * shared_ptr<int>sharedpnum(new int) -> Ponteiro compartilhado
*  #63 - Algorítimo FOR_EACH - C++11 (C++ moderno)
    * for_each(n.begin(), n.end(), [](int num){ };
*  #64 - POO, Classes em C++ Moderno - P6
    * Classes em C++ 11
    * Inicializadores e acessos a classes
*  #65 - POO, Encapsulamento - P7
    * Encapsulamento -> Separando variáveis e métodos em private e public
*  #66 - POO, Polimorfismo (sobrecarga de métodos) - P8
    * Sobrecarga de métodos internos a classe
*  #67 - POO, Herança, Virtual, Override - P9
    * virtural e override
*  #68 - POO, Protected x Private x Public - P10
    * Comparações e definiçôes de Protected, Private e Public
        * Public -> É possível acessar as propriedas e métodos publicamente
        * Private -> Somente é possível acessar as propriedades e métodos internmante a classe
        * Protected -> É possível acessar as propriedades e métodos pela classe que a herda
*  #69 - Algoritmo FIND
    * find() -> função para retorno de item em uma coleção de dados
*  #70 - Acentuação / setlocale
*  #71 - Download, Instalação e configuração do codeBlocks
*  #72 - Biblioteca iostream
    * #include \<iostream>
    * get(), getline(), gcount()
*  #73 - Biblioteca cstdlib - P1
    * Funçoes de conversão, de geração de numeros aleatórios e gerenciamento dinâmico de memória
*  #74 - Biblioteca cstdlib - P2
    * Funções para pegar valores de variáveis de ambiente, e retorno de itens em coleções de dados
    * getenv(), bsearch()
*  #75 - Biblioteca cstdlib - P3
    * #include \<cstdio>
    * Biblioteca de operações matemáticas
*  #76 - Biblioteca typeinfo
    * #include \<typeinfo>
    * Biblioteca de funções de retorno para tipos de variáveis
*  #77 - Biblioteca functional
    * Biblioteca para manipular métodos e variáveis internas a classes ou struct
*  #78 - Biblioteca UTILITY - Função SWAP, função MAKE_PAIR e o tipo PAIR - Curso de C++
    * #include \<utility>
    * swap, pair, make_pair
*  #79 - Manipulando DATA, HORA e controle de tempo em C++ - Bibliotecas ctime e time.h - Curso de C++
    * #include \<ctime>
        * Pegar datas, horas, segundos, etc
        * Metrificar o tempos de execução de tarefas
    * #include \<cmath>
        * Biblioteca para operações matemáticas
*  #80 - DATA, HORA e controle de tempo em C++ moderno - Biblioteca chrono - Curso de C++
    * #include \<chrono>
    * Outra biblioteca para pegar datas, horas, segundos, etc
*  #81 - Como verificar o tipo de um caractere em c++, biblioteca cctype - Curso de C++
    * #include \<cctype>
    * Biblioteca para manipular caracteres
*  #82 - Manipulando strings, funções para strings, biblioteca cstring P1 - Curso de C++
    * #include \<cstring>
    * Biblioteca para manipular caracteres
*  #83 - Funções para manipular strings, biblioteca cstring P2 - Curso de C++
    * #include \<cstring>
    * Biblioteca para manipular caracteres
*  #84 - Biblioteca string P1 - Curso de C++
    * #include \<string>
    * Biblioteca que implementa classes para manipulação de caracteres
*  #85 - Biblioteca string P2 - Curso de C++
    * #include \<string>
    * Biblioteca que implementa classes para manipulação de caracteres
*  #86 - Biblioteca string P3 - Curso de C++
    * #include \<string>
    * Biblioteca que implementa classes para manipulação de caracteres
*  #87 - Biblioteca Array - Curso de C++
    * #include \<array>
    * at(), front(), back(), size(), max_size, empty(), fill()
*  #88 - Biblioteca Vector - Curso de C++
    * #include \<vector>
    * front(), back(), at(), size(), max_size(), resize(), shrink_to_fit(), capacity(), clear(), push_back(), pop_back(), assign(), swap(), emplace(), emplace_back()
*  #89 - Biblioteca List - Curso de C++
    * #include \<list>
    * size(), max_size(), front(), back(), empty(), assign(), push_front(), push_back, pop_front(), pop_back
*  #90 - Biblioteca List - Curso de C++
    * #include \<list>
*  #91 - Biblioteca Map - Curso de C++
    * #include \<map> 
*  #92 - Biblioteca Stack (Pilha) - Curso de C++
    * #include \<stack>
*  #93 - Biblioteca Queue (Fila) - Curso de C++
    * #include \<queue>
*  #94 - Biblioteca Deque (Fila Dupla) - Curso de C++
    * #include \<dequeue>
*  #95 - Biblioteca Algorithm P1 - Curso de C++
    * #include \<algorithm> 
*  #96 - Biblioteca iterator - Curso de C++
    * #include \<algorithm> 
    * #include \<iterator> 
*  #97 - Biblioteca Algorithm P2 - Curso de C++
    * #include \<algorithm> 
*  #98 - Biblioteca Algorithm P3 - Curso de C++
    * #include \<algorithm> 
*  #99 - Biblioteca cmath - Curso de C++
    * #include \<cmath>
*  #100 - Biblioteca fstream - Curso de C++
    * #include \<fstream>  
*  #101 - Biblioteca iomanip - Curso de C++
    * #include \<bits/stdc++.h>





