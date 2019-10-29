/*
    utest example : Unit test examples.
    Copyright (C) <2018>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __LINKEDLIST
#define __LINKEDLIST
struct Node
{
    void* pElement;
    struct Node* pNextNode;
}typedef Node;

struct LinkedList
{
    Node* pFirstNode;
    int size;
}typedef LinkedList;
#endif



//Publicas
LinkedList* ll_newLinkedList(void);//reserva espacio en memoria. (un malloc en memoria)
int ll_len(LinkedList* this); //la cantidad de elementos(estructuras) dentro de una lista
Node* test_getNode(LinkedList* this, int nodeIndex);//funcion de prueba
int test_addNode(LinkedList* this, int nodeIndex,void* pElement);//funcion de prueba
int ll_add(LinkedList* this, void* pElement);//agrega un elemento (es una lista generica) (por eso es void*)
void* ll_get(LinkedList* this, int index); //muestra el objeto que esta en ese indice
int ll_set(LinkedList* this, int index,void* pElement);//pone un elemento arriba de otro, lo reemplaza
int ll_remove(LinkedList* this,int index);//elimina un elemento de la lista
int ll_clear(LinkedList* this);//borra los elementos en memoria
int ll_deleteLinkedList(LinkedList* this);//borra la lista con los elementos dentro
int ll_indexOf(LinkedList* this, void* pElement);//se le pasa un elemento y te dice en que indice esta (buscar por id por ejemplo)
int ll_isEmpty(LinkedList* this);//si hay algo en la lista o no. (dice si hay almenos uno)
int ll_push(LinkedList* this, int index, void* pElement); //cambia el tamaño de la lista (agrega un elemento mas sin pisar el anterior)
void* ll_pop(LinkedList* this,int index);//antes de borrarlo lo recupera y lo devuelve, por si se quiere sacar un elemento en la lista y ponerlo en otra
int ll_contains(LinkedList* this, void* pElement);
int ll_containsAll(LinkedList* this,LinkedList* this2);//si hay una lista dentro de otra.
LinkedList* ll_subList(LinkedList* this,int from,int to);//me devuelve una sub lista. (una parte de una lista)
LinkedList* ll_clone(LinkedList* this);//crea una copia identica de la lista (pero es una lista distinta)
int ll_sort(LinkedList* this, int (*pFunc)(void* ,void*), int order); //ordena la lista. si yo quiero que se ordene por legajo se coloca en su respectiva entidad.
