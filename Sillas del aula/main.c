
#include "prototipos.h"
#define CANTIDAD 5

/** ingresar el valor de legajo */



int main()
{

    int arrayDeSillas[CANTIDAD];
    int arrayDeEdades[CANTIDAD];
   // inicializarArray(arrayDeSillas,CANTIDAD,-1);
    cargarDatosConHardcode(arrayDeSillas,CANTIDAD);
    cargarEdadesConHardcode(arrayDeEdades,CANTIDAD);

    printf("\n\n\n");
    mostrarVectores(arrayDeSillas,arrayDeEdades,CANTIDAD);

    return 0;
}
