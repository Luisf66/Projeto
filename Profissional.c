// Profissional
#include <stdio.h>
#include <stdlib.h>
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
    getchar();
    printf("| CPF: (123.456.789-01)                                                   |\n");
    fgets(funcionario->cpf,15,stdin);    
    getchar();
    printf("| Celular: (00 91234-5678)                                                |\n");
    fgets(funcionario->celular,15,stdin);    
    getchar();
    printf("| E-mail:                                                                 |\n");
    fgets(funcionario->email,50,stdin);    
    getchar();
    printf("| Nascimento Dia:                                                         |\n");
    fgets(funcionario->dd,4,stdin);    
    getchar();
    printf("| Nascimento Mês:                                                         |\n");
    fgets(funcionario->mm,4,stdin);    
    getchar();
    printf("| Nascimento Ano:                                                         |\n");
    fgets(funcionario->aaaa,6,stdin);    
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

void editarprofissional(void){
    char cpf[15];
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                      Alterar dados do profissional                      |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
    getchar();
}

void alterardadosprofissional(void){
    Profissional* funcionario;
    funcionario = (Profissional*)malloc(sizeof(Profissional));
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                           Alterar profissional                          |\n");              
    printf("| Nome:                                                                   |\n");
    fgets(funcionario->nome,40,stdin);    
    getchar();
    printf("| CPF: (123.456.789-01)                                                   |\n");
    fgets(funcionario->cpf,15,stdin);    
    getchar();
    printf("| Celular: (00 91234-5678)                                                |\n");
    fgets(funcionario->celular,15,stdin);    
    getchar();
    printf("| E-mail:                                                                 |\n");
    fgets(funcionario->email,50,stdin);    
    getchar();
    printf("| Nascimento Dia:                                                         |\n");
    fgets(funcionario->dd,4,stdin);    
    getchar();
    printf("| Nascimento Mês:                                                         |\n");
    fgets(funcionario->mm,4,stdin);    
    getchar();
    printf("| Nascimento Ano:                                                         |\n");
    fgets(funcionario->aaaa,6,stdin);    
    printf("| 0-voltar                                                                |\n");                                        
    printf("|_________________________________________________________________________|\n");
    printf("Tecle enter para cadastrar os novos dados");
    getchar();
    gravarfuncionario(funcionario);
    printf("Cadastro realizado");
    getchar();
    free(funcionario);
}

void deletarprofissional(void){
    char cpf[15];
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                            Remover profissional                         |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
    getchar();
}

void buscarprofissional(void){
    char cpf[15];
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                          Buscar profissional                            |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
    getchar();
}

void gravarfuncionario (Profissional* funcionario){
    FILE* gfun;
    gfun = fopen("Funcionario.dat","ab");
    if (gfun == NULL){
        printf("Impossível abrir o arquivo");
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
    printf("|_________________________________________________________________________|\n");
}
