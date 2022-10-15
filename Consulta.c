// Consulta
#include <stdio.h>
#include <stdlib.h>
#include "Consulta.h"

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
    char cpf[15];
    char data[9];
    char hora[3];
    char medico[40];
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                 Agendar                                 |\n"); 
    printf("| CPF: (123.456.789-01)                                                   |\n");  
    scanf("%[0-9.-]", cpf);    
    getchar();       
    printf("| Data desejada: (dd/mm/aa)                                               |\n");
    scanf("%[0-9/]", data);    
    getchar();
    printf("| Horário desejado: (7~17)                                                |\n");
    scanf("%[0-9]", hora);    
    getchar();
    printf("| Médico desejado:                                                        |\n");
    scanf("%[a-zA-Z ]", medico);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
}

void remarcar(void){
    char cpf[15];
    char data[9];
    char hora[3];
    char medico[40];
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                Remarcar                                 |\n"); 
    printf("| CPF: (123.456.789-01)                                                   |\n");  
    scanf("%[0-9.-]", cpf);    
    getchar();       
    printf("| Nova data desejada: (dd/mm/aa)                                          |\n");
    scanf("%[0-9/]", data);    
    getchar();
    printf("| Novo horário desejado: (7~17)                                           |\n");
    scanf("%[0-9]", hora);    
    getchar();
    printf("| Médico desejado:                                                        |\n");
    scanf("%[a-zA-Z ]", medico);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
}

void cancelar(void){
    char cpf[15];
    char data[9];
    char hora[3];
    char medico[40];
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                Cancelar                                 |\n"); 
    printf("| CPF: (123.456.789-01)                                                   |\n");  
    scanf("%[0-9.-]", cpf);    
    getchar();       
    printf("| Data cadastrada: (dd/mm/aa)                                             |\n");
    scanf("%[0-9/]", data);    
    getchar();
    printf("| Horário cadastrado: (7~17)                                              |\n");
    scanf("%[0-9]", hora);    
    getchar();
    printf("| Médico desejado:                                                        |\n");
    scanf("%[a-zA-Z ]", medico);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
}
