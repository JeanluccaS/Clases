#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
typedef struct{
   char nombre[50];
   int nota;
   int legajo;
   int estaVacio;// 0 para esta vacio, 1 para no esta vacio
   int idLocalidad;
}eAlumno;

typedef struct{
int id;
char localidad[30];
int codigo postal;
}eLocalidad

void inicializarAlumnos(eAlumno[],int cantidad,int estado);
void hardcodearAlumno(eAlumno[],int cantidad);
int listarAlumnos(eAlumno[],int cantidad);
void mostrarAlumno(eAlumno);
int dameIndiceLibre(eAlumno[],int cantidad);
int cargarAlumnos (eAlumno listaDeAlumnos[],int cantidad);
void pedirString (char mensaje[],char contenido[],char mensajeDeError[]);
int pedirEntero (char mensaje[]);
int buscarAlumno(eAlumno[],int cantidad);
int borrarAlumno(eAlumno[],int cantidad);
eAlumno cargarAlumno (void);
int modificarAlumno(eAlumno[],int cantidad);
