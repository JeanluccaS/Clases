#include <stdio.h>
#include <stdlib.h>

int sumar (int numero1, int numero2);
int restar (int numero1, int numero2);
int multiplicar (int numero1, int numero2);
int dividir (int numero1, int numero2);
float pedirNumero(char mensaje[]);

int main()
{
   int opcion;
   int numero1=0;
   int numero2=0;
   int resultadoSuma;
   int resultadoResta;
   int resultadoMultiplicacion;
   int resultadoDivision;


    do{
        printf("1. Ingrese el primer numero: \n2. Ingrese el segundo numero: \n3.Calcular todas las operaciones (suma, resta, multiplicacion, division)\n4. Mostrar resultados\n5. Salir\n Seleccione una opcion");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                numero1= pedirNumero("Ingrese el primer numero");
                printf("\n%d",numero1);
                break;
            case 2:
                numero2=pedirNumero("Ingrese el segundo numero");
                printf("\n%d",numero2);
            case 3:
                printf("Se realizaran las siguientes operaciones: suma, resta, multiplicacion y division.\n");
                resultadoSuma=sumar(numero1,numero2);
                resultadoResta




        }







    }while(opcion !=5);




    return 0;
}

int sumar (int numero1, int numero2)
{
    int resultado;
    resultado=numero1 + numero2;

    return resultado;
}
int restar(int numero1, int numero2)
{
    int resultado;
    resultado=numero1 - numero2;

    return resultado;
}
int multiplicar(int numero1, int numero2)
{
    int resultado;
    resultado=numero1 * numero2;

    return resultado;
}
int dividir (int numero1, int numero2)
{
    int resultado;
    resultado=numero1 / numero2;

    return resultado;
}

float pedirNumero(char mensaje[])
{
    float numero;
    printf("%s",mensaje);
    scanf("%f",&numero);

    return numero;
}


