#include "envioFedEx.h"
#include <string>

EnvioFedEX::EnvioFedEX(float kilometros, float kilogramos){
    this->kilogramos=kilogramos;
    this->kilometros=kilometros;
}
float EnvioFedEX::CalculoEnvio(){
    float costo = 20;
    if(kilometros>500){
        costo = costo + 5;

    }
    if(kilogramos>4){
        costo = costo + 3;
    }
    return costo;
}