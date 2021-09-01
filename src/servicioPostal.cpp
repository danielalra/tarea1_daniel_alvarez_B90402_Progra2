#include "servicioPostal.h"
#include <string>

ServicioPostal::ServicioPostal(float kilogramos, float kilometros, int clase){
    this->kilogramos=kilogramos;
    this->kilometros=kilometros;
    this->clase=clase;
}

float ServicioPostal::CalculoEnvio(){
    float costo=0;
    if(kilogramos>=1 ^ kilogramos<=3){
        if(clase==1){
            costo=0.195*kilometros;
           
        }
        else if (clase==2)
        {
            costo=0.0195*kilometros;
            
        }
        else if(clase==3){
            costo=0.0150*kilometros;
            
        }
        
    }
    else if(kilogramos>=4 ^ kilogramos<=8){
        if(clase==1){
            costo=0.450*kilometros;
            
        }
        else if (clase==2)
        {
            costo=0.0450*kilometros;
           
        }
        else if(clase==3){
            costo=0.0160*kilometros;
            
        }
    }
    else if(kilogramos>=9){
        if(clase==1){
            costo=0.500*kilometros;
            
        }
        else if (clase==2)
        {
            costo=0.0500*kilometros;
        }
        else if(clase==3){
            costo=0.0170*kilometros;
        }
    }
    return costo;
}






