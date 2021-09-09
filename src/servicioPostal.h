#ifndef SERVICIOPOSTAL_H
#define SERVICIOPOSTAL_H

#include "envio.h"
#include <string>

class ServicioPostal : public Envio {

    float kilogramos;
    float kilometros;
    int clase;

    public:
        ServicioPostal(float, float, int);
        virtual float CalculoEnvio(); 
};

#endif