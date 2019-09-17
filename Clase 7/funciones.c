#include "prototipos.h"
#define LIBRE 0
#define OCUPADO 1
void inicializarAlumnos(eAlumno listaDeAlumnos[],int cantidad,int estado)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        listaDeAlumnos[i].estaVacio=estado;
    }
}

int cargarAlumnos (eAlumno listaDeAlumnos[],int cantidad)
{

    int indice;
    int sePudo=0;
    indice=dameIndiceLibre(listaDeAlumnos,cantidad);
    if (indice!=-1)
    {
        sePudo=1;
        listaDeAlumnos[indice]=cargarAlumno();
    }
    return sePudo;
}

int listarAlumnos(eAlumno listaDeAlumnos[],int cantidad)
{
    int i;
    int tieneAlumnos=0;
    printf("\nLegajo\t\tNombre\t\tNota\n");
    for(i=0; i<cantidad; i++)
    {
        if(listaDeAlumnos[i].estaVacio==OCUPADO)
        {
            tieneAlumnos=1;
            mostrarAlumno(listaDeAlumnos[i]);
        }
    }
    return tieneAlumnos;
}

void mostrarAlumno(eAlumno alumno)
{
    printf ("\n%d",alumno.legajo);
    printf("\t\t%s",alumno.nombre);
    printf("\t\t%d\n",alumno.nota);
}


int dameIndiceLibre(eAlumno listaDeAlumnos[],int cantidad)
{
    int i;
    int indiceLibre=-1; //fuera de incide, fuerra del array
    for(i=0; i<cantidad; i++)
    {
        if(listaDeAlumnos[i].estaVacio==LIBRE)
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
    char nombres[][20]= {"jean","Thomas","brian","flor","pipo"};
    int notas[]= {10,7,8,9,5};
    int legajos[]= {14,54,77,22,1};

    for(i=0; i<tam; i++)
    {
        strcpy(alumnos[i].nombre,nombres[i]);
        alumnos[i].nota=notas[i];
        alumnos[i].legajo=legajos[i];
        alumnos[i].estaVacio=OCUPADO;
    }
}

int buscarAlumno(eAlumno alumnos[],int cantidad)
{
    int i;
    int numero;
    int loEncontre=0;
    numero=pedirEntero("\n\nIngrese el legajo a buscar: ");
    for(i=0; i<cantidad; i++)
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
    while(strlen(auxString)>50)
    {
        char auxString[100];
        printf("Error, Re%s",mensaje);
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
    for(i=0; i<cantidad; i++)
    {
        if(alumnoABorrar==1)
        {
            alumnoABorrar=1;
            alumnos[i].estaVacio=LIBRE;
            printf("\nEl alumno a borrar es: \n");
            mostrarAlumno(alumnos[i]);
            break;
        }
    }
    return alumnoABorrar;
}

eAlumno cargarAlumno (void)
{
    eAlumno miAlumno;
    printf("\nIngrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("\nIngrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);
    printf("\nIngrese nota: ");
    scanf("%d",&miAlumno.nota);
    miAlumno.estaVacio=OCUPADO;

    return miAlumno;
}
