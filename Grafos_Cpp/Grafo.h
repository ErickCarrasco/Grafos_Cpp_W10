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
    
};

class Grafo{
    public:
        
};


#endif /* GRAFO_H */

