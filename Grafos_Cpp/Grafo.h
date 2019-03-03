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
        
};


#endif /* GRAFO_H */

