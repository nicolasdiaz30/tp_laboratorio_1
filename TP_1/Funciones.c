#include "funciones.h"
#include <stdlib.h>
#include<stdio.h>

float sumar(float n1, float n2)
{
float resultado;
resultado=n1+n2;
return resultado;
}

float restar(float n1, float n2)
{
float resultado;
resultado=n1-n2;
return resultado;
}

float division(float n1, float n2)
{
float resultado;
resultado=n1/n2;
return resultado;
}

float multiplicacion(float n1, float n2)
{
float resultado;
resultado=n1*n2;
return resultado;
}

float factorial(float n1)
{
int resultado;
resultado=n1*(n1-1);
return resultado;
}
