#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include "envio.h"
#include <string>

class EnvioFedEX : public Envio {

    float kilogramos;
    float kilometros;

    public:
        EnvioFedEX(float, float);
        virtual float CalculoEnvio();

};

#endif