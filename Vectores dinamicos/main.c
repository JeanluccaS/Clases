#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i;
    // int miVector[10]//desventaja, es estatico y puede ocupar mucho espacio en memoria dependiendo de lo que se pida.
    int* pVec ;//lo unico que voy a cagar siempre en la pila es un puntero //va a guardar la direccion de memoria del primer elemento que esta en el heap
    int* pAux;
  //  pVec=(int*) malloc(sizeof(int)*5); //sizeof(int) (4 bytes) * 5 (20 bytes) (un vector dentro del heap) si, sigue teniendo 5. despues se puede agrandar. pero siempre tiene que tener un tamaño incial
      pVec=(int*) calloc(sizeof(int),5);
  /*  for(i=0; i<5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",pVec+i);
        //*(pVec+i)=i+1;
    }*/

    for(i=0; i<5; i++)
    {
        printf("%d\n",*(pVec+i));
    }
    /*
    // realloc //redirecciona un puntero, busca que a partir del puntero, asigne mas espacio en memoria
    //pueden ocurri 3 situaciones distintas, en el primer caso va a buscar, por ej, 5 mas. y los reserva para el mismo vector.
    //en el 2do escenario puede pasar que busque memoria continua, y no encuentre espacio porque esta ocupado para otra variable. cuando pase eso, va a buscar otros 10 espacios extra en otra direccion de memoria
    //todos los datos del prime vector, se pasa al nuevo vector (en la nueva direccion de memoria) y libera el espacio del viejo vector.
    //en el 3er caso, realloc devuelve NULL (cuando no se encuentra el espacio)
    pAux=(int*) realloc(pVec,sizeof(int)*10);//recibe el tamaño del vector que quiero.
    if(pAux!=NULL)
    {
        pVec=pAux;
        for(i=5; i<10; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d",pVec+i);

        }
        for(i=0; i<10; i++)
        {
            printf("%d\n",*(pVec+i));
        }
        pVec=(int*)realloc(pVec,sizeof(int)*4); //se libera espacio que ya tenia, tenia 10, entonces no hace falta buscar otra direccion de memoria
        for(i=0; i<4; i++)
        {
            printf("%d\n",*(pVec+i));
        }
    }
*/

    return 0;
}
