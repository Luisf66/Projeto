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
    char dd[3];
    char mm[3];
    char aaaa[5];
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
    printf("| Dia:                                                                    |\n");
    scanf("%[0-9]", dd);    
    getchar();
    printf("| Mês:                                                                    |\n");
    scanf("%[0-9]", mm);    
    getchar();
    printf("| Ano:                                                                    |\n");
    scanf("%[0-9]", aaaa);    
    getchar();
    printf("| Horário desejado: (0~24)                                                |\n");
    scanf("%[0-9]", hora);    
    getchar();
    printf("| Médico desejado:                                                        |\n");
    scanf("%[a-zA-Z ]", medico);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
    return cpf;
    return dd,mm,aaaa;
}

void remarcar(void){
    char cpf[15];
    char dd[3];
    char mm[3];
    char aaaa[5];
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
    printf("| Dia:                                                                    |\n");
    scanf("%[0-9]", dd);    
    getchar();
    printf("| Mês:                                                                    |\n");
    scanf("%[0-9]", mm);    
    getchar();
    printf("| Ano:                                                                    |\n");
    scanf("%[0-9]", aaaa);    
    getchar();
    printf("| Horário desejado: (0~24)                                                |\n");
    scanf("%[0-9]", hora);    
    getchar();
    printf("| Médico desejado:                                                        |\n");
    scanf("%[a-zA-Z ]", medico);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
    return cpf;
    return dd,mm,aaaa;
}

void cancelar(void){
    char cpf[15];
    char dd[3];
    char mm[3];
    char aaaa[5];
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
    printf("| Dia:                                                                    |\n");
    scanf("%[0-9]", dd);    
    getchar();
    printf("| Mês:                                                                    |\n");
    scanf("%[0-9]", mm);    
    getchar();
    printf("| Ano:                                                                    |\n");
    scanf("%[0-9]", aaaa);    
    getchar();
    printf("| Horário cadastrado: (0~24)                                              |\n");
    scanf("%[0-9]", hora);    
    getchar();
    printf("| Médico cadastrado:                                                      |\n");
    scanf("%[a-zA-Z ]", medico);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
    return cpf;
    return dd,mm,aaaa;
}