#ifndef GRAFO_H
#define GRAFO_H

#include <iostream>

using namespace std;

class Arista;

class Vertice{
    Vertice *sig;
    Arista *ady;
    string nombre;
    friend class Grafo;
};

class Arista{
    Arista *sig;
    Vertice *ady;
    int peso;
    friend class Grafo;
    
};

class Grafo{
    Vertice *h;
    public:
        void Initialize();
        bool isEmpty();
        int Size();
        Vertice *getVertice(string nombre);
        void InsertArista(Vertice *origen, Vertice *destino, int peso);
        void InsertVertice(string nombre);
        void ListAdyacentes();
        
};


#endif /* GRAFO_H */

