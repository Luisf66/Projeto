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
    //strcpy(, entrada);
    Paciente* cliente;
    cliente = (Paciente*)malloc(sizeof(Paciente));
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                           Cadastrar paciente                            |\n");              
    printf("| Nome:                                                                   |\n");
    fgets(cliente->nome,40,stdin); 
    strtok(cliente->nome, "\n");
    getchar();
    //
    printf("| CPF: (123.456.789-00)                                                   |\n");
    fgets(cliente->cpf,15,stdin); 
    strtok(cliente->cpf, "\n");   
    getchar();
    //
    printf("| Celular: (00 91234-5678)                                                |\n");
    fgets(cliente->celular,15,stdin);    
    strtok(cliente->celular, "\n");
    getchar();
    //
    printf("| E-mail:                                                                 |\n");
    fgets(cliente->email,50,stdin);    
    strtok(cliente->email, "\n");
    getchar();
    //
    printf("| Nascimento Dia:                                                         |\n");
    fgets(cliente->dd,4,stdin);    
    strtok(cliente->dd, "\n");
    getchar();
    //
    printf("| Nascimento Mês:                                                         |\n");
    fgets(cliente->mm,4,stdin);    
    strtok(cliente->mm, "\n");
    getchar();
    //
    printf("| Nascimento Ano:                                                         |\n");
    fgets(cliente->aaaa,6,stdin);    
    strtok(cliente->aaaa, "\n");
    getchar();
    //
    printf("| Tipo sanguíneo:                                                         |\n");
    fgets(cliente->tipo,4,stdin); 
    strtok(cliente->tipo, "\n");
    getchar();
    //
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

void gravarcliente (Paciente* cliente){
    FILE* gcli;
    gcli = fopen("Clientes.dat","ab");
    if (gcli == NULL){
        printf("Arquivo inexistente");
        printf("Programa encerrando...");
        exit(1);
    }
    fwrite(cliente, sizeof(Paciente),1,gcli);
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

void buscarcliente (void){
    FILE* gcli;
    Paciente *cliente;
    int enc;
    char buscacpf[15];
    gcli = fopen("Clientes.dat","rb");
    if (gcli == NULL){
        printf("Cliente não cadastrado");
        exit(1);
    };
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Buscar paciente                             |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    printf("| Digite o cpf:                                                           |\n");
    printf("|_________________________________________________________________________|\n");
    fgets(cliente->cpf,15,gcli); 
    strtok(cliente->cpf, "\n");   
    getchar();
    cliente = (Paciente *)malloc(sizeof(Paciente));
    enc = 0;
    while ((!enc) && (fread(cliente, sizeof(Paciente), 1, gcli))){
        if ((strcmp(cliente->cpf,buscacpf) == 0)){
            enc = 1;
        }
    }
    fclose(gcli);
    if (enc){
        mostrarclientes(cliente);
    }
    else{
        printf("O paciente %s não foi encontrado...\n", buscacpf);
    }
    free(cliente);
}

void deletarcliente(void){
    FILE* gcli;
    Paciente* cliente;
    int enc;
    char buscacpf[15];
    char resp;
    gcli = fopen("Clientes.dat", "r+b");
    if(gcli == NULL){
        printf("Paciente não cadastrado");
        exit(1);
    }
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Deletar paciente                            |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    printf("| Digite o cpf:                                                           |\n");
    printf("|_________________________________________________________________________|\n");
    fgets(cliente->cpf,15,gcli); 
    strtok(cliente->cpf, "\n");   
    getchar();
    cliente = (Paciente*)malloc(sizeof(Paciente));
    enc = 0;
    while ((!enc) && (fread(cliente, sizeof(Paciente), 1, gcli))){
        if ((strcmp(cliente->cpf,buscacpf) == 0)){
            enc = 1;
        }
    }
    if (enc == 1){
        mostrarclientes(cliente);
        getchar();
        printf("Deseja deletar este paciente? (S ou N):");
        scanf("%c", &resp);
        if (resp == 's' || resp == 'S') {
        cliente->status = '0';
        getchar();
        fseek(gcli, (-1)*sizeof(Paciente), SEEK_CUR);
        fwrite(cliente, sizeof(Paciente), 1, gcli);
        printf("\nPaciente deletado\n");
        }
    else {
        printf("\nOk, os dados não foram alterados\n");
    }
    }
    else {
    printf("O Paciente %s não foi encontrada...\n", buscacpf);
    }
    free(cliente);
    fclose(gcli);   
}
