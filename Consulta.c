// Consulta
#include <stdio.h>
#include <stdlib.h>
#include "Consulta.h"
#include "Estruturas.h"

char agendamento(void){
    char opagendamento;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                               Agendamento                               |\n");              
    printf("| 1-Agendar                                                               |\n");
    printf("| 2-Remarcar                                                              |\n");
    printf("| 3-Cancelar                                                              |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c",&opagendamento);
    getchar();
    return opagendamento;
}


void agendar(void){
    Consulta* con;
    con = (Consulta*)malloc(sizeof(Consulta));
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                 Agendar                                 |\n"); 
    printf("| CPF: (123.456.789-01)                                                   |\n");  
    scanf("%[0-9.-]", con->cpf);    
    getchar();       
    printf("| Dia:                                                                    |\n");
    scanf("%[0-9]", con->dd);    
    getchar();
    printf("| Mês:                                                                    |\n");
    scanf("%[0-9]", con->mm);    
    getchar();
    printf("| Horário desejado: (0~24)                                                |\n");
    scanf("%[0-9]", con->hora);    
    getchar();
    printf("| Médico desejado:                                                        |\n");
    scanf("%[a-zA-Z ]", con->medico);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
    mostrarconsulta(con);
    getchar();
    gravarconsulta(con);
    getchar();
    free(con);
}

void remarcar(void){
    Consulta *con;
    con = (Consulta*)malloc(sizeof(Consulta));
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                Remarcar                                 |\n"); 
    printf("| CPF: (123.456.789-01)                                                   |\n");  
    scanf("%[0-9.-]", con->cpf);    
    getchar();       
    printf("| Dia:                                                                    |\n");
    scanf("%[0-9]", con->dd);    
    getchar();
    printf("| Mês:                                                                    |\n");
    scanf("%[0-9]", con->mm);    
    getchar();
    printf("| Horário desejado: (0~24)                                                |\n");
    scanf("%[0-9]", con->hora);    
    getchar();
    printf("| Médico desejado:                                                        |\n");
    scanf("%[a-zA-Z ]", con->medico);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
    mostrarconsulta(con);
    getchar();
    gravarconsulta(con);
    free(con);
}

void cancelar(void){
    Consulta* con;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                Cancelar                                 |\n"); 
    printf("| CPF: (123.456.789-01)                                                   |\n");  
    scanf("%[0-9.-]", con->cpf);    
    getchar();       
    printf("| Dia:                                                                    |\n");
    scanf("%[0-9]", con->dd);    
    getchar();
    printf("| Mês:                                                                    |\n");
    scanf("%[0-9]", con->mm);    
    getchar();    
    printf("| Horário cadastrado: (0~24)                                              |\n");
    scanf("%[0-9]", con->hora);    
    getchar();
    printf("| Médico cadastrado:                                                      |\n");
    scanf("%[a-zA-Z ]", con->medico);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
}

void gravarconsulta (Consulta* con){
    FILE* gc;
    gc = fopen("Consulta.dat","ab");
    if (gc == NULL){
        printf("Impossível abrir o arquivo");
        printf("Programa encerrando...");
        exit(1);
    }
    fwrite(con, sizeof(Consulta),1,gc);
    fclose(gc);
}

void mostrarconsulta (Consulta* con){
    printf("| CPF: %s\n", con->cpf);
    printf("| Dia: %s\n", con->dd);
    printf("| Mês: %s\n",con->mm);
    printf("| Horário cadastrado: %s\n",con->hora);
    printf("| Médico cadastrado: %s\n",con->medico);
    printf("|_________________________________________________________________________|\n");
}

void buscarconsulta (Consulta* con){
    FILE* bc;
    Consulta* con;
    int enc;
    char buscacpf[15];
    char diacon[3];
    bc = fopen("Consulta.dat","rb");
    enc = 0;
    if (bc == NULL){
        printf("Consulta não cadastrada");
        exit(1);
    };
    printf("Digite o cpf e o dia da consulta");
    scanf("%[0-9.-]", buscacpf);
    getchar();
    printf("| Dia:                                                                    |\n");
    scanf("%[0-9]", diacon);
    getchar();
    con = (Consulta *)malloc(sizeof(Consulta));
    while ((!enc) && (fread(con, sizeof(Consulta), 1, bc))){
        if ((strcmp(con->cpf) == 0) && (con->status == '1')){
            enc = 1;
        }
    }
    fclose(bc);
    if (enc){
        mostrarconsulta(con);
    }
    else{
        printf("A consulta %s não foi encontrado...\n", buscacpf);
    }
    free(con);
}

