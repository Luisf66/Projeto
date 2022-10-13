// Profissional
#include <stdio.h>
#include <stdlib.h>
#include"Profissional.h"

char profissionais(void){
    char opprofissional;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                       Informações do profissional                       |\n");              
    printf("| 1-Cadastrar                                                             |\n");
    printf("| 2-Alterar dados do profissional                                         |\n");
    printf("| 3-Excluir profissional                                                  |\n");
    printf("| 4-Buscar profissional                                                   |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");
    printf("|_________________________________________________________________________|\n");
    scanf("%c",&opprofissional);
    getchar();
    return opprofissional;
}


void cadastrarprofissional(void){
    char nome;
    char cpf;
    char celular;
    char email;
    char data;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                          Cadastrar profissional                         |\n");              
    printf("| Nome:                                                                   |\n");
    scanf("%[0-9.-]", nome);    
    getchar();
    printf("| CPF: (123.456.789-01)                                                   |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("| Celular: (11 91234-5678)                                                |\n");
    scanf("%[0-9.-]", celular);    
    getchar();
    printf("| E-mail:                                                                 |\n");
    scanf("%[0-9.-]", email);    
    getchar();
    printf("| Nascimento: (dd/mm/aa)                                                  |\n");
    scanf("%[0-9.-]", data);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                        
    printf("|_________________________________________________________________________|\n");
}

void editarprofissional(void){
    char cpf;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                      Alterar dados do profissional                      |\n");              
    printf("| CPF:                                                                    |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
}

void alterardadosprofissional(void){
    char nome;
    char cpf;
    char celular;
    char email;
    char data;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                          Cadastrar profissional                         |\n");              
    printf("| Nome:                                                                   |\n");
    scanf("%[0-9.-]", nome);    
    getchar();
    printf("| CPF: (123.456.789-01)                                                   |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("| Celular: (11 91234-5678)                                                |\n");
    scanf("%[0-9.-]", celular);    
    getchar();
    printf("| E-mail:                                                                 |\n");
    scanf("%[0-9.-]", email);    
    getchar();
    printf("| Nascimento: (dd/mm/aa)                                                  |\n");
    scanf("%[0-9.-]", data);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                        
    printf("|_________________________________________________________________________|\n");
}

void deletarprofissional(void){
    char cpf;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                            Remover profissional                         |\n");              
    printf("| CPF:                                                                    |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
}

void buscarprofissional(void){
    char cpf;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                          Buscar profissional                            |\n");              
    printf("| CPF:                                                                    |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
}
