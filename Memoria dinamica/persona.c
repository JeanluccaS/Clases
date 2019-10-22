#include "persona.h"
ePersona* new_Persona() //se hacen las mismas funciones para todas las estructuras
{
    ePersona* puntero;

    puntero=(ePersona*)calloc(sizeof(ePersona),1);

    return puntero;
}

void mostrarPersona(ePersona* unaPersona)
{
    printf("%d---%c---%.2f",unaPersona->legajo,unaPersona->sexo,unaPersona->altura);
}

void delete_Persona(ePersona* unaPersona)
{
    free(unaPersona);
}

ePersona* new_Persona_Parametros(int legajo,char sexo,float altura )
{
    ePersona* p=new_Persona();
    if(p!=NULL)
    {
        p->legajo=legajo;
        p->sexo=sexo;
        p->altura=altura;
    }
    return p;
}


void  setLegajo(ePersona* unaPersona,int legajo)
{
    if(unaPersona!=NULL)
    {
        if(legajo>0)//validacion
        {
        unaPersona->legajo=legajo;
        }
    }
}
int getLegajo(ePersona* unaPersona) //this representa a la persona actual o el puntero que recibe.
{
    int retorno;
    if(unaPersona!=NULL)

    {
       retorno=unaPersona->legajo;
    }
     return retorno;
}
