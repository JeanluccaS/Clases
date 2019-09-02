#include <stdio.h>
#include <stdlib.h>
void cambiarPorvalor(int unDato);
void cambiarPorReferencia(int* pDato);
int dameUnEntero(char* mensaje,int max,char* mensajeError,int cantidadIntentos,int* pNumero);
int estaEntreRangos(int superior, int inferior,int elNumero);
/** definr puntero: tipo de dato.
casda vez que lo quiero invocar "* dato"
y para pasar un dato se utiliza el "&" = "*pDato"
int* dato (la mejor) */


/*int main()
{
    int numero;
    numero=22;
    cambiarPorvalor(numero);
    printf("numero:%d\n",numero);

    cambiarPorReferencia(&numero);
    printf("numero:%d\n",numero);
    return 0;
}*/

int main()
{
    int unNumero;
    int sePudo;
    sePudo=dameUnEntero("ingresa tu edad: ",100,"Error, ingrese nuevamente, hasta un maximo de 2 intentos mas",2,&unNumero);
    if(sePudo==0)
    {
        printf("No se pudo cargar");
    }
    else
    {
        printf("el numero es: %d ",unNumero);
    }



    return 0;
    if(estaEntreRangos(100,0,unNumero)==0)
    {

    }else
    {

    }
}
void cambiarPorvalor(int unDato)
{
    unDato=99;
    printf("dato por valor:%d\n",unDato);
}

void cambiarPorReferencia(int* pDato)
{
    *pDato=99;
    printf("dato por referencia:%d\n",*pDato);
}

int estaEntreRangos(int superior, int inferior,int elNumero)
{
    if(elNumero<superior && elNumero >inferior)
    {
        return 0;
    }
    return 1;
}

int dameUnEntero(char* mensaje,int max,char* mensajeError,int cantidadIntentos,int* pNumero) /** siempre se va a respetar esto, parametros, retorna algo (si se pudo o no). */
{
    int sePudo=1;
    int contador=0;
    printf("%s",mensaje);
    scanf("%d",pNumero);
    while(*pNumero>max)
    {
         if(contador==cantidadIntentos)
        {
            return 0;
        }
        contador++;
        printf("%s",mensajeError);
        scanf("%d",pNumero);

    }
    return sePudo;
}
