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
#include "Pagamento.h"
#include "Profissional.h"

//  Assinatura das funções SIG
char menu(void);
void info(void);
void equipe(void);
void servicos(void);
void horario(void);
char consulta(void);
char acesso_online(void);


//  Programa principal
int main(void) {
    char opmenu;
    char oppaciente;
    char opprofissional;
    char opconsulta;
    char opagendamento;
    char opacesso_online;
    char oppagamento;
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
                opconsulta = consulta();
                switch (opconsulta){
                    case '1':
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
                        }
                        break;
                    case '2':
                        oppagamento = pagamento();
                        switch (oppagamento){
                            case '1':
                                pix();
                                break;
                            case '2':
                                debito();
                                break;
                            case '3':
                                credito();
                                break;
                            case '4':
                                boleto();
                                break;
                           case '5':
                                convenio();
                                break;
                        }
                        break;
                    }   
                    break;
            case '4':
                opacesso_online = acesso_online();
                switch (opacesso_online){
                    case '1':
                        printf("Pacientes cadastrados:");
                        printf("\n");
                        break;
                    case '2':
                        printf("Consultas cadastradas:");
                        printf("\n");
                        buscarconsulta();
                        break;
                    case '3':
                        servicos();
                        break;
                    case '4':
                        horario();
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

void servicos(void){
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                         Serviços e Profissionais                        |\n"); 
    printf("|                                                                         |\n");             
    printf("| Endocrinologia -- Dr. AAAAAAA   |    Endocrinologia -- Dr. AAAAAAA      |\n");
    printf("| Clínica geral  -- Dr. BBBBBBB   |    Clínica geral  -- Dr. BBBBBBB      |\n");
    printf("| Odontologico   -- Dr. CCCCCCC   |    Odontologico   -- Dr. CCCCCCC      |\n");
    printf("| Cardiologia    -- Dr. DDDDDDD   |    Cardiologia    -- Dr. DDDDDDD      |\n");
    printf("| Neurologia     -- Dr. EEEEEEE   |    Neurologia     -- Dr. EEEEEEE      |\n");
    printf("| Ortopedia      -- Dr. FFFFFFF   |    Ortopedia      -- Dr. FFFFFFF      |\n");
    printf("|_________________________________|_______________________________________|\n");
    printf("Aperte ENTER para continuar\n");
    getchar();
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

char consulta(void){
    char opconsulta;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                 Consulta                                |\n");              
    printf("| 1-Agendamento                                                           |\n");
    printf("| 2-Pagamento                                                             |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c",&opconsulta);
    getchar();
    return opconsulta;
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
    printf("| 3-Serviços e profissionais                                              |\n");
    printf("| 4-Horários de atendimento                                               |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &opacesso_online);
    getchar();
    return opacesso_online;
}
