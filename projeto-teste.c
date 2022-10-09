// gcc -c -Wall projeto.c
// gcc projeto.c -o projeto
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
char menu(void); 
void info(void); 
void equipe(void); 
char paciente(void); 
char profissionais(void); 
void servicos(void); 
char pagamento(void); 
void horario(void); 
char cadastrarpaciente(void);
void cadastrarprofissional(void);
void editarpaciente(void); 
void editarprofissional(void);
void deletarpaciente(void); 
void deletarprofissional(void); 
void buscarpaciente(void);
void buscarprofissional(void);
char agendamento(void); 
void agendar(void); 
void remarcar(void); 
void cancelar(void); 
char acesso_online(void); 
void pix(void);
void debito(void);
void credito(void); 
void convenio(void); 
void boleto(void);
char consulta(void);

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
                        editarpaciente();
                        break;
                    case '3':
                        deletarpaciente();
                        break;
                    case '4':
                        buscarpaciente();
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
                        editarprofissional();
                        break;
                    case '3':
                        deletarprofissional();
                        break;
                    case '4':
                        buscarprofissional();
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
                                remarcar();
                                break;
                            case '3':
                                cancelar();
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
                        break;
                    case '2':
                        printf("Consultas cadastradas:");
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

// Página seguinte

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
char cadastrarpaciente(void){
    char opcadastropaciente;
    char nome[40];
    char CPF[15];
    char celular[14];
    char data[11];
    char email[50];
    char tipo[4];
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                           Cadastrar paciente                            |\n");              
    printf("| Nome:                                                                   |\n");
    scanf("%[A-Za-z ]", nome);
    printf("| CPF: (123.456.789-01)                                                   |\n");
    scanf("%[0-9.-]", CPF);
    printf("| Celular: (11 91234-5678)                                                |\n");
    scanf("%[0- 9-]", celular);
    printf("| E-mail:                                                                 |\n");
    scanf("%[A-Za-z0-9,@.]", email);
    printf("| Nascimento: (dd/mm/aaaa)                                                |\n");
    scanf("%[0-9/]", data);
    printf("| Tipo sanguíneo:                                                         |\n");
    scanf("%[A-B+-]", tipo);
    printf("| 0-voltar                                                                |\n");                                    
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &opcadastropaciente);
    getchar();
    return opcadastropaciente;
}

void cadastrarprofissional(void){
    char opcadastroprofissional;
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
    scanf("%c", &opcadastroprofissional);
    getchar();
}

// EDITAR

void editarpaciente(void){
    char editarcpfpa;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                        Alterar dados do paciente                        |\n");              
    printf("| CPF:                                                                    |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &editarcpfpa);
    getchar();
}

void editarprofissional(void){
    char editarcpfpro;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                      Alterar dados do profissional                      |\n");              
    printf("| CPF:                                                                    |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &editarcpfpro);
    getchar();
}

// DELETAR

void deletarpaciente(void){
    char deletarcpfpa;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Remover paciente                            |\n");              
    printf("| CPF:                                                                    |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &deletarcpfpa);
    getchar();
}

void deletarprofissional(void){
    char deletarcpfpro;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                            Remover profissional                         |\n");              
    printf("| CPF:                                                                    |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &deletarcpfpro);
    getchar();
}

void buscarpaciente(void){
    char buscarcpfpa;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Buscar paciente                             |\n");              
    printf("| CPF:                                                                    |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &buscarcpfpa);
    getchar();
}

void buscarprofissional(void){
    char buscarcpfpro;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                          Buscar profissional                            |\n");              
    printf("| CPF:                                                                    |\n");
    printf("|                                                                         |\n");
    printf("| 0-voltar                                                                |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &buscarcpfpro);
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

char agendamento(void){
    char opagendamento;
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
    scanf("%c",&opagendamento);
    getchar();
    return opagendamento;
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
    printf("| Valor:                                                                  |\n");
    printf("| Número do cartão:                                                       |\n");
    printf("| Validade:                                                               |\n");
    printf("| CVV:                                                                    |\n");
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
    printf("| Valor:                                                                  |\n");
    printf("| Número do cartão:                                                       |\n");
    printf("| Validade:                                                               |\n");
    printf("| CVV:                                                                    |\n");
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