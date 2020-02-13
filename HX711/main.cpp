#include "mbed.h"
#include "HX711.h"

//PinName data(D13);
//PinName sck(D12); //Nucleo R2

PinName data(D3);
PinName sck(D2); // Nucleo LKC
Serial pc(USBTX, USBRX);

int main() {
   pc.printf("Lancement \n");
   HX711 ruche = HX711(data, sck, 0);
    while(1) {
        // pc.printf("valeur brute : %d \t",ruche.getValue());
        pc.printf("le poids de la ruche est : %.0f g \n",ruche.getGram());
        wait(2);
    }
}
