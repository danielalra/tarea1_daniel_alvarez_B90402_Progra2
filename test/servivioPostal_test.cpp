#include <gtest/gtest.h>
#include <string>

#include "../src/servicioPostal.h"

namespace {
    //para estas pruebas se tomara una distancia de 10km

    //primera clase, 1-3 kg
    TEST(ServicioPostalTests, ServicioPostal_CalculoEnvio_Test1){
        ServicioPostal*servicio1 =  new ServicioPostal(2,10,1);
        float costo = servicio1->CalculoEnvio();
        EXPECT_FLOAT_EQ(1.95, costo);
    }
    //primera clase, 4-8 kg
    TEST(ServicioPostalTests, ServicioPostal_CalculoEnvio_Test2){
        ServicioPostal*servicio1 =  new ServicioPostal(6,10,1);
        float costo = servicio1->CalculoEnvio();
        EXPECT_FLOAT_EQ(4.5, costo);
    }
    //primera clase, +9 kg
    TEST(ServicioPostalTests, ServicioPostal_CalculoEnvio_Test3){
        ServicioPostal*servicio1 =  new ServicioPostal(10,10,1);
        float costo = servicio1->CalculoEnvio();
        EXPECT_FLOAT_EQ(5, costo);
    }
    //segunda clase, 1-3 kg
    TEST(ServicioPostalTests, ServicioPostal_CalculoEnvio_Test4){
        ServicioPostal*servicio1 =  new ServicioPostal(2,10,2);
        float costo = servicio1->CalculoEnvio();
        EXPECT_FLOAT_EQ(0.195, costo);
    }
    //segunda clase, 4-8 kg
    TEST(ServicioPostalTests, ServicioPostal_CalculoEnvio_Test5){
        ServicioPostal*servicio1 =  new ServicioPostal(6,10,2);
        float costo = servicio1->CalculoEnvio();
        EXPECT_FLOAT_EQ(0.45, costo);
    }
    //segunda clase, +9 kg
    TEST(ServicioPostalTests, ServicioPostal_CalculoEnvio_Test6){
        ServicioPostal*servicio1 =  new ServicioPostal(10,10,2);
        float costo = servicio1->CalculoEnvio();
        EXPECT_FLOAT_EQ(0.5, costo);
    }
    //tercera clase, 1-3 kg
    TEST(ServicioPostalTests, ServicioPostal_CalculoEnvio_Test7){
        ServicioPostal*servicio1 =  new ServicioPostal(2,10,3);
        float costo = servicio1->CalculoEnvio();
        EXPECT_FLOAT_EQ(0.15, costo);
    }
    //tercera clase, 4-8 kg
    TEST(ServicioPostalTests, ServicioPostal_CalculoEnvio_Test8){
        ServicioPostal*servicio1 =  new ServicioPostal(6,10,3);
        float costo = servicio1->CalculoEnvio();
        EXPECT_FLOAT_EQ(0.16, costo);
    }
    //tercera clase, +9 kg
    TEST(ServicioPostalTests, ServicioPostal_CalculoEnvio_Test9){
        ServicioPostal*servicio1 =  new ServicioPostal(10,10,3);
        float costo = servicio1->CalculoEnvio();
        EXPECT_FLOAT_EQ(0.17, costo);
    }
}