// gcc -c -Wall SIG-CLINIC.c
// gcc SIG-CLINIC.c -o SIG-CLINIC
// Validações desativadas
//___________________________________________________________________
//|       UFRN- Universidade Federal do Rio Grande do Norte         |
//|             Centro de Ensino Superior do Seridó                 |
//|         DCT- Departamento de computação e tecnologia            |
//|              Disciplina DCT1106 -- Programação                  |
//|     Projeto -- Sistema de Agendamento para Clínicas Médicas     |
//|            Developed by @Luisf66 - since Ago , 2022             |
//|-----------------------------------------------------------------|
//|                            Semana 11                            |
//|_________________________________________________________________|

#include <stdio.h>
#include <stdlib.h>
#include "Consulta.h"
#include "Paciente.h"
#include "Profissional.h"
#include "Relatorio.h"
#include "Servicos.h"

//  Assinatura das funções SIG
char menu(void);
void info(void);
void equipe(void);
char servicos(void);
void horario(void);
char acesso_online(void);
char remover(void);


//  Programa principal
int main(void) {
    char opmenu;
    char oppaciente;
    char opprofissional;
    char opagendamento;
    char opacesso_online;
    char opservicos;
    char opremover;
    do{
        opmenu = menu();
        switch (opmenu){
            case '1':
                oppaciente = paciente();
                switch (oppaciente){
                    case '1':
                        cadastrarpaciente();
                        break;
                    case '2':
                        editarcliente();
                        break;
                    case '3':
                        deletarcliente();
                        break;
                    case '4':
                        buscarcliente();
                        break;
                }
                break;
            case '2':
                opprofissional = profissionais();
                switch (opprofissional){
                    case '1':
                        cadastrarprofissional();
                        break;
                    case '2':
                        editarfuncionario();
                        break;
                    case '3':
                        deletarfuncionario();
                        break;
                    case '4':
                        buscarfuncionario();
                        break;
                }
                break;
            case '3':
                opagendamento = agendamento();
                switch (opagendamento){
                    case '1':
                        agendar();
                        break;
                    case '2':
                        editarconsulta();
                        break;
                    case '3':
                        eliminarconsulta();
                        break;
                    case '4':
                        buscarconsulta();
                        break;
                }
                break;
            case '4':
                opacesso_online = acesso_online();
                switch (opacesso_online){
                    case '1':
                        printf("Pacientes cadastrados:");
                        printf("\n");
                        relatoriocliente();
                        break;
                    case '2':
                        printf("Consultas cadastradas:");
                        printf("\n");
                        relatorioconsulta();
                        break;
                    case '3':
                        printf("Funcionários cadastrados:");
                        printf("\n");
                        relatoriofuncionario();
                        break;
                    case '4':
                        opservicos = servicos();
                        switch (opservicos){
                            case '1':
                                cadastrarservicos();
                                break;
                            case '2':
                                relatorioservicos();
                                break;
                        }
                        break;
                    case '5':
                        horario();
                        break;
                }
                break;
            case '5':
                opremover = remover();
                switch (opremover){
                    case '1':
                        removecliente();
                        break;
                    case '2':
                        removeconsulta();
                        break;
                    case '3':
                        removefuncionario();
                        break;
                    case '4':
                        removeservico();
                        break;
                }
                break;
        }
    } while (opmenu != '0'); 
}


//  Funções
char menu(void){
    char opmenu;
    system("clear||cls");
    printf("\n");
    printf("__________________________________________________________________________\n");
    printf("|           UFRN- Universidade Federal do Rio Grande do Norte             |\n");
    printf("|                 Centro de Ensino Superior do Seridó                     |\n");
    printf("|             DCT- Departamento de computação e tecnologia                |\n");
    printf("|                  Disciplina DCT1106 -- Programação                      |\n");
    printf("|        Projeto -- Um Sistema de Agendamento para Clínicas Médicas       |\n");
    printf("|              Developed by @Luisf66 - since Mar, 2022                    |\n");
    printf("|-------------------------------------------------------------------------|\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");       
    printf("| 1-Informações do paciente                                               |\n");
    printf("| 2-Informações do profissional                                           |\n");
    printf("| 3-Meus agendamentos                                                     |\n");
    printf("| 4-Acesso online                                                         |\n");
    printf("| 5-Remover arquivos                                                      |\n");
    printf("| 0-Sair                                                                  |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                                 
    printf("|_________________________________________________________________________|\n");
    scanf("%c",&opmenu);
    getchar();
    return opmenu;
}

void info(void){
    system("clear||cls");
    printf("\n");
    printf("__________________________________________________________________________\n");
    printf("|           UFRN- Universidade Federal do Rio Grande do Norte             |\n");
    printf("|                 Centro de Ensino Superior do Seridó                     |\n");
    printf("|             DCT- Departamento de computação e tecnologia                |\n");
    printf("|                  Disciplina DCT1106 -- Programação                      |\n");
    printf("|        Projeto -- Um Sistema de Agendamento para Clínicas Médicas       |\n");
    printf("|              Developed by @Luisf66 - since Mar, 2022                    |\n");
    printf("|-------------------------------------------------------------------------|\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                                                         |\n"); 
    printf("|   Programa feito para realizar o cadastro de pacientes e profissionais  |\n"); 
    printf("|   e ministrar consultas de forma que as mesmas não se sobreponham       |\n");
    printf("|_________________________________________________________________________|\n");
    getchar();
}
 
void equipe(void){
    system("clear||cls");
    printf("\n");
    printf("__________________________________________________________________________\n");
    printf("|           UFRN- Universidade Federal do Rio Grande do Norte             |\n");
    printf("|                 Centro de Ensino Superior do Seridó                     |\n");
    printf("|             DCT- Departamento de computação e tecnologia                |\n");
    printf("|                  Disciplina DCT1106 -- Programação                      |\n");
    printf("|        Projeto -- Um Sistema de Agendamento para Clínicas Médicas       |\n");
    printf("|              Developed by @Luisf66 - since Mar, 2022                    |\n");
    printf("|-------------------------------------------------------------------------|\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                                                         |\n"); 
    printf("|                 Programa desenvolvido por:                              |\n"); 
    printf("|                                                                         |\n"); 
    printf("|                 Luis Felipe                                             |\n"); 
    printf("|                 E-mail: luis.felipe.santos.701@ufrn.edu.br              |\n"); 
    printf("|                 Git: https://github.com/Luisf66/Projeto                 |\n"); 
    printf("|_________________________________________________________________________|\n");
    getchar();
    
}

char servicos (void){
    char opservicos;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                         Serviços e Profissionais                        |\n"); 
    printf("|                                                                         |\n");       
    printf("| 1-Cadastrar serviços                                                    |\n");  
    printf("| 2-Ver serviços                                                          |\n");     
    printf("|_________________________________________________________________________|\n");
    scanf("%c",&opservicos);
    getchar();
    return opservicos;
}

// Horário

void horario(void){
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                                 Horários                                |\n"); 
    printf("|-------------------------------------------------------------------------|\n");             
    printf("|      |  SEGUNDA |   TERÇA  |  QUARTA  |  QUINTA  |   SEXTA   |  SÁBADO  |\n");
    printf("|------|----------|----------|----------|----------|-----------|----------|\n");
    printf("|  7   |          |          |          |          |           |          |\n");
    printf("|  8   |          |          |          |          |           |          |\n");
    printf("|  9   |          |          |          |          |           |          |\n");
    printf("|  10  |          |          |          |          |           |          |\n");
    printf("|  11  |          |          |          |          |           |          |\n");
    printf("|  13  |          |          |          |          |           |          |\n");
    printf("|  14  |          |          |          |          |           |          |\n");
    printf("|  15  |          |          |          |          |           |          |\n");
    printf("|  16  |          |          |          |          |           |          |\n");
    printf("|  17  |          |          |          |          |           |          |\n");
    printf("|______|__________|__________|__________|__________|___________|__________|\n");
    printf("Aperte ENTER para continuar\n");
    getchar();
}


char acesso_online(void){
    char opacesso_online;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                              Acesso online                              |\n");              
    printf("| 1-Ver todos os pacientes                                                |\n");
    printf("| 2-Ver todas as consultas                                                |\n");
    printf("| 3-Ver todos os funcionários                                             |\n");
    printf("| 4-Serviços e profissionais                                              |\n");
    printf("| 5-Horários de atendimento                                               |\n");    
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &opacesso_online);
    getchar();
    return opacesso_online;
}

char remover(void){
    char opremover;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                           Remoção de arquivos                           |\n");              
    printf("| 1-Remover arquivo dos pacientes                                         |\n");
    printf("| 2-Remover arquivo das consultas                                         |\n");
    printf("| 3-Remover arquivo dos funcionários                                      |\n");   
    printf("| 4-Remover arquivo dos serviços                                          |\n");  
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &opremover);
    getchar();
    return opremover;
}
