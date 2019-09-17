#include "prototipos.h"

void inicializarAlumnos(eAlumno listaDeAlumnos[],int cantidad,int estado)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        listaDeAlumnos[i].estaVacio=estado;
    }
}

void listarAlumnos(eAlumno listaDeAlumnos[],int cantidad)
{

     int i;
     int tieneAlumnos=0;
     printf("\nLegajo\t\tNombre\t\tNota\n");
     for(i=0;i<cantidad;i++)
    {
        if(listaDeAlumnos[i].estaVacio==1)
        {
            tieneAlumnos=1;
            mostrarAlumno(listaDeAlumnos[i]);
        }

    }
    if(tieneAlumnos==0)
    {
        printf("No hay alumnos ingresados");
    }
}

void mostrarAlumno(eAlumno alumno)
{
    printf ("\n%d",alumno.legajo);
    printf("\t\t%s",alumno.nombre);
    printf("\t\t%d",alumno.nota);

}


int dameIndiceLibre(eAlumno listaDeAlumnos[],int cantidad)
{
     int i;
     int indiceLibre=-1;
     for(i=0;i<cantidad;i++)
    {
        if(listaDeAlumnos[i].estaVacio==1)
        {
            indiceLibre=i;
            break;
        }

    }
    return indiceLibre;

}

void hardcodearAlumno(eAlumno alumnos[],int tam)
{
    int i;
    char nombres[][20]={"jean","Thomas","brian","flor","pipo"};
    int notas[]={10,7,8,9,5};
    int legajos[]={14,54,77,22,1};
    int estados[]={1,1,1,1,1};
    for(i=0;i<tam;i++)
    {
        strcpy(alumnos[i].nombre,nombres[i]);
        alumnos[i].nota=notas[i];
        alumnos[i].legajo=legajos[i];
        alumnos[i].estaVacio=estados[i];
    }
}

int buscarAlumno(eAlumno alumnos[],int cantidad)
{
    int i;
    int numero;
    int loEncontre=0;
    numero=pedirEntero("\nIngrese el legajo a buscar: ");
    for(i=0;i<cantidad;i++)
    {
        if(numero==alumnos[i].legajo)
        {
            loEncontre=1;
            printf("\nLegajo\t\tNombre\t\tNota\n");
            mostrarAlumno(alumnos[i]);
        }

    }
    return loEncontre;
}

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

int pedirEntero (char mensaje[])
{
    int numero;
    printf("%s",mensaje);
    scanf("%d",&numero);

    return numero;
}

int borrarAlumno (eAlumno alumnos[], int cantidad)
{
     int i;
     int alumnoABorrar=0; //0 si no se pudo borrar, 1 si se pudo borrar
     alumnoABorrar=buscarAlumno(alumnos,cantidad);
     for(i=0;i<cantidad;i++)
     {
         if(alumnoABorrar==1)
        {
            alumnoABorrar=1;
            alumnos[i].estaVacio=0;
            listarAlumnos(alumnos,cantidad);
            break;
        }

     }
     return alumnoABorrar;


}
