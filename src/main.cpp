
#ifndef UNIT_TEST

#include <iostream>
#include <vector>
#include "envio.h"
#include "servicioPostal.h"
#include "envioFedEx.h"

using namespace std;

int main() {

    ServicioPostal*servicio1 = new ServicioPostal(6,6,1);
    EnvioFedEX*fed1 = new EnvioFedEX(550, 6);
    ServicioPostal*servicio2 = new ServicioPostal(10,9,2);
    EnvioFedEX*fed2 = new EnvioFedEX(600,2);

    std::vector<Envio * >arregloEnvios;
    arregloEnvios.push_back(servicio1);
    arregloEnvios.push_back(fed1);
    arregloEnvios.push_back(servicio2);
    arregloEnvios.push_back(fed2);

    float total=0;

    for(Envio*envio:arregloEnvios){
        total += envio->CalculoEnvio();
    }

    std::cout << "El total de los envios es de " << total << " colones" << std::endl;

    delete servicio1;
    delete servicio2;
    delete fed1;
    delete fed2;

    return 0;
}

#endif