// Cliente
#include <stdio.h>
#include <stdlib.h>

char paciente(void){
    char oppaciente;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                         Informações do paciente                         |\n");              
    printf("| 1-Cadastrar paciente                                                    |\n");
    printf("| 2-Alterar dados do paciente                                             |\n");
    printf("| 3-Remover paciente                                                      |\n");
    printf("| 4-Buscar paciente                                                       |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");
    printf("|_________________________________________________________________________|\n");
    scanf("%c",&oppaciente);
    getchar();
    return oppaciente;
}


char cadastrarpaciente(void){
    char opcadastropaciente;
    char nome[40];
    char CPF[15];
    char celular[14];
    char data[11];
    char email[50];
    char tipo[4];
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                           Cadastrar paciente                            |\n");              
    printf("| Nome:                                                                   |\n");
    scanf("%[A-Za-z ]", nome);
    printf("| CPF: (123.456.789-01)                                                   |\n");
    scanf("%[0-9.-]", CPF);
    printf("| Celular: (11 91234-5678)                                                |\n");
    scanf("%[0- 9-]", celular);
    printf("| E-mail:                                                                 |\n");
    scanf("%[A-Za-z0-9,@.]", email);
    printf("| Nascimento: (dd/mm/aaaa)                                                |\n");
    scanf("%[0-9/]", data);
    printf("| Tipo sanguíneo:                                                         |\n");
    scanf("%[A-B+-]", tipo);
    printf("| 0-voltar                                                                |\n");                                    
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &opcadastropaciente);
    getchar();
    return opcadastropaciente;
}

void editarpaciente(void){
    char editarcpfpa;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                        Alterar dados do paciente                        |\n");              
    printf("| CPF:                                                                    |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &editarcpfpa);
    getchar();
}

void deletarpaciente(void){
    char deletarcpfpa;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Remover paciente                            |\n");              
    printf("| CPF:                                                                    |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &deletarcpfpa);
    getchar();
}

void buscarpaciente(void){
    char buscarcpfpa;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Buscar paciente                             |\n");              
    printf("| CPF:                                                                    |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &buscarcpfpa);
    getchar();
}

