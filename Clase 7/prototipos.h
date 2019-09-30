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
int codigoPostal;
}eLocalidad;

void inicializarAlumnos(eAlumno[],int cantidad,int estado);
void hardcodearAlumno(eAlumno[],int cantidad);
int listarAlumnosConLocalidad(eAlumno listaDeAlumnos[],int cantidad,eLocalidad listaDeLocalidades[],int tl);
void mostrarAlumno(eAlumno,eLocalidad);
int dameIndiceLibre(eAlumno[],int cantidad);
int cargarAlumnos (eAlumno listaDeAlumnos[],int cantidad);
void pedirString (char mensaje[],char contenido[],char mensajeDeError[]);
int pedirEntero (char mensaje[]);
int buscarAlumno(eAlumno[],int cantidad);
int borrarAlumno (eAlumno alumnos[], int cantidad,eLocalidad listaDeLocalidades[],int tl);
eAlumno cargarAlumno (void);
int modificarAlumno(eAlumno alumnos[],int cantidad,eLocalidad listaDeLocalidades[],int tl);
int buscarLocalidadPorId(eLocalidad listaDeLocalidades[],int tl,int idLocalidad);
int listarLocalidades (eAlumno[],eLocalidad[],int tl);
void mostrarUnaLocalidad(eLocalidad);
int mostrarAlumnosDeAvellaneda(eAlumno[],eLocalidad[],int ta,int tl);
void mostrarPorLocalidad(eAlumno listaDeAlumnos[],eLocalidad listaDeLocalidades[],int ta,int tl);
