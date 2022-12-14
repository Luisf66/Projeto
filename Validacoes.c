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

int convertehora (char* hh){
    int hora;
    hora = atoi(hh);
    return hora;
}


int validacao_data (int dia,int mes, int ano){
    int maior_dia;
    int bissexto;
    // Faixas de dias validos
    if(dia > 31 || dia < 0){
        return 0;
    }
    // Faixa de mês valido
    if(mes > 12 || mes < 0){
        return 0;
    }
    // Faixa valida de ano
    if(ano > 2100 || ano < 1500){
        return 0;
    }
    ////////////////////////////////////////////////////////
    // Casos especificos
    if( mes == 4 || mes == 6 || mes == 9 || mes == 11 ){
        maior_dia = 30;
        if(dia > maior_dia){
            return 0;
        }
    }
    if((ano % 4 == 0) && (ano % 100 != 0)){
        bissexto = 1;
    }else if(ano % 400 == 0){
        bissexto = 1;
    }else{
        bissexto = 0;
    }
    if(mes == 2 && bissexto == 1){
        maior_dia = 29;
        if(dia > maior_dia){
            return 0;
        }
        else{
        maior_dia = 31;
        if(dia > maior_dia){
            return 0;
        }
        }
    }
    printf("Tudo certo\n");
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
    return 1;
}

int validacao_hora (int hora){
    if( hora > 24 || hora < 0){
        return 0;
    }
    return 1;
}

int validacao_cadastro_funcionario (char* cpf){
    Profissional* funcionario;
    funcionario = (Profissional *)malloc(sizeof(Profissional));
    FILE* gfun;
    int enc;
    char buscacpf[13];
    gfun = fopen("Funcionarios.dat","rb");
    enc = 0;
    printf("Digite o mesmo cpf para a verificação:\n");
    fgets(buscacpf,13,stdin); 
    strtok(buscacpf, "\n"); 
    while ((!enc) && (fread(funcionario, sizeof(Profissional), 1, gfun))){
        if ((strcmp(funcionario->cpf,buscacpf) == 0)){
            enc = 1;
        }
    fclose(gfun);
    if (enc == 1){
        printf("Funcionário já cadastrado\n");
        return 0;
    }
    }
    free(funcionario);
    return 1;
}


int validacao_cadastro_cliente (char* cpf){
    Paciente* cliente;
    cliente = (Paciente *)malloc(sizeof(Paciente));
    FILE* gcli;
    int enc;
    char buscacpf[13];
    gcli = fopen("Clientes.dat","rb");
    enc = 0;
    printf("Digite o mesmo cpf para a verificação:\n");
    fgets(buscacpf,13,stdin); 
    strtok(buscacpf, "\n"); 
    while ((!enc) && (fread(cliente, sizeof(Paciente), 1, gcli))){
        if ((strcmp(cliente->cpf,buscacpf) == 0)){
            enc = 1;
        }
    fclose(gcli);
    if (enc == 1){
        printf("Cliente já cadastrado\n");
        return 0;
    }
    }
    free(cliente);
    return 1;
}

//int validacao_cadastro_consulta (int dia,int mes,int ano,int hora,char* cpf){
    //Consulta* con;
    //con = (Consulta *)malloc(sizeof(Consulta));
    //FILE* gcon;
    //int enc;
    //int soma1;
    //int soma2;
    //int soma3;
    //int soma4;
    //int soma5;
    //int somatotal;
    //int dias;
    //int meses;
    //int anos;
    //int horas;
    //char buscacpf[14];
    //gcon = fopen("Consulta.dat","rb");
   // enc = 0;
    //while ((!enc) && (fread(con, sizeof(Consulta), 1, gcon))){
    //    if ((strcmp(con->cpf,buscacpf) == 0)){
    //        soma1 = 1;
    //    }
    //    if ((strcmp(con->dd,dias) == 0)){
    //        soma2 = 1;
    //    };
    //    if ((strcmp(con->mm,meses) == 0)){
    //        soma3 = 1;
     //   };
    //       soma4 = 1;
     //   };
    //    if ((strcmp(con->hora,horas) == 0)){
     //       soma5 = 1;
    //    };
    //    somatotal = soma1 + soma2 + soma3 + soma4 + soma5;
    //    if(somatotal == 5){
    //        enc = 1;
    //        printf("Consulta já cadastrada\n");
    //        return 0;
    //    }     
    //fclose(gcon);
    //}
    //free(con);
   // return 1;
//}