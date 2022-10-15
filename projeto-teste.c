// gcc -c -Wall projeto.c
// gcc projeto.c -o projeto
// Adicionar funcao buscar unico paciente ou profissonal
//___________________________________________________________________
//|       UFRN- Universidade Federal do Rio Grande do Norte         |
//|             Centro de Ensino Superior do Seridó                 |
//|         DCT- Departamento de computação e tecnologia            |
//|              Disciplina DCT1106 -- Programação                  |
//|     Projeto -- Sistema de Agendamento para Clínicas Médicas     |
//|            Developed by @Luisf66 - since Ago , 2022             |
//|-----------------------------------------------------------------|
//|                             Semana 5                            |
//|_________________________________________________________________|

#include <stdio.h>
#include <stdlib.h>
//#include <time.h>
//#include <validata>

//  Assinatura das funções
void menu(void); 
void info(void); 
void equipe(void); 
void paciente(void); 
void profissionais(void); 
void servicos(void); 
void pagamento(void); 
void horario(void); 
void cadastrarpaciente(void);
void cadastrarprofissional(void);
void editarpaciente(void); 
void editarprofissional(void);
void deletarpaciente(void); 
void deletarprofissional(void); 
void buscarpaciente(void);
void buscarprofissional(void);
void agendamento(void); 
void agendar(void); 
void remarcar(void); 
void cancelar(void); 
void acesso_online(void); 
void pix(void);
void debito(void);
void credito(void); 
void convenio(void); 
void boleto(void);


//  Programa principal
int main(void) {
    char opmenu;
    menu();
    scanf("%c", &opmenu);
    getchar();
    while (opmenu != '0'){
        if (opmenu == '1'){
            char oppaciente;
            do {
                paciente();
                scanf("%c", &oppaciente);
                getchar();
                if (oppaciente == '1'){
                    cadastrarpaciente();
                }
                else if (oppaciente == '2'){
                    editarpaciente();
                }
                else if (oppaciente == '3'){
                    deletarpaciente();
                }
                else if (oppaciente == '4'){
                    buscarpaciente();
                }
            } while (oppaciente != '0');
        }
        else if (opmenu == '2'){
            char opprofissional;
            do {
                profissionais();
                scanf("%c", &opprofissional);
                getchar();
                if (opprofissional == '1'){
                    cadastrarprofissional();
                }
                else if (opprofissional == '2'){
                    editarprofissional();
                }
                else if (opprofissional == '3'){
                    deletarprofissional();
                }
                else if (opprofissional == '4'){
                    buscarpaciente();
                }
            } while (opprofissional != '0');
            
        }
        else if (opmenu == '3'){
            servicos();
        }
        else if (opmenu == '4'){
            horario();
        }
        else if (opmenu == '5'){
            char opagendamento;
            do{
                agendamento();
                scanf("%c", &opagendamento);
                getchar();
                if (opagendamento == '1'){
                    agendar();
                }
                else if (opagendamento == '2'){
                    remarcar();
                }
                else if (opagendamento == '3'){
                    cancelar();
                }
            } while (opagendamento != '0');
        }
        else if (opmenu == '6'){
            char opacesso_online;
            acesso_online();
            scanf("%c", &opacesso_online);
            getchar();
            if (opacesso_online == '1'){
                printf("Pacientes cadastrados:");
            }
            else if (opacesso_online == '2'){
                printf("Consultas cadastradas:");
            }
            else if (opacesso_online == '3'){
                char oppagamento;
                do{
                    pagamento();
                    scanf("%c", &oppagamento);
                    getchar();
                    if (oppagamento == '1'){
                        pix();
                    }
                    else if (oppagamento == '2'){
                        debito();
                    }
                    else if (oppagamento == '3'){
                        credito();
                    }
                    else if (oppagamento == '4'){
                        boleto();
                    }
                    else if (oppagamento == '5'){
                        convenio();
                    }
                }while (oppagamento != '0');
            }
        }
        menu();
        scanf("%c", &opmenu);
        getchar();
    }
}


//  Funções
void menu(void){
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
    printf("| 3-Serviços e profissionais                                              |\n");
    printf("| 4-Horários de atendimento                                               |\n");
    printf("| 5-Meus agendamentos                                                     |\n");
    printf("| 6-Acesso online                                                         |\n");
    printf("| 0-Sair                                                                  |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                                 
    printf("|_________________________________________________________________________|\n");
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

// Página seguinte

void paciente(void){
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
}

void profissionais(void){
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

void pagamento(void){
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

// CADASTRO
void cadastrarpaciente(void){
    char opcadastro;
   // char nome[20];
   // char CPF,Celular,data;
  //  char email;
  //  char tipo;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                           Cadastrar paciente                            |\n");              
    printf("| Nome:                                                                   |\n");
    printf("| CPF: (123.456.789-01)                                                   |\n");
    printf("| Celular: (11 91234-5678)                                                |\n");
    printf("| E-mail:                                                                 |\n");
    printf("| Nascimento: (dd/mm/aa)                                                  |\n");
    printf("| Tipo sanguíneo:                                                         |\n");
    printf("| 0-voltar                                                                |\n");
    //scanf("%[A-Za-z]", nome);                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &opcadastro);
    getchar();
}

void cadastrarprofissional(void){
    char opcadastro;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                          Cadastrar profissional                         |\n");              
    printf("| Nome:                                                                   |\n");
    printf("| CPF: (123.456.789-01)                                                   |\n");
    printf("| Celular: (11 91234-5678)                                                |\n");
    printf("| E-mail:                                                                 |\n");
    printf("| Nascimento: (dd/mm/aa)                                                  |\n");
    printf("| 0-voltar                                                                |\n");                                        
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &opcadastro);
    getchar();
}

// EDITAR

void editarpaciente(void){
    char cpf;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                        Alterar dados do paciente                        |\n");              
    printf("| CPF:                                                                    |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &cpf);
    getchar();
}

void editarprofissional(void){
    char cpf;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                      Alterar dados do profissional                      |\n");              
    printf("| CPF:                                                                    |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &cpf);
    getchar();
}

// DELETAR

void deletarpaciente(void){
    char cpf;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Remover paciente                            |\n");              
    printf("| CPF:                                                                    |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &cpf);
    getchar();
}

void deletarprofissional(void){
    char cpf;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                            Remover profissional                         |\n");              
    printf("| CPF:                                                                    |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &cpf);
    getchar();
}

void buscarpaciente(void){
    char cpf;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Buscar paciente                             |\n");              
    printf("| CPF:                                                                    |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &cpf);
    getchar();
}

void buscarprofissional(void){
    char cpf;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                          Buscar profissional                            |\n");              
    printf("| CPF:                                                                    |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &cpf);
    getchar();
}

void agendamento(void){
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                               Agendamento                               |\n");              
    printf("| 1-Agendar                                                               |\n");
    printf("| 2-Remarcar                                                              |\n");
    printf("| 3-Cancelar                                                              |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
}


void agendar(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                 Agendar                                 |\n"); 
    printf("| CPF: (123.456.789-01)                                                   |\n");             
    printf("| Data desejada: (dd/mm/aa)                                               |\n");
    printf("| Horário desejado: (7h~17h)                                              |\n");
    printf("| Serviço desejado:                                                       |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &op);
    getchar();
}

void remarcar(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                 Remarcar                                |\n");    
    printf("| CPF: (123.456.789-01)                                                   |\n");          
    printf("| Nova data desejada: (dd/mm/aa)                                          |\n");
    printf("| Novo horário desejado: (7h~17h)                                         |\n");
    printf("| Serviço desejado:                                                       |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &op);
    getchar();
}

void cancelar(void){
  //  char cpf,data,horario;
  //  char servico;
    char op;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                 Cancelar                                |\n");    
    printf("| CPF: (123.456.789-01)                                                   |\n");          
    printf("| Data cadastrada: (dd/mm/aa)                                             |\n");
    printf("| Horário cadastrado: (7~17)                                              |\n");
    printf("| Serviço cadastrado:                                                     |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
 //   scanf("%[.-0-9]", cpf);
 //   scanf("%[A-Z a-z /0-9]", data);
 //   scanf("%[0-9]", horario);
 //   scanf("%[A-Z a-z]", servico);
    scanf("%c", &op);
    getchar();
}

void acesso_online(void){
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                              Acesso online                              |\n");              
    printf("| 1-Ver todos os pacientes                                                |\n");
    printf("| 2-Ver todas as consultas                                                |\n");
    printf("| 3-Pagamento                                                             |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
}

void pix(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                   Pix                                   |\n");              
    printf("| CPF:                                                                    |\n");
    printf("| CNPJ:                                                                   |\n");
    printf("| Celular:                                                                |\n");
    printf("| E-mail:                                                                 |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &op);
    getchar();
}

void credito(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                 Crédito                                 |\n");              
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

void debito(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                  Débito                                 |\n");              
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