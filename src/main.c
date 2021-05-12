//
// Created by zartus on 4/23/21.
//
#include <stdio.h>
#include <stdlib.h>
#include "cpu.h"

//a la fin on ne devra appeller que un .h
int main(){
    ptrCPU c = initialiserCpu();
    printf("%d\n",c->PC);
    return 0;
}
