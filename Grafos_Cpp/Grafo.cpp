#include "Grafo.h"

void Grafo::Initialize(){
    h = NULL;
}

bool Grafo::isEmpty(){
    if(h == NULL){
        return true;
    }
    else{
        return false;
    }
}

int Grafo::Size(){
    int count = 0;
    Vertice *auxiliar;
    auxiliar = h;
    while(auxiliar != NULL){
        count++;
        auxiliar = auxiliar ->sig;
    }
    
    return count;
    
}

Vertice *Grafo::getVertice(string nombre){
    Vertice *aux;
    aux = h;
    while(aux !=NULL){
        if(aux->nombre == nombre){
            return aux;
        }
        aux = aux->sig;
    }
    return NULL;
}

void Grafo::InsertVertice(string nombre){
    Vertice *nuevo = new Vertice;
    nuevo->nombre=nombre;
    nuevo->sig=NULL;
    nuevo->ady=NULL;
    if(isEmpty()){
        h = nuevo;
    }
    else{
        Vertice *aux;
        aux = h;
        while(aux->sig !=NULL){
            aux = aux->sig;
        }
        
        aux->sig = nuevo;
    }
}

void Grafo::InsertArista(Vertice *origen, Vertice *destino, int peso){
    Arista *nueva = new Arista;
    nueva->peso=peso;
    nueva->sig=NULL;
    nueva->ady=NULL;
    
    Arista *aux;
    aux = origen->ady;
    if (aux == NULL){
        origen->ady = nueva;
        nueva->ady = destino;
    }
    else {
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nueva;
        nueva->ady=destino;
        
    }
    
}

