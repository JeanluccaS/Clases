#include "prototipos.h"


void pedirString (char mensaje[],char contenido[])
{
    char auxString[100];
    printf("%s",mensaje);
    fflush(stdin);
    gets(auxString);
    while(strlen(auxString)>14)
    {
         char auxString[100];
        printf("Error,reingrese el dato");
        fflush(stdin);
        gets(auxString);
    }
    strcpy(contenido,auxString);
}

/*void apellidoYNombre(char apellidoNombre[])
{
    int i;
    int largo;
    largo=strlen(apellidoNombre);
    printf("\n%d",largo);
    for(i=0;i<largo;i++)
    {
        if(i==0)
        {
            strupr(apellidoNombre);
        }
        else
        {
            strlwr(apellidoNombre);
        }
    }
    printf("%s",apellidoNombre);
}
*/
