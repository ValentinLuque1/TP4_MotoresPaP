#include "mkl25z4.h"
#include "pasoMotor.h"


int main(){    
SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK;

PORTA -> PCR[1] |= PORT_PCR_MUX(1);
PORTA -> PCR[2] |= PORT_PCR_MUX(1);
PORTA -> PCR[3] |= PORT_PCR_MUX(1);
PORTA -> PCR[4] |= PORT_PCR_MUX(1);
//botones
PORTA -> PCR[6] |= PORT_PCR_MUX(1);     //paso completo
PORTA -> PCR[7] |= PORT_PCR_MUX(1);     //paso normal
PORTA -> PCR[8] |= PORT_PCR_MUX(1);     //paso medio

while (1){
if(PTA -> PDIR &(1u << 6) == 1){
    pasoCom(1);
}
if(PTA -> PDIR &(1u << 7) == 1){
    pasoNormal(1);
}  
if(PTA -> PDIR &(1u << 8) == 1){
    medioPaso(1);
} 
}
}