#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif 

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif


#define Tam_Arreglo 15 
//a continucion se crea la estructura cola Arbol//

typedef struct Nodo_Cola_AB {
int tam;
int Arreglo_AB[Tam_Arreglo];
int pto_insercion;
}Cola_AB;
