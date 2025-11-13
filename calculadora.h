#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <stdbool.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

bool obter_dados(float *a, float *b, char *op);

#endif
