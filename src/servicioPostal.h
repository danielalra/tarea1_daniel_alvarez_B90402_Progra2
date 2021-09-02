#ifndef SERVICIOPOSTAL_H
#define SERVICIOPOSTAL_H

#include "envio.h"
#include <string>

class ServicioPostal : public Envio {

    double kilogramos;
    double kilometros;
    int clase;

    public:
        ServicioPostal(double, double, int);
        virtual double CalculoEnvio(); 
};

#endif