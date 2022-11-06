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
    Paciente* cliente;
    cliente = (Paciente*)malloc(sizeof(Paciente));
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                           Cadastrar paciente                            |\n");              
    printf("| Nome:                                                                   |\n");
    scanf("%[A-Za-z ]", cliente->nome);
    getchar();
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", cliente->cpf);
    getchar();
    printf("| Celular: (00 91234-5678)                                                |\n");
    scanf("%[0-9- ]", cliente->celular);
    getchar();
    printf("| E-mail:                                                                 |\n");
    scanf("%[A-Za-z0-9,@.]", cliente->email);
    getchar();
    printf("| Nascimento Dia:                                                         |\n");
    scanf("%[0-9]", cliente->dd);    
    getchar();
    printf("| Nascimento Mês:                                                         |\n");
    scanf("%[0-9]", cliente->mm);    
    getchar();
    printf("| Nascimento Ano:                                                         |\n");
    scanf("%[0-9]", cliente->aaaa);    
    getchar();
    printf("| Tipo sanguíneo:                                                         |\n");
    scanf("%[A-B+-]", cliente->tipo);
    getchar();
    printf("| 0-voltar                                                                |\n");                                    
    printf("|_________________________________________________________________________|\n");
    printf("Tecle enter para cadastrar");
    getchar();
    mostrarclientes(cliente);
    printf("Tecle enter para cadastrar");
    getchar();
    gravarcliente(cliente);
    printf("Cadastro realizado");
    getchar();
    free(cliente);
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
    Paciente* cliente;
    cliente = (Paciente*)malloc(sizeof(Paciente));
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                        Alterar dados do paciente                        |\n");              
    printf("| Nome:                                                                   |\n");
    scanf("%[A-Za-z ]", cliente->nome);
    getchar();
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", cliente->cpf);
    getchar();
    printf("| Celular: (00 91234-5678)                                                |\n");
    scanf("%[0-9 -]", cliente->celular);
    getchar();
    printf("| E-mail:                                                                 |\n");
    scanf("%[A-Za-z0-9,@.]", cliente->email);
    getchar();
    printf("| Nascimento Dia:                                                         |\n");
    scanf("%[0-9]", cliente->dd);    
    getchar();
    printf("| Nascimento Mês:                                                         |\n");
    scanf("%[0-9]", cliente->mm);    
    getchar();
    printf("| Nascimento Ano:                                                         |\n");
    scanf("%[0-9]", cliente->aaaa);    
    getchar();
    printf("| Tipo sanguíneo:                                                         |\n");
    scanf("%[A-B+-]", cliente->tipo);
    getchar();
    printf("| 0-voltar                                                                |\n");                                    
    printf("|_________________________________________________________________________|\n");
    printf("Tecle enter para cadastrar os novos dados");
    getchar();
    gravarcliente(cliente);
    printf("Cadastro realizado");
    getchar();
    free(cliente);
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

void gravarcliente (Paciente* cliente){
    FILE* gcli;
    gcli = fopen("Clientes.dat","ab");
    if (gcli == NULL){
        printf("Impossível abrir o arquivo");
        printf("Programa encerrando...");
        exit(1);
    }
    fwrite(cliente, sizeof(Consulta),1,gcli);
    fclose(gcli);
}

void mostrarclientes (Paciente* cliente){
    printf("| Nome: %s\n", cliente->nome);
    printf("| CPF: %s\n", cliente->cpf);
    printf("| Celular: %s\n", cliente->celular);
    printf("| E-mail: %s\n", cliente->email);
    printf("| Dia: %s\n", cliente->dd);
    printf("| Mês: %s\n",cliente->mm);
    printf("| Ano: %s\n",cliente->aaaa);
    printf("| Tipo sanguíneo: %s\n",cliente->tipo);
    printf("|_________________________________________________________________________|\n");
}
