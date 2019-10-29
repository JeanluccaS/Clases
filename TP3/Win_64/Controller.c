#include "Controller.h"


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path, LinkedList* pArrayListEmployee)
{
    FILE* pArchivo;
    int retorno;
    pArchivo = fopen(path,"r");
    if(pArchivo!=NULL)
    {

        retorno=parser_EmployeeFromText(pArchivo,pArrayListEmployee);
        fclose(pArchivo);
    }

    return retorno;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path, LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
    int i;
    int len;
    len=ll_len(pArrayListEmployee);
    Employee* unEmpleado;
    for(i=0; i<len; i++)
    {
        unEmpleado=(Employee*)ll_get(pArrayListEmployee,i);
        mostrarEmpleado(unEmpleado);
        if(i%30 == 0)
        {
            system("pause");
        }
    }
    return 1;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path, LinkedList* pArrayListEmployee)
{
    int state=-1;
    FILE* pArchivo;
    char formato[]="w";
    Employee* unEmpleado;
    int i;
    int len;
    pArchivo=fopen(path,formato);

    int id;
    char nombre[50];
    int sueldo;
    int horasTrabajadas;
    if(pArchivo!=NULL && pArrayListEmployee != NULL)
    {
        len=ll_len(pArrayListEmployee);
        fprintf(pArchivo,"%s,%s,%s,%s\n","Id","nombre","horas","sueldo");

        for(i=0;i<len;i++)
        {
           unEmpleado =(Employee*)ll_get(pArrayListEmployee,i);
           employee_getId(unEmpleado,&id);
           employee_getNombre(unEmpleado,nombre);
           employee_getSueldo(unEmpleado,&sueldo);
           employee_getHorasTrabajadas(unEmpleado,&horasTrabajadas);
           fprintf(pArchivo,"%d,%s,%d,%d\n",id,nombre,horasTrabajadas,sueldo);

        }
       fclose(pArchivo);
       state=0;
    }


    return state;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path, LinkedList* pArrayListEmployee)
{

    return 1;
}

