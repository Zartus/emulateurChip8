//
// Created by zartus on 4/23/21.
//
#ifndef CHIP8_CPU_H
#define CHIP8_CPU_H
#define TAILLEMEMOIRE 4096
#define REGISTRES 16
#define ADRESSEDEBUT 512

/**
 * Type Opaque
 */
typedef struct s_CPU CPU;


/** Definition du pointeur CPU
 */
typedef CPU * ptrCPU;

struct s_CPU
{
    unsigned char memoire[TAILLEMEMOIRE]; //memoire
    unsigned char V[REGISTRES]; //registres
    unsigned short PC;
    unsigned char gameCompteur;
    unsigned char soundCompteur;
    unsigned short stack[48];
    unsigned char stackPtr;

};


ptrCPU initialiserCpu() ;

void decompter() ;

#endif //CHIP8_CPU_H
