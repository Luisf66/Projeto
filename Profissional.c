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
<<<<<<< HEAD
    char nome[40];
    char cpf[15];
    char celular[14];
    char data[11];
    char email[50];
=======
    char nome;
    char cpf;
    char celular;
    char email;
    char data;
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                          Cadastrar profissional                         |\n");              
    printf("| Nome:                                                                   |\n");
<<<<<<< HEAD
    scanf("%[a-zA-Z ]", nome);    
=======
    scanf("%[0-9.-]", nome);    
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    getchar();
    printf("| CPF: (123.456.789-01)                                                   |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
<<<<<<< HEAD
    printf("| Celular: (00 91234-5678)                                                |\n");
    scanf("%[0-9- ]", celular);    
    getchar();
    printf("| E-mail:                                                                 |\n");
    scanf("%[a-zA-Z0-9@ ]", email);    
    getchar();
    printf("| Nascimento: (dd/mm/aa)                                                  |\n");
    scanf("%[0-9/]", data);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                        
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
    getchar();
}

void editarprofissional(void){
    char cpf[15];
=======
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
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                      Alterar dados do profissional                      |\n");              
<<<<<<< HEAD
    printf("| CPF: (123.456.789-00)                                                   |\n");
=======
    printf("| CPF:                                                                    |\n");
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
<<<<<<< HEAD
    printf("Tecle ENTER para continuar...\n");
    getchar();
}

void alterardadosprofissional(void){
    char nome[40];
    char cpf[15];
    char celular[14];
    char data[11];
    char email[50];
=======
}

void alterardadosprofissional(void){
    char nome;
    char cpf;
    char celular;
    char email;
    char data;
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                          Cadastrar profissional                         |\n");              
    printf("| Nome:                                                                   |\n");
<<<<<<< HEAD
    scanf("%[a-zA-Z ]", nome);    
    getchar();
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("| Celular: (00 91234-5678)                                                |\n");
    scanf("%[0-9.- ]", celular);    
    getchar();
    printf("| E-mail:                                                                 |\n");
    scanf("%[a-zA-Z0-9@ ]", email);    
    getchar();
    printf("| Nascimento: (dd/mm/aa)                                                  |\n");
    scanf("%[0-9/]", data);    
    getchar();
    printf("| 0-voltar                                                                |\n");                                        
    printf("|_________________________________________________________________________|\n");
    printf("Tecle ENTER para continuar...\n");
=======
    scanf("%[0-9.-]", nome);    
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
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
<<<<<<< HEAD
    char cpf[15];
=======
    char cpf;
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                            Remover profissional                         |\n");              
<<<<<<< HEAD
    printf("| CPF: (123.456.789-00)                                                   |\n");
=======
    printf("| CPF:                                                                    |\n");
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
<<<<<<< HEAD
    printf("Tecle ENTER para continuar...\n");
    getchar();
}

void buscarprofissional(void){
    char cpf[15];
=======
}

void buscarprofissional(void){
    char cpf;
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                          Buscar profissional                            |\n");              
<<<<<<< HEAD
    printf("| CPF: (123.456.789-00)                                                   |\n");
=======
    printf("| CPF:                                                                    |\n");
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
    scanf("%[0-9.-]", cpf);    
    getchar();
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
<<<<<<< HEAD
    printf("Tecle ENTER para continuar...\n");
    getchar();
}
=======
}
>>>>>>> 909f93efe6a6564b3ebab407c5d01e883d46c95e
