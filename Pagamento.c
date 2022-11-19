// Pagamento 
#include <stdio.h>
#include <stdlib.h>
#include "Pagamento.h"
#include "Estruturas.h"

char pagamento(void){
    char oppagamento;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                Pagamento                                |\n");              
    printf("| 1-Pix                                                                   |\n");
    printf("| 2-Débito                                                                |\n");
    printf("| 3-Crédito                                                               |\n");
    printf("| 4-Boleto                                                                |\n");
    printf("| 5-Convênio                                                              |\n");
    printf("| 0-Sair                                                                  |\n");
    printf("| Escolha uma das opções:                                                 |\n");
    printf("|_________________________________________________________________________|\n");
    scanf("%c",&oppagamento);
    getchar();
    return oppagamento;
}

void pix(void){
    Pagamento* pix;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                   Pix                                   |\n");              
    printf("| CPF:                                                                    |\n");
    fgets(pix->cpf,15,stdin); 
    strtok(pix->cpf, "\n");   
    getchar();
    //
    printf("| CNPJ:                                                                   |\n");
    fgets(pix->cnpj,20,stdin);    
    strtok(pix->cnpj, "\n");   
    getchar();
    //
    printf("| Celular:                                                                |\n");
    fgets(pix->celular,15,stdin);    
    strtok(pix->celular, "\n");   
    getchar();
    //
    printf("| E-mail:                                                                 |\n");
    fgets(pix->email,40,stdin);
    strtok(pix->email, "\n");   
    getchar();
    //
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
    getchar();
}

void credito(void){
    char cpf[15];
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                 Crédito                                 |\n");              
    printf("|                                                                         |\n");
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");  
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
    getchar();
}

void debito(void){
    char cpf[15];
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                  Débito                                 |\n");   
    printf("|                                                                         |\n");           
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");  
    printf("| 0-voltar                                                                |\n");                                             
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
    getchar();
}

void convenio(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                Convênio                                 |\n");              
    printf("|                                                                         |\n");
    printf("|                                                                         |\n");
    printf("|                                                                         |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &op);
    getchar();
}

void boleto(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                  Boleto                                 |\n");              
    printf("|                                                                         |\n");
    printf("|                                                                         |\n");
    printf("|                                                                         |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &op);
    getchar();
}
