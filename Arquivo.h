#ifndef ARQUIVO_H
#define ARQUIVO_H

#include "Cluster.h"
#include <iostream>
#include <string>
#include <stdio.h>  // fscanf, fprintf
#include <stdlib.h> // rand,srand
#include <time.h>   // time

using namespace std;

void geraArquivo(string nome, int tam);
void carregaArquivo(string nome, Cluster &c);

#endif /* ARQUIVO_H */

