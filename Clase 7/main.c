#include "prototipos.h"
#define MAX 10
#define MAXL 3
 ///typedef define tipos de dato.





int main()
{


    eAlumno listadoDeAlumnos[MAX];
    eLocalidad listadoDeLocalidades[MAXL];

    inicializarAlumnos(listadoDeAlumnos,MAX,LIBRE);

    int opcion;

    do
    {
        printf("\n1. Cargar Alumno.\n2. Cargar 5 alumnos predeterminados.\n3. Dar de baja un alumno");
        printf("\n4. Buscar alumno.\n5. Listar alumnos.\n6. Modificar \n7. Hardcodear Localidades");
        printf("\n8. Salir");
        printf("\nIngrese una opcion: ");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                cargarAlumnos(listadoDeAlumnos,MAX);
                break;
            case 2:
                hardcodearAlumno(listadoDeAlumnos,5);
                break;
            case 3:
                borrarAlumno(listadoDeAlumnos,MAX);
                break;
            case 4:
                buscarAlumno(listadoDeAlumnos,MAX);
                break;
            case 5:
                listarAlumnosConLocalidad(listadoDeAlumnos,MAX,listadoDeLocalidades,MAXL);
                printf("\n");
                system("pause");
                break;
            case 6:
                modificarAlumno(listadoDeAlumnos,MAX);
                break;
            case 7:
                hardcodearLocalidad(listadoDeLocalidades,MAXL);
                break;
            case 8: printf("\nSaliendo..");
                break;
            default:
                printf("Opcion incorrecta");

        }


    }while(opcion!=7);


















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




