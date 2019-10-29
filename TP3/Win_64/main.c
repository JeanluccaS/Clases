#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.bin (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.bin (modo binario).
    10. Salir
*****************************************************/


int main()
{
    /*int option = 0;
    LinkedList* listaEmpleados = ll_newLinkedList(); //llamada al constructor
    Employee* e1 = employee_newParametros("5","Jean","10","5000");
    Employee* e2 = employee_newParametros("2","Pipo","14","6500");
    Employee* e3 = employee_newParametros("7","Flor","8","15000");
    Employee* e4 = employee_newParametros("9","Thomas","20","1000");

    Employee* aux;
    int x;
    int len;

    ll_add(listaEmpleados,e1); //agrega un empleado a la lista. //devuelve 0 y devuelve -1 si hay algo que este mal
    ll_add(listaEmpleados,e2); //el add se va a utilizar en el alta y en el parser
    ll_add(listaEmpleados,e3);
    //ll_set(listaEmpleados,1,e4); // se puede utilizar para hacer una modificacion
    ll_push(listaEmpleados,1,e4);
    len=ll_len(listaEmpleados); //cuantos empleados hay (en este caso)
    for(x=0; x<len; x++)
    {
        aux = (Employee*)ll_get(listaEmpleados,x);//es importante castearlo //se mete y devuelve el elemento
        mostrarEmpleado(aux);
    }

    aux=ll_pop(listaEmpleados,1); //en caso de que quiera trasladar un elemento de una lista a otra lista
    printf("Elimine a este:\n");
    mostrarEmpleado(aux);
    printf("\n");
    for(x=0; x<len; x++)
    {
        aux = (Employee*)ll_get(listaEmpleados,x);//es importante castearlo //se mete y devuelve el elemento
        mostrarEmpleado(aux);
    }
    printf("\n");
    LinkedList* listaAuxiliar = ll_subList(listaEmpleados,0,2);//desde inclusivo hasta exclusivo
    len=ll_len(listaAuxiliar); //mostrar listado de empleados
    for(x=0; x<len; x++)
    {
        aux = (Employee*)ll_get(listaEmpleados,x);//es importante castearlo //se mete y devuelve el elemento
        mostrarEmpleado(aux);
    }


    ll_clear(listaEmpleados);

    len=ll_len(listaEmpleados);
    printf("%d",len);

    len=ll_isEmpty(listaEmpleados); //0 en caso de que haya elementos, 1 en caso de que no.
    printf("\n%d",len);
    */
/*
    ll_sort(listaEmpleados,compararPorNombre,0);//solo se pasa el nombre de la funcion


    len=ll_len(listaEmpleados);
    for(x=0; x<len; x++)
    {
        aux = (Employee*)ll_get(listaEmpleados,x);//es importante castearlo //se mete y devuelve el elemento
        mostrarEmpleado(aux);
    }*/
    int option;
    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
        printf("opcion: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
            case 6:
                controller_ListEmployee(listaEmpleados);
                break;
            case 8:
                controller_saveAsText("data.csv",listaEmpleados);
                break;
            case 9:
                controller_saveAsBinary("data.bin",listaEmpleados);
                break;
        }
    }while(option != 10);


    return 0;
}
