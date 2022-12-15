// Cliente
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Paciente.h"
#include "Estruturas.h"
#include "Validacoes.h"

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
    int tamanho;
    char confirma;
    int dia;
    int mes;
    int ano;
    int validacpf;
    int validacao;
    do{
    
        system("clear||cls");
        printf("\n");
        printf("___________________________________________________________________________\n");
        printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
        printf("|                           Cadastrar paciente                            |\n");
        //do{              
        printf("| Nome:                                                                   |\n");
        fgets(cliente->nome,40,stdin); 
        tamanho = strlen(cliente->nome);
        cliente->nome[tamanho-1] = '\0';
        //tamanho = Vnome(cliente->nome);
       //}while (tamanho == 0);
        //
        do{
            printf("| CPF: (Somente números)                                                   |\n");
            fgets(cliente->cpf,15,stdin); 
            strtok(cliente->cpf, "\n");   
            validacpf = validacao_cpf(cliente->cpf);
        }while(validacpf != 1);
        
        //
        printf("| Celular: (00 91234-5678)                                                |\n");
        fgets(cliente->celular,15,stdin);    
        strtok(cliente->celular, "\n");
        //
        printf("| E-mail:                                                                 |\n");
        fgets(cliente->email,50,stdin);    
        strtok(cliente->email, "\n");
        //
        do{
            printf("| Nascimento Dia:                                                         |\n");
            fgets(cliente->dd,4,stdin);    
            strtok(cliente->dd, "\n");
            dia = convertedia(cliente->dd);
            //
            printf("| Nascimento Mês:                                                         |\n");
            fgets(cliente->mm,4,stdin);    
            strtok(cliente->mm, "\n");
            mes = convertemes(cliente->mm);
            //
            printf("| Nascimento Ano:                                                         |\n");
            fgets(cliente->aaaa,6,stdin);    
            strtok(cliente->aaaa, "\n");
            ano = converteano(cliente->aaaa); 
            validacao = validacao_data(dia,mes,ano);
        }while (validacao != 1);
        //
        printf("| Tipo sanguíneo:                                                         |\n");
        fgets(cliente->tipo,4,stdin); 
        strtok(cliente->tipo, "\n");
        //
        cliente->status = 1;   
        printf("| 0-voltar                                                                |\n");                                    
        printf("|_________________________________________________________________________|\n");
        printf("\nTecle enter para cadastrar\n");
        mostrarclientes(cliente);
        printf("\nDados inseridos corretamente? S ou N\n");
        scanf("%c", &confirma);
        getchar();
    }while (confirma != 'S');
    printf("\nTecle enter para finalizar o cadastro\n");
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
        getchar();;
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
    printf("| Status: %i\n",cliente->status);
    printf("|_________________________________________________________________________|\n");
}

void buscarcliente (void){
    Paciente* cliente;
    cliente = (Paciente *)malloc(sizeof(Paciente));
    FILE* gcli;
    int enc;
    char buscacpf[15];
    gcli = fopen("Clientes.dat","rb");
    if (gcli == NULL){
        printf("O arquivo não existe");
        getchar();
    }
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Buscar paciente                             |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    printf("| Digite o cpf:                                                           |\n");
    printf("|_________________________________________________________________________|\n");
    fgets(buscacpf,15,stdin); 
    strtok(buscacpf, "\n"); 
    getchar();  
    enc = 0;
    while ((!enc) && (fread(cliente, sizeof(Paciente), 1, gcli))){
      if ((strcmp(cliente->cpf,buscacpf) == 0)){
            enc = 1;
        }
    }
    fclose(gcli);
    if (enc == 1){
        printf("\nPaciente encontrado com sucesso\n");
        mostrarclientes(cliente);
    }
    else{
        printf("\nO paciente %s não foi encontrado...\n", buscacpf);
    }
    getchar();
    free(cliente);
}

void deletarcliente(void){
    Paciente* cliente;
    cliente = (Paciente*)malloc(sizeof(Paciente));
    FILE* gcli;
    int enc;
    char buscacpf[15];
    char resp;
    gcli = fopen("Clientes.dat", "r+b");
    if(gcli == NULL){
        printf("O arquivo não existe");
        getchar();
    }
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Deletar paciente                            |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    printf("| Digite o cpf:                                                           |\n");
    printf("|_________________________________________________________________________|\n");
    fgets(buscacpf,15,stdin); 
    strtok(buscacpf, "\n");   
    getchar();
    enc = 0;
    while ((!enc) && (fread(cliente, sizeof(Paciente), 1, gcli))){
        if ((strcmp(cliente->cpf,buscacpf) == 0)){
            enc = 1;
        }
    }
    if (enc == 1){
        printf("Paciente a ser deletado:\n");
        mostrarclientes(cliente);
        getchar();
        printf("Deseja deletar este paciente? (S ou N):");
        scanf("%c", &resp);
        if (resp == 's' || resp == 'S') {
        cliente->status = 0;
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
    getchar();
    free(cliente);
    fclose(gcli);   
}

void editarcliente(void){
    Paciente* cliente;
    cliente = (Paciente*) malloc(sizeof(Paciente));
    FILE* gcli;
    int enc;
    char confirma;
    char resp;
    char buscacpf[15];
    gcli = fopen("Clientes.dat", "r+b");
     if (gcli == NULL){
        printf("O arquivo não existe");
        getchar();
    }
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                        Alterar dados do paciente                        |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    fgets(buscacpf,15,stdin); 
    strtok(buscacpf, "\n");   
    getchar();
    enc = 0;
    while((!enc) && (fread(cliente, sizeof(Paciente), 1, gcli))) {
        if ((strcmp(cliente->cpf, buscacpf) == 0) && (cliente->status == 1)) {
            enc = 1;
        }
    }
    if (enc){
        printf("Paciente a ser editado:\n");
        mostrarclientes(cliente);
        getchar();
        printf("Deseja realmente editar o paciente listado?\n");
        printf("S ou N?");
        scanf("%c", &resp);
        getchar();
        if (resp == 's' || resp == 'S'){
            do{
                system("clear||cls");
                printf("\n");
                printf("___________________________________________________________________________\n");
                printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
                printf("|                        Alterar dados do paciente                        |\n");              
                printf("| Nome:                                                                   |\n");
                fgets(cliente->nome,40,stdin); 
                strtok(cliente->nome, "\n");

                printf("| CPF: (123.456.789-00)                                                   |\n");
                fgets(cliente->cpf,15,stdin); 
                strtok(cliente->cpf, "\n");  

                printf("| Celular: (00 91234-5678)                                                |\n");
                fgets(cliente->celular,15,stdin);    
                strtok(cliente->celular, "\n");

                printf("| E-mail:                                                                 |\n");
                fgets(cliente->email,50,stdin);    
                strtok(cliente->email, "\n");

                printf("| Nascimento Dia:                                                         |\n");
                fgets(cliente->dd,4,stdin);    
                strtok(cliente->dd, "\n");

                printf("| Nascimento Mês:                                                         |\n");
                fgets(cliente->mm,4,stdin);    
                strtok(cliente->mm, "\n");

                printf("| Nascimento Ano:                                                         |\n");
                fgets(cliente->aaaa,6,stdin);    
                strtok(cliente->aaaa, "\n");

                printf("| Tipo sanguíneo:                                                         |\n");
                fgets(cliente->tipo,4,stdin); 
                strtok(cliente->tipo, "\n");

                cliente->status = 1;   
                printf("| 0-voltar                                                                |\n");                                    
                printf("|_________________________________________________________________________|\n");
                fseek(gcli, (-1)*sizeof(Paciente), SEEK_CUR);
                fwrite(cliente, sizeof(Paciente), 1, gcli);
                printf("\nDados inseridos corretamente? S ou N\n");
                scanf("%c", &confirma);
                getchar();
            }while (confirma != 'S');
            printf("Tecle enter para cadastrar os novos dados\n");
            getchar();
            mostrarclientes(cliente);
            printf("Tecle enter para finalizar o cadastro");
            getchar();
            printf("\nPaciente editado com sucesso\n");
        } 
        else{
            printf("\nOk, os dados não foram alterados\n");
        }
    } 
    else{
        printf("O cpf %s não foi encontrado...\n", buscacpf);
    }
    getchar();
    free(cliente);
    fclose(gcli);
}
