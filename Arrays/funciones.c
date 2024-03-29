#include "prototipos.h"

void cargarVector(int vector[],int tam)
{
    int i;
    printf("\tCARGA DE DATOS\n");
            for(i=0; i<tam; i++)
            {
                printf("Ingrese un numero: ");
                scanf("%d", &vector[i]);
            }
}

void mostrarVector(int vector[],int tam)
{
    int i;
    printf("\tMUESTRO EL VECTOR\n");
            for(i=0; i<tam; i++)
            {
                printf("%d\n", vector[i]);
            }
}

void mostrarNegativos(int vector[],int tam)
{
    int i;
    printf("\n\n\tMUESTRO SOLO LOS NEGATIVOS\n");
            for(i=0; i<tam; i++)
            {
                if(vector[i]<0)
                {
                    printf("%d\n", vector[i]);
                }

            }

}

void mostrarPromedio(int vector[],int tam)
{

    int i;
    float promedioPositivos;
    int sumaDePositivos=0;
    int contadorDePositivos=0;
    for(i=0; i<tam; i++)
            {
                if(vector[i]>0)
                {
                    sumaDePositivos += vector[i];
                    contadorDePositivos++;
                }
            }
            promedioPositivos = (float)sumaDePositivos/contadorDePositivos;
            printf("Suma: %d -- Cantidad %d\n\n", sumaDePositivos, contadorDePositivos);
            printf("\n\n\PROMEDIO DE POSITIVOS: %f\n\n", promedioPositivos);
}

void mostrarMaximo(int vector[],int tam)
{

    int i;
    int maximo;

            maximo=calcularMaximo(vector,tam);
            printf("EL MAXIMO: %d\n", maximo);
            for(i=0; i<tam; i++)
            {
                if(vector[i]==maximo)
                {
                    printf("%d-",i);
                }
            }
}

void mostrarMinimo(int vector[],int tam)
{
    int i;
    int minimo;
    minimo=calcularMinimo(vector,tam);
            printf("EL MINIMO: %d\n",minimo);
            for(i=0; i<tam; i++)
            {
                if(vector[i]==minimo)
                {
                    printf("%d-",i);
                }
            }
}

int calcularMaximo(int vector[],int tam)
{
    int i;
    int flag=0;
    int maximo;
    for(i=0; i<tam; i++)
            {
                if(flag==0||vector[i]>maximo)
                {
                    maximo=vector[i];
                }
                flag=1;
            }
    return maximo;
}

int calcularMinimo(int vector[],int tam)
{
    int minimo;
    int i;
    int flag=0;
            for(i=0; i<tam; i++)
            {

                if(flag==0||vector[i]<minimo)
                {
                    minimo=vector[i];
                }
                flag=1;
            }
            return minimo;
}

void ordenarVector(int vector[],int tam) /** le burbuja metodo (ordenamiento)*/
{
    int aux;   /** para el swap  c = a || a = b || b = c (las diagonales!!) */
    int i;
    int j;
    for(i=0;i<tam-1;i++)  /** mecanica para mover elementos dentro del vector*/
    {
        for(j=i+1;i<tam;j++)
        {
            if(vector[i]>vector[j]) /** criterio de ordenamiento*/
            {
                aux=vector[i];
                vector[i]=vector[j];
                vector[j]=aux;
            }
        }
    }

}

