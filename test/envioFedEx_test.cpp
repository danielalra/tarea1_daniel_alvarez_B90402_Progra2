#include <gtest/gtest.h>
#include <string>

#include "../src/envioFedEx.h"

namespace{
    //distancia> 500 y peso>4
    TEST(EnvioFedEXTest,EnvioFedEX_test1){
        EnvioFedEX*envio1=new EnvioFedEX(600,5);
        float costo = envio1->CalculoEnvio();
        EXPECT_FLOAT_EQ(28,costo);
    } 
    //distancia> 500 y peso<=4
    TEST(EnvioFedEXTest,EnvioFedEX_test2){
        EnvioFedEX*envio1=new EnvioFedEX(600,3);
        float costo = envio1->CalculoEnvio();
        EXPECT_FLOAT_EQ(25,costo);
    } 
     //distancia<= 500 y peso>4
    TEST(EnvioFedEXTest,EnvioFedEX_test3){
        EnvioFedEX*envio1=new EnvioFedEX(400,5);
        float costo = envio1->CalculoEnvio();
        EXPECT_FLOAT_EQ(23,costo);
    }
    //distancia<= 500 y peso<=4
    TEST(EnvioFedEXTest,EnvioFedEX_test4){
        EnvioFedEX*envio1=new EnvioFedEX(400,3);
        float costo = envio1->CalculoEnvio();
        EXPECT_FLOAT_EQ(20,costo);
    }

}