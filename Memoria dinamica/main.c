#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
void mostrarPersona(ePersona*);
ePersona* new_Persona();


int main()
{
    ePersona* puntero= new_Persona_Parametros(1000,'m',1.77); //primero se apilo el puntero, despues new persona (porque los llamados tambien se apilan (cuando se ejecuta la funcion se guarda en puntero, la direccion de memoria de los datos)
    setLegajo(puntero,1001);
    if(puntero!=NULL) //lo mismo que en la funcion.
    {
        printf("La persona es: \n");
        if(getLegajo(puntero)>1000)
        {
            //se rompe todo, ya que pisa la variable que antes era ocupada por los datos (que ahora esta libre, ya que termino la funcion, esto en el caso de crear la funcion con una persona)
            mostrarPersona(puntero);
        }
    }
    delete_Persona(puntero); //libera el espacio del puntero y todo lo que este reservado para este puntero.
    return 0;
}

















/*
ePersona* new_Persona() //cuando se desapila esa variable se libera el espacio reservado para que otra variable pueda usarlo (se desapila el puntero y otra persona)
{
  //  ePersona unaPersona={1000,'m',1.75}; //En la funcion se general el dato, es decir, una persona (con sus respectivos datos)
    ePersona* puntero; //Se crea el puntero
  //  puntero=&unaPersona; //Y se le asigna la direccion de memoria de una persona
    puntero=(ePersona*)calloc(sizeof(ePersona));//memoria location (reserva espacio en memoria) //recibe la cantidad de bytes que necesito que reserve en memoria
                                                //void representa nada, void* representa cualquier tipo de dato, una persona,un entero, una casa
                                                //malloc permite reservar memoria para cualquier tipo de variable  //si encuentra espacio devuelve la direccion de memroia del primer byte //tambien se castea ese puntero a void al tipo de dato que quiero usar.
                                                //ejemplo de facultad.
    if(puntero!=NULL) //devuelve NULL, en caso de que no haya espacio (el malloc)
    {
        puntero->legajo=1000;
        puntero->sexo='M';
        puntero->altura=1.79;
    }
    return puntero; //Esta funcion retorna la direccion de memoria
}
//la memoria ram tiene varios segmentos (o partes) no solo la pila.
//tambien tiene la memoria estatica, (donde seguardan las constante y variables globales)
//el segmento de codigo (donde se guarda el codigo como tal)
//La memoria dinamica (heap) o monton.
//la pila en comparacion al heap es muy chiquito. //en la pila no se deberian gugardar datos (datos de personas.. etc, para que no se llene tan rapido)
//Lo mismo echo anterior mente, pero en el segmento del heap.

void mostrarPersona(ePersona* unaPersona)
{
    printf("%d---%c---%.2f",unaPersona->legajo,unaPersona->sexo,unaPersona->altura);
}
*/




