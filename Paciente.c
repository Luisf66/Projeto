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
    char entrada[255];
    cliente = (Paciente*)malloc(sizeof(Paciente));
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                           Cadastrar paciente                            |\n");              
    printf("| Nome:                                                                   |\n");
    fgets(cliente->nome,40,stdin); 
    strtok(cliente->nome, "\n");
    //strcpy(, entrada);
    //getchar();
    //
    printf("Nome lido: |%s|\n", cliente->nome);
    printf("| CPF: (123.456.789-00)                                                   |\n");
    fgets(cliente->cpf,15,stdin);    
    getchar();
    strtok(cliente->cpf, '\n');
    printf("| Celular: (00 91234-5678)                                                |\n");
    fgets(cliente->celular,15,stdin);    
    getchar();
    strtok(cliente->celular, '\n');
    printf("| E-mail:                                                                 |\n");
    fgets(cliente->email,50,stdin);    
    getchar();
    strtok(cliente->email, '\n');
    printf("| Nascimento Dia:                                                         |\n");
    fgets(cliente->dd,4,stdin);    
    getchar();
    strtok(cliente->dd, '\n');
    printf("| Nascimento Mês:                                                         |\n");
    fgets(cliente->mm,4,stdin);    
    getchar();
    strtok(cliente->mm, '\n');
    printf("| Nascimento Ano:                                                         |\n");
    fgets(cliente->aaaa,6,stdin);    
    getchar();
    strtok(cliente->aaaa, '\n');
    printf("| Tipo sanguíneo:                                                         |\n");
    fgets(cliente->tipo,4,stdin); 
    strtok(cliente->tipo, '\n');
    cliente->status = '1';   
    printf("| 0-voltar                                                                |\n");                                    
    printf("|_________________________________________________________________________|\n");
    printf("Tecle enter para cadastrar");
    mostrarclientes(cliente);
    printf("Tecle enter para finalizar o cadastro");
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
    fgets(cliente->nome,40,stdin);    
    getchar();
    printf("| CPF: (123.456.789-00)                                                   |\n");
    fgets(cliente->cpf,15,stdin);    
    getchar();
    printf("| Celular: (00 91234-5678)                                                |\n");
    fgets(cliente->celular,15,stdin);    
    getchar();
    printf("| E-mail:                                                                 |\n");
    fgets(cliente->email,50,stdin);    
    getchar();
    printf("| Nascimento Dia:                                                         |\n");
    fgets(cliente->dd,4,stdin);    
    getchar();
    printf("| Nascimento Mês:                                                         |\n");
    fgets(cliente->mm,4,stdin);    
    getchar();
    printf("| Nascimento Ano:                                                         |\n");
    fgets(cliente->aaaa,6,stdin);    
    getchar();
    printf("| Tipo sanguíneo:                                                         |\n");
    fgets(cliente->tipo,5,stdin);
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
    printf("---------------------------------------------------------------------------\n");
    printf("| Nome: %s\n", cliente->nome);
    printf("| CPF: %s\n", cliente->cpf);
    printf("| Celular: %s\n", cliente->celular);
    printf("| E-mail: %s\n", cliente->email);
    printf("| Dia: %s\n", cliente->dd);
    printf("| Mês: %s\n",cliente->mm);
    printf("| Ano: %s\n",cliente->aaaa);
    printf("| Tipo sanguíneo: %s\n",cliente->tipo);
    printf("| Status: %s\n",cliente->status);
    printf("|_________________________________________________________________________|\n");
}
