#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include "envio.h"
#include <string>

class EnvioFedEX : public Envio {

    double kilogramos;
    double kilometros;

    public:
        EnvioFedEX(double, double);
        virtual double CalculoEnvio();

};

#endif