#include "prototipos.h"
#define T 10 //Definir un valor que luego va a ser un remplazado en el codigo
            //(constante)Elemento de la programacion que va a valer el mismo valor, toda la vida del programa.



int main()
{
    int vectorDeNumeros[T]= {10,-5,10,-6,-1,-4,10,5,4,-6};
    int i;
    int opcion;

    do
    {
        printf( "1 cargar numeros\n");
        printf( "2 mostar todo\n");
        printf( "3 mostrar negativos\n");
        printf( "4 mostrar promedio positivos\n");
        printf( "5 Mostrar Maximo\n");
        printf( "6 Mostrar Minimo\n");
        printf( "7 salir\n");
        printf("Elija una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            cargarVector(vectorDeNumeros,T);
            break;
        case 2:
            mostrarVector(vectorDeNumeros,T);

            break;
        case 3:
            mostrarNegativos(vectorDeNumeros,T);
        case 4:
            mostrarPromedio(vectorDeNumeros,T);
            break;
        case 5:
            mostrarMaximo(vectorDeNumeros,T);

            break;
        case 6:
            mostrarMinimo(vectorDeNumeros,T);
            break;
        }
        system("pause");
        system("cls");
    }
    while(opcion!=7);










    return 0;
}



