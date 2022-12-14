#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Estruturas.h"

int convertedia(char* dd){
    int dia;
    dia = atoi(dd);
    return dia;
}

int convertemes (char* mm){
    int mes;
    mes = atoi(mm);
    return mes;
}

int converteano (char* aaaa){
    int ano;
    ano = atoi(aaaa);
    return ano;
}



int ano_bissexto (int ano){
    if((ano % 4 == 0) && (ano % 100 != 0)){
        return 1;
    }else if(ano % 400 == 0){
        return 1;
    }else{
        return 0;
    }
}

int validacao_data (int dia,int mes, int ano){
    printf("Dia = %d",dia);
    int maior_dia;
    // Faixas de dias validos
    if(dia > 31 || dia < 0){
        printf("\nFora da faixa válida de dias\n");
        return 0;
    }
    else{
        printf("\nDia dentro da faixa válida\n");
    }
    // Faixa de mês valido
    printf("Mês = %d",mes);
    if(mes > 12 || mes < 0){
        printf("\nFora da faixa válida de meses\n");
        return 0;
    }
    else{
        printf("\nMês dentro da faixa válida\n");
    }
    // Faixa valida de ano
    printf("Ano = %d",ano);
    if(ano > 2100 || ano < 1500){
        printf("\nFora da faixa válida de anos\n");
        return 0;
    }
    else{
        printf("\nAno dentro da faixa válida\n");
    }
    ////////////////////////////////////////////////////////
    // Casos especificos
    if( mes == 4 || mes == 6 || mes == 9 || mes == 11 ){
        maior_dia = 30;
        if(dia > maior_dia){
            printf("\nFora da faixa válida de dias\n");
            return 0;
        }
        else{
        printf("\nDia dentro da faixa válida\n");
        }   
    }
    if(mes == 2 && ano_bissexto ==1){
        maior_dia = 29;
        if(dia > maior_dia){
            printf("\nFora da faixa válida de dias\n");
            return 0;
        }
        else{
        printf("\nDia dentro da faixa válida\n");
        }   
    }
    else{
        maior_dia = 31;
        if(dia > maior_dia){
            printf("\nFora da faixa válida de dias\n");
            return 0;
        }
        else{
        printf("\nDia dentro da faixa válida\n");
        }   
    }
    return 1;
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
    printf("Cpf válido");
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
