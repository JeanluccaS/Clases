#include <stdio.h>
#include <stdlib.h>

void funcion(int*);


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

                                /**pNumero=100; /**me lleva al valor al que apunta la variable.*/
    prinft("Ingrese un numero: ");
    scanf("%d",pNumero);

}
