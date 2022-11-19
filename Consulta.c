// Consulta
#include <stdio.h>
#include <stdlib.h>
#include "Consulta.h"
#include "Estruturas.h"

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
    Consulta* con;
    con = (Consulta*)malloc(sizeof(Consulta));
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                 Agendar                                 |\n"); 
    printf("| CPF: (123.456.789-01)                                                   |\n");  
    fgets(con->cpf,15,stdin);    
    strtok(con->cpf, "\n");
    getchar();
    //
    printf("| Dia:                                                                    |\n");    
    fgets(con->dd,4,stdin);
    strtok(con->dd, "\n");
    getchar();
    //
    printf("| Mês:                                                                    |\n");    
    fgets(con->mm,4,stdin);
    strtok(con->mm, "\n");
    getchar();
    //
    printf("| Horário desejado: (0~24)                                                |\n");
    fgets(con->hora,4,stdin);
    strtok(con->hora, "\n");
    getchar();
    //
    printf("| Médico desejado:                                                        |\n");
    fgets(con->medico,40,stdin);
    strtok(con->medico, "\n");
    getchar();
    //
    con->status = '1';
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
    printf("Tecle enter para cadastrar");
    mostrarconsulta(con);
    printf("Tecle enter para finalizar o cadastro");
    getchar();
    gravarconsulta(con);
    printf("Cadastro realizado");
    getchar();
    free(con);
}

void remarcar(void){
    Consulta *con;
    con = (Consulta*)malloc(sizeof(Consulta));
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                Remarcar                                 |\n"); 
    printf("| CPF: (123.456.789-01)                                                   |\n");  
    fgets(con->cpf,15,stdin);     
    getchar();       
    printf("| Dia:                                                                    |\n");
    fgets(con->dd,4,stdin);     
    getchar();
    printf("| Mês:                                                                    |\n");
    fgets(con->mm,4,stdin);   
    getchar();
    printf("| Horário desejado: (0~24)                                                |\n");
    fgets(con->hora,4,stdin);    
    getchar();
    printf("| Médico desejado:                                                        |\n");
    fgets(con->medico,40,stdin);    
    printf("| 0-voltar                                                                |\n");                                              
    printf("|_________________________________________________________________________|\n");
    mostrarconsulta(con);
    getchar();
    gravarconsulta(con);
    free(con);
}

void gravarconsulta (Consulta* con){
    FILE* gc;
    gc = fopen("Consulta.dat","ab");
    if (gc == NULL){
        printf("Arquivo inexistente");
        printf("Programa encerrando...");
        exit(1);
    }
    fwrite(con, sizeof(Consulta),1,gc);
    fclose(gc);
}

void mostrarconsulta (Consulta* con){
    printf("---------------------------------------------------------------------------\n");
    printf("| CPF: %s\n", con->cpf);
    printf("| Dia: %s\n", con->dd);
    printf("| Mês: %s\n",con->mm);
    printf("| Horário cadastrado: %s\n",con->hora);
    printf("| Médico cadastrado: %s\n",con->medico);
    printf("| Status: %s\n",con->status);
    printf("|_________________________________________________________________________|\n");
}

void buscarconsulta (void){
    FILE* gc;
    Consulta *con;
    int enc;
    char buscacpf[15];
    gc = fopen("Consulta.dat","rb");
    if (gc == NULL){
        printf("Consulta não cadastrada");
        exit(1);
    };
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Buscar consulta                             |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    printf("| Digite o cpf:                                                           |\n");
    printf("|_________________________________________________________________________|\n");
    fgets(con->cpf,15,gc); 
    strtok(con->cpf, "\n");   
    getchar();
    con = (Consulta *)malloc(sizeof(Consulta));
    enc = 0;
    while ((!enc) && (fread(con, sizeof(Consulta), 1, gc))){
        if ((strcmp(con->cpf,buscacpf) == 0)){
            enc = 1;
        }
    }
    fclose(gc);
    if (enc){
        mostrarconsulta(con);
    }
    else{
        printf("A consulta %s não foi encontrado...\n", buscacpf);
    }
    free(con);
}

void eliminarconsulta(void){
    FILE* gc;
    Consulta* con;
    int enc;
    char buscacpf[15];
    char resp;
    gc = fopen("Consultas.dat", "r+b");
    if(gc == NULL){
        printf("Consulta não cadastrada");
        exit(1);
    }
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Deletar consulta                            |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    printf("| Digite o cpf:                                                           |\n");
    printf("|_________________________________________________________________________|\n");
    fgets(con->cpf,15,gc); 
    strtok(con->cpf, "\n");   
    getchar();
    con = (Consulta*)malloc(sizeof(Consulta));
    enc = 0;
    while ((!enc) && (fread(con, sizeof(Consulta), 1, gc))){
        if ((strcmp(con->cpf,buscacpf) == 0)){
            enc = 1;
        }
    }
    if (enc == 1){
        mostrarconsulta(con);
        getchar();
        printf("Deseja cancelar esta consulta? (S ou N):");
        scanf("%c", &resp);
        if (resp == 's' || resp == 'S') {
        con->status = '0';
        getchar();
        fseek(gc, (-1)*sizeof(Consulta), SEEK_CUR);
        fwrite(con, sizeof(Consulta), 1, gc);
        printf("\nConsulta cancelada\n");
        }
    else {
        printf("\nOk, os dados não foram alterados\n");
    }
    }
    else {
    printf("A consulta %s não foi encontrada...\n", buscacpf);
    }
    free(con);
    fclose(gc);   
}
