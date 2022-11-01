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
    Consulta *con;
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
    printf("| Ano:                                                                    |\n");
    scanf("%[0-9]", con->aaaa);    
    getchar();
    printf("| Horário desejado: (0~24)                                                |\n");
    scanf("%[0-9]", con->hora);    
    getchar();
    printf("| Médico desejado:                                                        |\n");
    scanf("%[a-zA-Z ]", con->medico);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
}

void remarcar(void){
    struct consulta consulta;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                Remarcar                                 |\n"); 
    printf("| CPF: (123.456.789-01)                                                   |\n");  
    scanf("%[0-9.-]", consulta.cpf);    
    getchar();       
    printf("| Dia:                                                                    |\n");
    scanf("%[0-9]", consulta.dd);    
    getchar();
    printf("| Mês:                                                                    |\n");
    scanf("%[0-9]", consulta.mm);    
    getchar();
    printf("| Ano:                                                                    |\n");
    scanf("%[0-9]", consulta.aaaa);    
    getchar();
    printf("| Horário desejado: (0~24)                                                |\n");
    scanf("%[0-9]", consulta.hora);    
    getchar();
    printf("| Médico desejado:                                                        |\n");
    scanf("%[a-zA-Z ]", consulta.medico);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
    return consulta.cpf;
    return consulta.dd;
    return consulta.mm;
    return consulta.aaaa;
}

void cancelar(void){
    struct consulta consulta;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                Cancelar                                 |\n"); 
    printf("| CPF: (123.456.789-01)                                                   |\n");  
    scanf("%[0-9.-]", consulta.cpf);    
    getchar();       
    printf("| Dia:                                                                    |\n");
    scanf("%[0-9]", consulta.dd);    
    getchar();
    printf("| Mês:                                                                    |\n");
    scanf("%[0-9]", consulta.mm);    
    getchar();
    printf("| Ano:                                                                    |\n");
    scanf("%[0-9]", consulta.aaaa);    
    getchar();
    printf("| Horário cadastrado: (0~24)                                              |\n");
    scanf("%[0-9]", consulta.hora);    
    getchar();
    printf("| Médico cadastrado:                                                      |\n");
    scanf("%[a-zA-Z ]", consulta.medico);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
    return consulta.cpf;
    return consulta.dd;
    return consulta.mm;
    return consulta.aaaa;
}
