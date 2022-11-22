// Profissional
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"Profissional.h"
#include "Estruturas.h"

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
    Profissional* funcionario;
    funcionario = (Profissional*)malloc(sizeof(Profissional));
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                          Cadastrar profissional                         |\n");              
    printf("| Nome:                                                                   |\n");
    fgets(funcionario->nome,40,stdin);    
    strtok(funcionario->nome, "\n");   
    //
    printf("| CPF: (123.456.789-00)                                                   |\n");
    fgets(funcionario->cpf,15,stdin); 
    strtok(funcionario->cpf, "\n");   
    getchar();
    //
    printf("| Celular: (00 91234-5678)                                                |\n");
    fgets(funcionario->celular,15,stdin);    
    strtok(funcionario->celular, "\n");   
    //
    printf("| E-mail:                                                                 |\n");
    fgets(funcionario->email,50,stdin);    
    strtok(funcionario->email, "\n");   
    //
    printf("| Nascimento Dia:                                                         |\n");
    fgets(funcionario->dd,4,stdin);    
    strtok(funcionario->dd, "\n");   
    //
    printf("| Nascimento Mês:                                                         |\n");
    fgets(funcionario->mm,4,stdin);    
    strtok(funcionario->mm, "\n");   
    //
    printf("| Nascimento Ano:                                                         |\n");
    fgets(funcionario->aaaa,6,stdin);   
    strtok(funcionario->aaaa, "\n");   
    funcionario->status = 1; 
    printf("| 0-voltar                                                                |\n");                                        
    printf("|_________________________________________________________________________|\n");
    printf("Tecle enter para cadastrar");
    getchar();
    mostrarfuncionario(funcionario);
    printf("Tecle enter para finalizar o cadastro");
    getchar();
    gravarfuncionario(funcionario);
    printf("Cadastro realizado");
    getchar();
    free(funcionario);
}

void gravarfuncionario (Profissional* funcionario){
    FILE* gfun;
    gfun = fopen("Funcionarios.dat","ab");
    if (gfun == NULL){
        printf("Arquivo inexistente");
        printf("Programa encerrando...");
        exit(1);
    }
    fwrite(funcionario, sizeof(Profissional),1,gfun);
    fclose(gfun);
}

void mostrarfuncionario (Profissional* funcionario){
    printf("---------------------------------------------------------------------------\n");
    printf("| Nome: %s\n", funcionario->nome);
    printf("| CPF: %s\n", funcionario->cpf);
    printf("| Celular: %s\n", funcionario->celular);
    printf("| E-mail: %s\n", funcionario->email);
    printf("| Dia: %s\n", funcionario->dd);
    printf("| Mês: %s\n",funcionario->mm);
    printf("| Ano: %s\n",funcionario->aaaa);
    printf("| Status: %i\n",funcionario->status);
    printf("|_________________________________________________________________________|\n");
}

void buscarfuncionario (void){
    Profissional* funcionario;
    funcionario = (Profissional *)malloc(sizeof(Profissional));
    FILE* gfun;
    int enc;
    char buscacpf[15];
    gfun = fopen("Funcionarios.dat","rb");
    if (gfun == NULL){
        printf("Funcionário não cadastrado");
        exit(1);
    }
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                          Buscar profissional                            |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    printf("| Digite o cpf:                                                           |\n");
    printf("|_________________________________________________________________________|\n");
    fgets(buscacpf,15,stdin); 
    strtok(buscacpf, "\n"); 
    getchar();   
    enc = 0;
    while ((!enc) && (fread(funcionario, sizeof(Profissional), 1, gfun))){
        if ((strcmp(funcionario->cpf,buscacpf) == 0)){
            enc = 1;
        }
    }
    fclose(gfun);
    if (enc == 1){
        printf("\n");
        printf("Funcionário encontrado com sucesso");
        printf("\n");
        mostrarfuncionario(funcionario);
    }
    else{
        printf("O funcionário %s não foi encontrado...\n", buscacpf);
    }
    getchar();
    free(funcionario);
}

void deletarfuncionario(void){
    Profissional* funcionario;
    funcionario = (Profissional*)malloc(sizeof(Profissional));
    FILE* gfun;
    int enc;
    char buscacpf[15];
    char resp;
    gfun = fopen("Funcionarios.dat", "r+b");
    if(gfun == NULL){
        printf("Profissional não cadastrado");
        exit(1);
    }
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                           Deletar Profissional                          |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    printf("| Digite o cpf:                                                           |\n");
    printf("|_________________________________________________________________________|\n");
    fgets(buscacpf,16,stdin); 
    strtok(buscacpf, "\n");   
    getchar();
    enc = 0;
    while ((!enc) && (fread(funcionario, sizeof(Profissional), 1, gfun))){
        if ((strcmp(funcionario->cpf,buscacpf) == 0)){
            enc = 1;
        }
    }
    if (enc == 1){
        printf("Funcionário a ser deletado:");
        printf("\n");
        mostrarfuncionario(funcionario);
        getchar();
        printf("Deseja deletar este Funcionário? (S ou N):");
        scanf("%c", &resp);
        if (resp == 's' || resp == 'S') {
        funcionario->status = 0;
        getchar();
        fseek(gfun, (-1)*sizeof(Profissional), SEEK_CUR);
        fwrite(funcionario, sizeof(Profissional), 1, gfun);
        printf("\nProfissional deletado\n");
        }
    else {
        printf("\nOk, os dados não foram alterados\n");
    }
    }
    else {
    printf("O Profissional %s não foi encontrada...\n", buscacpf);
    }
    getchar();
    free(funcionario);
    fclose(gfun);   
}

void editarfuncionario(void){
    FILE* gfun;
    Profissional* funcionario;
    funcionario = (Profissional*) malloc(sizeof(Profissional));
    int enc;
    char resp;
    char buscacpf[15];
    gfun = fopen("Funcionarios.dat", "r+b");
    if (gfun == NULL){
        printf("Profissional não cadastrado\n");
        printf("Programa encerrando...\n");
        exit(1);
    }
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                        Alterar dados do Profissional                    |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    fgets(buscacpf,15,gfun); 
    strtok(buscacpf, "\n");   
    getchar();
    enc = 0;
    while((!enc) && (fread(funcionario, sizeof(Profissional), 1, gfun))) {
    if ((strcmp(funcionario->cpf, buscacpf) == 0) && (funcionario->status == 1)) {
        enc = 1;
    }
  }
    if (enc){
        printf("Profissional a ser editado:");
        printf("\n");
        mostrarfuncionario(funcionario);
        getchar();
        printf("Deseja realmente editar este Profissional S ou N? ");
        scanf("%c", &resp);
        if (resp == 's' || resp == 'S'){
            printf("___________________________________________________________________________\n");
            printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
            printf("|                        Alterar dados do Profissional                    |\n");             
            printf("| Nome:                                                                   |\n");
            fgets(funcionario->nome,40,stdin); 
            strtok(funcionario->nome, "\n");
            //
            printf("| CPF: (123.456.789-00)                                                   |\n");
            fgets(funcionario->cpf,15,stdin); 
            strtok(funcionario->cpf, "\n");   
            getchar();
            //
            printf("| Celular: (00 91234-5678)                                                |\n");
            fgets(funcionario->celular,15,stdin);    
            strtok(funcionario->celular, "\n");
            //
            printf("| E-mail:                                                                 |\n");
            fgets(funcionario->email,50,stdin);    
            strtok(funcionario->email, "\n");;
            //
            printf("| Nascimento Dia:                                                         |\n");
            fgets(funcionario->dd,4,stdin);    
            strtok(funcionario->dd, "\n");;
            //
            printf("| Nascimento Mês:                                                         |\n");
            fgets(funcionario->mm,4,stdin);    
            strtok(funcionario->mm, "\n");;
            //
            printf("| Nascimento Ano:                                                         |\n");
            fgets(funcionario->aaaa,6,stdin);    
            strtok(funcionario->aaaa, "\n");;
            //
            funcionario->status = 1;   
            printf("| 0-voltar                                                                |\n");                                    
            printf("|_________________________________________________________________________|\n");
            printf("Tecle enter para cadastrar");
            fseek(gfun, (-1)*sizeof(Profissional), SEEK_CUR);
            fwrite(funcionario, sizeof(Profissional), 1, gfun);
            printf("Tecle enter para cadastrar os novos dados");
            getchar();
            printf("\n");
            mostrarfuncionario(funcionario);
            printf("Tecle enter para finalizar o cadastro");
            getchar();
            printf("\nProfissional editado com sucesso\n");
        } 
        else{
        printf("\nOk, os dados não foram alterados\n");
        }
        } 
        else{
            printf("O cpf %s não foi encontrado...\n", buscacpf);
        }
        getchar();
        free(funcionario);
        fclose(gfun);
}
