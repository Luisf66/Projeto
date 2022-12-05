// validações
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Estruturas.h"
// NOME
int Vnome (Paciente* cliente){
    int tam;
    tam = strlen(cliente->nome);
    if(tam == 0){
        return 0;
    }
    else{
        return 1;
    }
}
//DATA
int Vbissexto (int aaaa){
    if((aaaa % 4 == 0) && (aaaa % 100 != 0)) {
        return 1;
    }
    else if(aaaa % 400 == 0){
        return 1;
    } 
    else{
        return 0;
    }
}

int Vdata (int dia, int mes, int aaaa){
    int dia_max;
    if(dia < 0 || mes < 0 || aaaa < 0){
        return 0;
    }
    else{
        return 1;
    }
    if(dia > 31 || mes > 12 || aaaa > 2100){
        return 0;
    }
    else{
        return 1;
    }
    if(mes == 2){
        if(Vbissexto(aaaa)){
            dia_max = 29;
        }
        else{
            dia_max = 28;
        }
    }
    if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        dia_max = 30;
    }
    else{
        dia_max = 31;
    }
    if(dia > dia_max){
        return 0;
    }
    else{
        return 1;
    }
    return 1;
}
//CPF
int Vcpf (Paciente* cliente){
    int tam;
    int Icpf;
    int resultado;
    int resultado_dois;
    tam = strlen(cliente->cpf);
    if(tam != 11){
        return 0;
    }
    Icpf = cliente->cpf - '0';
    resultado = (cliente->cpf[0]*10) + (cliente->cpf[1]*9) + (cliente->cpf[2]*8) + (cliente->cpf[4]*7) + (cliente->cpf[5]*6) + (cliente->cpf[6]*5) + (cliente->cpf[8]*4) + (cliente->cpf[9]*3) + (cliente->cpf[10]*2); 
    resultado = (resultado * 10) % 11;
    if(resultado == 10){
        resultado = 0;
    }
    if(resultado = cliente->cpf[12]){
        return 1;
    }
    else{
        return 0;
    }
    resultado_dois = (cliente->cpf[0]*11) + (cliente->cpf[1]*10) + (cliente->cpf[2]*9) + (cliente->cpf[4]*8) + (cliente->cpf[5]*7) + (cliente->cpf[6]*6) + (cliente->cpf[8]*5) + (cliente->cpf[9]*4) + (cliente->cpf[10]*3) + (cliente->cpf[12]*2);
    resultado_dois = (resultado_dois * 10) % 11;
    if (resultado_dois == cliente->cpf[13]){
        return 1;
    }
    else{
        return 0;
    }
}

