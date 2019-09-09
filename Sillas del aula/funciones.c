#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

void cargarDatosConHardcode(int vectorSillas[],int tam)
{
    int i;
    int legajos[]={55,11,22,33,44};
    for(i=0;i<tam;i++)
    {
        vectorSillas[i]=legajos[i];
    }

}

void cargarEdadesConHardcode(int vectorEdades[],int tam)
{
    int i;
    int edades[]={98,19,81,91,98};
    for(i=0;i<tam;i++)
    {
        vectorEdades[i]=edades[i];
    }

}


void incializarArray(int vectorSillas[],int tam, int valorDeInicio)
{
    int i;
    for(i=0;i<tam;i++)
    {
        vectorSillas[i]=valorDeInicio;
    }
}

void mostrarVectores(int vectorSilla[],int vectorEdad[],int tam)
{
    int i;
    printf("\tMUESTRO EL VECTOR\n");
            for(i=0; i<tam; i++)
            {
                printf("%d\n", vectorSilla[i]);
                printf("%d\n",vectorEdad[i]);
                printf("\n");
            }
}



int estaLibre (int vectorSillas[],int tam,int laSilla,int valorDeInicio)
{
    int retorno=0;

    if(vectorSillas[laSilla]==valorDeInicio)
    {
        retorno=1;
    }
    return retorno;
}

int ocuparSilla (int vectorSillas[],int tam,int laSilla,int legajo,int vectorEdades[])
{
    int retorno=-1;
    int estaLibreLaSilla;
    if(laSilla<tam)
    {
        estaLibreLaSilla=estaLibre(vectorSillas,tam,laSilla,-1);
        if(estaLibreLaSilla==1)
        {
            vectorSillas[laSilla]=legajo;
        }
    }
    return retorno;
}
