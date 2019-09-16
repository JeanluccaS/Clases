#include "prototipos.h"
#define MAX 5
 ///typedef define tipos de dato.





int main()
{
    int indice;

    eAlumno listadoDeAlumnos[MAX];
    //
   // inicializarAlumnos(listadoDeAlumnos,MAX,1);
    hardcodearAlumno(listadoDeAlumnos,MAX);
    listarAlumnos(listadoDeAlumnos,MAX);
    buscarAlumno(listadoDeAlumnos,MAX);
    indice=dameIndiceLibre(listadoDeAlumnos,MAX);











/*
   scanf("%d",&unAlumno.nota);
   printf("\n El numero es: %d",unAlumno.nota);
   scanf("%s",&unAlumno.nombre);
   printf("\n El nombre es: %s",unAlumno.nombre);
   ///otro alumno
    scanf("%d",&otroAlumno.nota);
    otroAlumno=unAlumno;
   printf("\n El numero es: %d",otroAlumno.nota);
   scanf("%s",&otroAlumno.nombre);
   printf("\n El nombre es: %s",otroAlumno.nombre);
   ///despues de asignar
 otroAlumno.nota=999;
 printf("\n El anterior es: %d",unAlumno.nota);
 printf("\n El actual es: %d",otroAlumno.nota);
*/




    return 0;
}




