#include <gtest/gtest.h>
#include <string>

#include "../src/servicioPostal.h"

namespace {

    TEST(ServicioPostalTests, ServicioPostal_CalculaEnvio_Test){
        ServicioPostal*servicio1 =  new ServicioPostal(2,6,1);
        float costo = servicio1->CalculoEnvio();
        EXPECT_EQ("1.17", costo);
    }
}