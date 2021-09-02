#ifndef ENVIO_H
#define ENVIO_H

#include <string>

class Envio {
    
    protected:
    Envio() { }

    public:
    ~Envio() {}
    virtual double CalculoEnvio() = 0;  
};

#endif