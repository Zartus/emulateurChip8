//
// Created by zartus on 5/12/21.
//
#include "cpu.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

ptrCPU initialiserCpu(){
    ptrCPU c = malloc(sizeof(CPU));
    c->PC = 512;
    memset(c->memoire,0,TAILLEMEMOIRE);
    memset(c->V,0,REGISTRES);
    memset(c->stack,0,48);
    return c;
}