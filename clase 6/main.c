#include "prototipos.h"


int main()
{
    /**
    char palabra[10]="Chau"; ///tener en cuenta un elemento mas para el '\0'
    char otraPalabra[100];
    int i;
    int largo;
    int comp;

    printf("Ingrese una palabra: ");
    fflush(stdin);
    ///scanf("%s", palabra); ///el scanf al momento de utilizar un "espacio" incerta en el espacio un '\0'
    ///scanf("%[^\n]",palabra); ///otra forma es que lea hasta el "enter" creando otro tipo de mascara(\n) el '^' seria "leer hasta.."
    gets(otraPalabra);
    //printf("%s",palabra);
    ///strcat saca el '\0' y concatena la otra variable/cadena
    strcat(palabra,otraPalabra);
    printf("%s",palabra);

    ///strcmp para comparar 2 cadenas de caracteres
    ///stricmp ignora mayusculas de minusculas (se podria considerar esa "i" como "ignore")
    ///comp = strcmp(palabra,otraPalabra);
    ///strupr ( todo a mayuscula)
    ///strlwr ( todo a minuscula)
    ///strupr (palabra);
    ///strlwr(palabra);
    ///printf("\n compara: %d",comp);
    //printf("%s",palabra);


    ///strcpy utilizada para guardar una cadena dentro de otra
    strcpy(palabra,otraPalabra); ///El destino debe poder recibir el origen (en cuanto a tamaño es refiere)
    printf("%s",palabra);

    ///strlen se utiliza para saber la cantidad de caracteres que tiene una cadena

    largo=strlen(palabra);
    if(largo>9)
    {
        printf("Error");
    }
    else
    {
    printf("\n%d",largo);
    }
    ****/


    char nombre[15];
    char apellido[15]; //nombre y char no se pueden cambiar
    char apellidoNombre[30]; //va a guardar el apellido con la primer letra en Mayuscula, Nombre con la primer letra en mayuscula ej: Simala Lucca

    pedirString("ingrese un nombre: ",nombre);
    pedirString("ingrese un apellido: ",apellido);
    strcpy(apellidoNombre, apellido);
    strcat(apellidoNombre,", ");
    strcat(apellidoNombre,nombre);
    printf("\n%s",apellidoNombre);
    strlwr(apellidoNombre);





    return 0;
}
