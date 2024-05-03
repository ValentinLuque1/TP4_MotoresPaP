#include "pasoMotor.h"
#include "mkl25z4.h"

#define IN1 1
#define IN2 2
#define IN3 3
#define IN4 4


void pasoCom(pasos){

while(pasos > 0){
    if(pasos > 0){
    PTA -> PSOR |= (1u << IN1);
    PTA -> PSOR |= (0u << IN2);
    PTA -> PSOR |= (0u << IN3);
    PTA -> PSOR |= (0u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    if(pasos > 0){
    PTA -> PSOR |= (0u << IN1);
    PTA -> PSOR |= (1u << IN2);
    PTA -> PSOR |= (0u << IN3);
    PTA -> PSOR |= (0u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    if(pasos > 0){
    PTA -> PSOR |= (0u << IN1);
    PTA -> PSOR |= (0u << IN2);
    PTA -> PSOR |= (1u << IN3);
    PTA -> PSOR |= (0u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    if(pasos > 0){
    PTA -> PSOR |= (0u << IN1);
    PTA -> PSOR |= (0u << IN2);
    PTA -> PSOR |= (0u << IN3);
    PTA -> PSOR |= (1u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    }
}
    void medioPaso(pasos){
    while(pasos > 0){
    if(pasos > 0){
    PTA -> PSOR |= (1u << IN1);
    PTA -> PSOR |= (0u << IN2);
    PTA -> PSOR |= (0u << IN3);
    PTA -> PSOR |= (0u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    if(pasos > 0){
    PTA -> PSOR |= (1u << IN1);
    PTA -> PSOR |= (1u << IN2);
    PTA -> PSOR |= (0u << IN3);
    PTA -> PSOR |= (0u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    if(pasos > 0){
    PTA -> PSOR |= (0u << IN1);
    PTA -> PSOR |= (1u << IN2);
    PTA -> PSOR |= (0u << IN3);
    PTA -> PSOR |= (0u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    if(pasos > 0){
    PTA -> PSOR |= (0u << IN1);
    PTA -> PSOR |= (1u << IN2);
    PTA -> PSOR |= (1u << IN3);
    PTA -> PSOR |= (0u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    if(pasos > 0){
    PTA -> PSOR |= (0u << IN1);
    PTA -> PSOR |= (0u << IN2);
    PTA -> PSOR |= (1u << IN3);
    PTA -> PSOR |= (0u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    if(pasos > 0){
    PTA -> PSOR |= (0u << IN1);
    PTA -> PSOR |= (0u << IN2);
    PTA -> PSOR |= (1u << IN3);
    PTA -> PSOR |= (1u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    if(pasos > 0){
    PTA -> PSOR |= (0u << IN1);
    PTA -> PSOR |= (0u << IN2);
    PTA -> PSOR |= (0u << IN3);
    PTA -> PSOR |= (1u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    if(pasos > 0){
    PTA -> PSOR |= (1u << IN1);
    PTA -> PSOR |= (0u << IN2);
    PTA -> PSOR |= (0u << IN3);
    PTA -> PSOR |= (1u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    }
    }    
    void pasoNormal(pasos){
    while(pasos > 0){
    if(pasos > 0){
    PTA -> PSOR |= (1u << IN1);
    PTA -> PSOR |= (1u << IN2);
    PTA -> PSOR |= (0u << IN3);
    PTA -> PSOR |= (0u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    if(pasos > 0){
    PTA -> PSOR |= (0u << IN1);
    PTA -> PSOR |= (1u << IN2);
    PTA -> PSOR |= (1u << IN3);
    PTA -> PSOR |= (0u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    if(pasos > 0){
    PTA -> PSOR |= (0u << IN1);
    PTA -> PSOR |= (0u << IN2);
    PTA -> PSOR |= (1u << IN3);
    PTA -> PSOR |= (1u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    if(pasos > 0){
    PTA -> PSOR |= (1u << IN1);
    PTA -> PSOR |= (0u << IN2);
    PTA -> PSOR |= (0u << IN3);
    PTA -> PSOR |= (1u << IN4);
    pasos--;
    for(int i = 0; i > 5000;i++);
    }
    }
}
