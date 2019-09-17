#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
   char nombre[50];
   int nota;
   int legajo;
   int estaVacio;// 0 para no 1 para si esta vacio

}eAlumno;

void inicializarAlumnos(eAlumno[],int cantidad,int estado);
void hardcodearAlumno(eAlumno[],int cantidad);
void listarAlumnos(eAlumno[],int cantidad);
void mostrarAlumno(eAlumno);
int dameIndiceLibre(eAlumno[],int cantidad);

void pedirString (char mensaje[],char contenido[]);
int pedirEntero (char mensaje[]);
int buscarAlumno(eAlumno[],int cantidad);
int borrarAlumno(eAlumno[],int cantidad);
