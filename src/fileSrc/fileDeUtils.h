//
// Created by Brando on 05/11/2025.
//

#ifndef CONFUSIONDIFFUSION__FILEDECRYPTING_H
#define CONFUSIONDIFFUSION__FILEDECRYPTING_H

#include "../../LinkedList/LinkedListExperiment.h"

void DEarrayOfIndexesAllPossibleCombinations(int a[4], int k);
void DEsubstitutionProperAlgo(int * a, int k );
void DEtranspositionProperAlgo(int * a, int k );
void DEkeyTransformation(int * k);
void decryptionFuncOn4Bit(int a[4], int * k);
//void hexaStringTo8BitChars(char strInitial[256], char str[128]);
void decryptList(Node * tail, int *k, unsigned int positionIndex);
void DEwriteListToFile(Node * head, char *outputFile);

#endif //CONFUSIONDIFFUSION__FILEDECRYPTING_H