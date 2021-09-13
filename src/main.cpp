
#ifndef UNIT_TEST

#include <iostream>
#include <vector>
#include "envio.h"
#include "servicioPostal.h"
#include "envioFedEx.h"

using namespace std;

int main() {

    ServicioPostal*servicioPostal1 = new ServicioPostal(6,6,1);
    EnvioFedEX*envioFed1 = new EnvioFedEX(550, 6);
    ServicioPostal*servicioPostal2 = new ServicioPostal(10,9,2);
    EnvioFedEX*envioFed2 = new EnvioFedEX(600,2);

    std::vector<Envio * >arregloEnvios;
    arregloEnvios.push_back(servicioPostal1);
    arregloEnvios.push_back(envioFed1);
    arregloEnvios.push_back(servicioPostal2);
    arregloEnvios.push_back(envioFed2);

    double totalMontoEnvios=0;

    for(Envio*envio:arregloEnvios){
        totalMontoEnvios += envio->CalculoEnvio();
    }

    std::cout << "El total de los envios es de " << totalMontoEnvios << " colones" << std::endl;

    delete servicioPostal1;
    delete servicioPostal2;
    delete envioFed1;
    delete envioFed2;

    return 0;
}

#endif