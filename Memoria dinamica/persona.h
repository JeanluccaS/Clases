#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int legajo;
    char sexo;
    float altura;

}ePersona;
void mostrarPersona(ePersona*);
ePersona* new_Persona(); //constructor por defecto (inicializa un dato en 0 o por defecto)
ePersona* new_Persona_Parametros(int legajo,char sexo,float altura);//constructor parametrizado


void  setLegajo(ePersona*,int legajo);
int getLegajo(ePersona*);


void delete_Persona(ePersona*);
