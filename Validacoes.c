#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Estruturas.h"

int ano_bissexto (int ano){
    if((ano % 4 == 0) && (ano % 100 != 0)){
        return 1;
    }else if(ano % 400 == 0){
        return 1;
    }else{
        return 0;
    }
}

int validacao_data (char* dia,char* mes, char* ano){
    int maior_dia;
    // Faixas de dias validos
    if(dia > 31 || dia < 0){
        printf("Fora da faixa válida de dias");
        return 0;
    }
    else{
        printf("Dia dentro da faixa válida");
        return 1;
    }
    // Faixa de mês valido
    if(mes > 12 || mes < 0){
        printf("Fora da faixa válida de meses");
        return 0;
    }
    else{
        printf("Mês dentro da faixa válida");
        return 1;
    }
    // Faixa valida de ano
    if(ano > 2100 || ano < 1500){
        printf("Fora da faixa válida de anos");
        return 0;
    }
    else{
        printf("Ano dentro da faixa válida");
        return 1;
    }
    ////////////////////////////////////////////////////////
    // Casos especificos
    if( mes == 4 || mes == 6 || mes == 9 || mes == 11 ){
        maior_dia = 30;
        if(dia > maior_dia){
            printf("Fora da faixa válida de dias");
            return 0;
        }
        else{
        printf("Dia dentro da faixa válida");
        return 1;
        }   
    }
    if(mes == 2 && ano_bissexto){
        maior_dia = 29;
        if(dia > maior_dia){
            printf("Fora da faixa válida de dias");
            return 0;
        }
        else{
        printf("Dia dentro da faixa válida");
        return 1;
        }   
    }
    else{
        maior_dia = 31;
        if(dia > maior_dia){
            printf("Fora da faixa válida de dias");
            return 0;
        }
        else{
        printf("Dia dentro da faixa válida");
        return 1;
        }   
    }
}

int validacao_cpf (char* cpf){
    int tam, soma, d1, d2;
    int cpfInt[11];

    tam = strlen(cpf);
    if(tam != 11){
        return 0;
    }
    for(int i = 0; i < 11; i++){
        if(cpf[i] < '0' || cpf[i] > '9'){
            return 0;
        }
    }
    for(int i = 0; i < 11; i++){
        cpfInt[i] = cpf[i] - '0';
    }
    soma = 0;
    for(int i = 0; i < 9; i++){
        soma += cpfInt[i] * (10 - i);
    }
    d1 = 11 - (soma % 11);
    if(d1 == 10 || d1 == 11){
        d1 = 0;
    }
    if(cpfInt[9] != d1){
        return 0;
    }

    soma = 0;
    for(int i = 0; i < 10; i++){
        soma += cpfInt[i] * (11 - i);
    }
    d2 = 11 - (soma % 11);
    if(d2 == 10 || d2 == 11){
        d2 = 0;
    }
    if(cpfInt[10] != d2){
        return 0;
    }
    return 1;
}

int validacao_hora (char* hora){
    int tam;
    tam = strlen(hora);
    if(tam == 0){
        return 0;
    }
    else{
        return 1;
    }
    if( hora > 24 || hora < 0){
        return 0;
    }
    else{
        return 1;
    }
}