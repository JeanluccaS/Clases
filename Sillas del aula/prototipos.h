#include <stdio.h>
#include <stdlib.h>


void cargarDatosConHardcode(int vectorSillas[],int tam);
int inicializarArray(int vectorSillas[],int tam,int valoDeInicio);
void mostrarVectores(int vectorSilla[],int vectorEdad[],int tam);
void incializarArray(int vectorSillas[],int tam, int valorDeInicio);
int estaLibre (int vectorSillas[],int tam,int laSilla,int valorDeInicio);
int ocuparSilla (int vectorSillas[],int tam,int laSilla,int legajo, int vectorEdades[]);
void cargarEdadesConHardcode(int vectorEdades[],int tam);
