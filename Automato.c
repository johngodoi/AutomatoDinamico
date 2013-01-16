/*
 * Automato.C
 *
 *  Created on: 12/12/2012
 *      Author: john.henrique
 */
#include "Automato.h"
#include <stdio.h>
#include <stdlib.h>

Automato allocate(FILE *configuracao) {
	Automato automato = (Automato) malloc(sizeof(TipoAutomato));
	MatrizEstado matriz;
	int linhas;
	int colunas;
	char c;

	scanf("%d", automato->quantidadeDeEstados);
	getchar(configuracao);
	scanf("%d", automato->quantidadeDeSimbolos);
	getchar(configuracao);
	matriz = (MatrizEstado) malloc(
			automato->quantidadeDeEstados * sizeof(int*));
	for (int i = 0; i < automato->quantidadeDeSimbolos; i++)
		matriz[i] = (int*) malloc(automato->quantidadeDeSimbolos * sizeof(int));
	automato->matrizEstado = matriz;
	automato->estadoAtual = 0;
	return automato;
}

Automato load(Automato automato, FILE *configuracao) {
	for (int j = 0; j < automato->quantidadeDeEstados; j++)
		for (int i = 0; i < automato->quantidadeDeSimbolos; i++) {
			scanf("%d",automato->matrizEstado[j][i]);
			getchar(configuracao);
		}
	return automato;
}

Automato inicializaAutomato(FILE *configuracao) {
	Automato automato = allocate(configuracao);
	automato = load(automato, configuracao);

	return automato;
}
