// Cliente
#include <stdio.h>
#include <stdlib.h>
#include "Paciente.h"
#include "Estruturas.h"

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


void cadastrarpaciente(void){
    struct paciente cliente;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                           Cadastrar paciente                            |\n");              
    printf("| Nome:                                                                   |\n");
    scanf("%[A-Za-z ]", cliente.nome);
    getchar();
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", cliente.cpf);
    getchar();
    printf("| Celular: (00 91234-5678)                                                |\n");
    scanf("%[0-9- ]", cliente.celular);
    getchar();
    printf("| E-mail:                                                                 |\n");
    scanf("%[A-Za-z0-9,@.]", cliente.email);
    getchar();
    printf("| Nascimento: (dd/mm/aaaa)                                                |\n");
    scanf("%[0-9/]", cliente.data);
    getchar();
    printf("| Tipo sanguíneo:                                                         |\n");
    scanf("%[A-B+-]", cliente.tipo);
    getchar();
    printf("| 0-voltar                                                                |\n");                                    
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
    getchar();
}

void editarpaciente(void){
    char cpf[15];
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                        Alterar dados do paciente                        |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
    getchar();
}

void alterardadospaciente(void){
    struct paciente cliente;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                        Alterar dados do paciente                        |\n");              
    printf("| Nome:                                                                   |\n");
    scanf("%[A-Za-z ]", cliente.nome);
    getchar();
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", cliente.cpf);
    getchar();
    printf("| Celular: (00 91234-5678)                                                |\n");
    scanf("%[0-9 -]", cliente.celular);
    getchar();
    printf("| E-mail:                                                                 |\n");
    scanf("%[A-Za-z0-9,@.]", cliente.email);
    getchar();
    printf("| Nascimento: (dd/mm/aaaa)                                                |\n");
    scanf("%[0-9/]", cliente.data);
    getchar();
    printf("| Tipo sanguíneo:                                                         |\n");
    scanf("%[A-B+-]", cliente.tipo);
    getchar();
    printf("| 0-voltar                                                                |\n");                                    
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
    getchar();
}


void deletarpaciente(void){
    char cpf[15];
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Remover paciente                            |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
    getchar();
}

void buscarpaciente(void){
    char cpf[15];
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Buscar paciente                             |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
    getchar();
}
