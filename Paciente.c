// Cliente
#include <stdio.h>
#include <stdlib.h>
#include "Paciente.h"

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
    getchar();
<<<<<<< HEAD
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", CPF);
    getchar();
    printf("| Celular: (00 91234-5678)                                                |\n");
    scanf("%[0-9- ]", celular);
=======
    printf("| CPF: (999.999.999-99)                                                   |\n");
    scanf("%[0-9.-]", CPF);
    getchar();
    printf("| Celular: (11 91234-5678)                                                |\n");
    scanf("%[0-9 -]", celular);
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    getchar();
    printf("| E-mail:                                                                 |\n");
    scanf("%[A-Za-z0-9,@.]", email);
    getchar();
    printf("| Nascimento: (dd/mm/aaaa)                                                |\n");
    scanf("%[0-9/]", data);
    getchar();
    printf("| Tipo sanguíneo:                                                         |\n");
    scanf("%[A-B+-]", tipo);
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
    printf("| CPF:                                                                    |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
<<<<<<< HEAD
    printf("Tecle ENTER para continuar...\n");
    getchar();
=======
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
}

void alterardadospaciente(void){
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
    printf("|                        Alterar dados do paciente                        |\n");              
    printf("| Nome:                                                                   |\n");
    scanf("%[A-Za-z ]", nome);
    getchar();
<<<<<<< HEAD
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", CPF);
    getchar();
    printf("| Celular: (00 91234-5678)                                                |\n");
=======
    printf("| CPF: (999.999.999-99)                                                   |\n");
    scanf("%[0-9.-]", CPF);
    getchar();
    printf("| Celular: (11 91234-5678)                                                |\n");
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    scanf("%[0-9 -]", celular);
    getchar();
    printf("| E-mail:                                                                 |\n");
    scanf("%[A-Za-z0-9,@.]", email);
    getchar();
    printf("| Nascimento: (dd/mm/aaaa)                                                |\n");
    scanf("%[0-9/]", data);
    getchar();
    printf("| Tipo sanguíneo:                                                         |\n");
    scanf("%[A-B+-]", tipo);
    getchar();
    printf("| 0-voltar                                                                |\n");                                    
<<<<<<< HEAD
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
    getchar();
=======
    printf("|_________________________________________________________________________|\n");;
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
}


void deletarpaciente(void){
    char cpf[15];
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Remover paciente                            |\n");              
    printf("| CPF:                                                                    |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
<<<<<<< HEAD
    printf("Tecle ENTER para continuar...\n");
    getchar();
=======
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
}

void buscarpaciente(void){
    char cpf[15];
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Buscar paciente                             |\n");              
    printf("| CPF:                                                                    |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
<<<<<<< HEAD
    printf("Tecle ENTER para continuar...\n");
    getchar();
=======
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
}

