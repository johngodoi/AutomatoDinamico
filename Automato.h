/*
 * Automato.h
 *
 *  Created on: 12/12/2012
 *      Author: john.henrique
 */

#include "DefinicaoAutomato.h"

#ifndef AUTOMATO_H_
#define AUTOMATO_H_

Automato allocate(FILE *configuracao);

Automato load(Automato automato, FILE *configuracao);

Automato inicializaAutomato(FILE *configuracao);



#endif /* AUTOMATO_H_ */
