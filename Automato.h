/*
 * Automato.h
 *
 *  Created on: 12/12/2012
 *      Author: john.henrique
 */

#ifndef AUTOMATO_H_
#define AUTOMATO_H_

/**
 *
 */
enum {
	SOM, SUB, MUL, DIV, AT, AP, FP, NUM, ID
};

typedef int** MatrizEstado;

typedef struct {
	MatrizEstado matrizEstado;
	int estadoAtual;
	int quantidadeDeEstados;
	int quantidadeDeSimbolos;
} TipoAutomato;

typedef TipoAutomato* Automato;

Automato allocate(FILE *configuracao);

Automato load(Automato automato, FILE *configuracao);

Automato inicializaAutomato(FILE *configuracao);



#endif /* AUTOMATO_H_ */
