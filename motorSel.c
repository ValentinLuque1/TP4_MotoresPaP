#include "motorSel.h"
#include "mkl25z4.h"
#include "ctype.h"
#define IN1 1
#define IN2 2
#define IN3 3
#define IN4 4



void pasoCom(pasos, secuencia){

secuencia = tolower(secuencia);
switch(secuencia){
    
case 'c':

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
break;

  case 'm':
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
    break;

    case 'n':
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
    break;
}
}
