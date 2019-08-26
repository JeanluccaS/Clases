#include <stdio.h>
#include <stdlib.h>
/** \brief
 *
 * \param
 * \param
 * \return
 *
 */


int main()
{
    /**ingresar 5 tipos de monedas y sus respectivos valores.*/
    int dinero;
    char tipo;/**peso(p) dolar(d) libra(l) bitCoins(b)*/
    int i;
    int max;
    int primerDolar=0;
    int flagP=0;
    float promedioEnPesos;
    int contador=0;
    int acumulador=0;


    printf ("ingrese 5 tipos de moneda con sus respectivos valores \n");
    for(i=0;i<=4;i++)
    {
        printf ("ingrese la cantidad de dinero: \n");
        scanf("%d",&dinero);
        printf("ingrese el tipo de moneda: \n");
        fflush(stdin);
        scanf("%c",&tipo);
        while(tipo!='p'&&tipo!='l'&&tipo!='d'&&tipo!='b')
        {
            printf("\n\nError, ingrese un tipo de moneda valido. ('p','l','d' o 'b'): ");
            fflush(stdin);
            scanf("%c",&tipo);

        }

        if(tipo=='d')
        {
            if(primerDolar==0)
            {
                primerDolar=1;
                max=dinero;
                if(dinero>max)
                {
                    max=dinero;
                }
            }
        }
        if(tipo=='p')
        {
            flagP=1;
            contador++;
            acumulador+=dinero;

        }
   // printf("%d\n\n", contador );
    }
    promedioEnPesos=(float)acumulador/contador;
    if(primerDolar==0)
    {
        printf("No se registro ningun dolar ");
    }
    else
    {
    printf("El valor maximo en dolares es: %d\n",max);
    }
    if(flagP==0)
    {
        printf("No se registro ningun peso ");
    }
    else
    {
        printf("el promedio en pesos es: %f",promedioEnPesos);
    }

    return 0;
}
