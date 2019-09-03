#include <stdio.h>
#include <stdlib.h>

void funcion(int*);


/**
int main()
{
    int numero=4;
    printf("El numero antes de modificar es: %d\n",numero);
    funcion(&numero);
    printf("El numero despues de modificar es: %d\n",numero);

    return 0;
}

void funcion(int* pNumero )
{

                                /pNumero=100; me lleva al valor al que apunta la variable.
    prinft("Ingrese un numero: ");
    scanf("%d",pNumero);

}
*/


/** \brief Calcula el factorial de un numero
 *
 * \param int el numero al que se va a factorear
 * \return int El factorial
 *
 */
int factorial(int);

int main()
{
   int numero=5;
   int resultado; /** para que no tenga basura se le pone "1".  */
   /*int i;


   for(i=numero;i>=1;i--)
   {
      resultado=resultado *i;
   }
    printf("el numero factorizado es: %d",resultado);*/  /** la mejor forma, pero no la unica, time to funcion recursiva*/

    resultado=factorial(numero);
    printf("el numero es: %d",resultado);


    return 0;
}

int factorial(int numero)
{
    int resultado;

    if(numero==0)
    {
        resultado= 1;
    }
    else
    {
        resultado= numero*factorial(numero-1);
    }
    return resultado;
}
