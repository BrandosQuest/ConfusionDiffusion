//
// Created by Brando on 05/11/2025.
//

#ifndef CONFUSIONDIFFUSION__FILEENCRYPTING_H
#define CONFUSIONDIFFUSION__FILEENCRYPTING_H

#include "../../LinkedList/LinkedListExperiment.h"

void arrayOfIndexesAllPossibleCombinationsFile(int a[4], int k);
void substitutionProperAlgoFile(int * a, int k );
void transpositionProperAlgoFile(int * a, int k );
void keyTransformationFile(int * k);
void encryptionFuncOn4BitFile(int a[4], int * k);
int encryptList(Node * head, int *k);
void writeListToFile(Node * head, char *outputFile);

#endif //CONFUSIONDIFFUSION__FILEENCRYPTING_H