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

