#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nombre[51];
    char apellido[51];
    float salario;
}eEmpleado;

eEmpleado* newEmpleado ();
int main()
{

/*
    FILE *pArchivo;
    //eDato miDato = {1000,"jean",65};
    //int x;
       char miNombre[]="Jean";

      pArchivo=fopen("miArchivo.txt","w"); //en texto
      if(pArchivo!=NULL)
      {
          fprintf(pArchivo,"Mi nombre es: %s\nEl dia esta nublado",miNombre); //printf comun y corriente, que escribe dentro de un archivo. //El primer parametro es el archivo, y el 2do ya el mensaje
          fclose(pArchivo); // es importante siempre que se pueda cerrar el archivo. //Solo se hace en Caso de que de que pArhchivo no apunte a NULL
      }



        char miNombre[50];
        pArchivo=fopen("miArchivo.txt","r");
        if(pArchivo!=NULL)
        {
            while(!feof(pArchivo))//mientras no se encuentre el final del archivo, que siga iterando.
            {
                fgets(miNombre,49,pArchivo);//recibe 3 parametros, recibe el puntero a char donde voy a guardar el dato,despues recibe un entero que representa la cantidad de caracteres que voy a lee (-1), y por ultimo el archivo (lee solo una linea)
                printf("%s",miNombre);
            }


            fclose(pArchivo);
        }


     char miNombre[]="Jean";
     int k=9;

        pArchivo=fopen("miArchivo.bin","wb"); //En binario //las extenciones no define, que tipo de archivo es. sirven mas bien, para organizarse
        if(pArchivo!=NULL)
        {
            fwrite(&miDato,sizeof(miDato),1,pArchivo); //recibe un puntero a void (tipo de dato generico)(la direccion de memoria pebete), el segundo parametro el size of (tipo de dato), y despues la cantidad de veces que va escribir el tipo de dato y porultimo, el archivo.
            fclose(pArchivo); // es importante siempre que se pueda cerrar el archivo. //Solo se hace en Caso de que de que pArhchivo no apunte a NULL
        }

    //char miNombre[50];
    eDato datoLeer;
    pArchivo=fopen("miArchivo.bin","rb");
    if(pArchivo!=NULL)
    {
        fread(&datoLeer,sizeof(eDato),1,pArchivo); //funciona igual que el "fgets"
        printf("%d--%s--%d",datoLeer.legajo,datoLeer.nombre,datoLeer.peso);
        fclose(pArchivo);
    }

*/

FILE* pArchivo;
eEmpleado* listaDeEmpleados[50];
eEmpleado* unEmpleado;


int i=0;
char linea[100];
char legajo[20];
char nombre[20];
char apellido[20];
char sueldo[20];
pArchivo=fopen("datos.csv","r");
            //lee hasta la coma y excluila
fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^\n]\n",legajo,nombre,apellido,sueldo); //las variables donde voy a guardar lo que lea. //se leenlas cabeseras

while(!feof(pArchivo))
{
    unEmpleado=newEmpleado();
    fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^\n]\n",legajo,nombre,apellido,sueldo);
    unEmpleado->id = atoi(legajo); //se debe parcear, ya que es una cadena. hay que pasarlo a entero.
    strcpy(unEmpleado->nombre,nombre);
    strcpy (unEmpleado->apellido,apellido);
    unEmpleado->salario = atof(sueldo);
    listaDeEmpleados[i]=unEmpleado;
    i++;
}
fclose(pArchivo);

for(i=0;i<50;i++)
{
    printf("%d--%s--%s--%f\n",listaDeEmpleados[i]->id,listaDeEmpleados[i]->nombre,listaDeEmpleados[i]->apellido,listaDeEmpleados[i]->salario);
}


return 0;
}

eEmpleado* newEmpleado ()
{
    eEmpleado* p;
    p=(void*)malloc(sizeof(eEmpleado));
    return p;
}
