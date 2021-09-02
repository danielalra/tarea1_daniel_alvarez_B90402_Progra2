#include "envioFedEx.h"
#include <string>

EnvioFedEX::EnvioFedEX(double kilometros, double kilogramos){
    this->kilogramos=kilogramos;
    this->kilometros=kilometros;
}
double EnvioFedEX::CalculoEnvio(){
    double costo = 20;
    if(kilometros>500){
        costo = costo + 5;

    }
    if(kilogramos>4){
        costo = costo + 3;
    }
    return costo;
}