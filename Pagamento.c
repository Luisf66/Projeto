// Pagamento 
#include <stdio.h>
#include <stdlib.h>
#include "Pagamento.h"

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
<<<<<<< HEAD
    char cpf[15];
    char cnpj[19];
    char celular[14];
    char email[40];
=======
    char cpf;
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                   Pix                                   |\n");              
    printf("| CPF:                                                                    |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("| CNPJ:                                                                   |\n");
    scanf("%[0-9.-]", cnpj);    
    getchar();
    printf("| Celular:                                                                |\n");
    scanf("%[0-9.-]", celular);    
    getchar();
    printf("| E-mail:                                                                 |\n");
<<<<<<< HEAD
    scanf("%[0-9.-]", email);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
    getchar();
}

void credito(void){
    char cpf[15];
=======
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
}

void credito(void){
    char cpf;
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                 Crédito                                 |\n");              
    printf("|                                                                         |\n");
    printf("| CPF:                                                                    |\n");
    scanf("%[0-9.-]", cpf);    
<<<<<<< HEAD
    getchar();
    printf("|                                                                         |\n");  
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
=======
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    getchar();
    printf("|                                                                         |\n");  
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
}

void debito(void){
<<<<<<< HEAD
    char cpf[15];
=======
    char cpf;
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                  Débito                                 |\n");   
    printf("|                                                                         |\n");           
    printf("| CPF:                                                                    |\n");
    scanf("%[0-9.-]", cpf);    
<<<<<<< HEAD
    getchar();
    printf("|                                                                         |\n");  
    printf("| 0-voltar                                                                |\n");                                             
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
=======
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    getchar();
    printf("|                                                                         |\n");  
    printf("| 0-voltar                                                                |\n");                                             
    printf("|_________________________________________________________________________|\n");
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
