// Consulta
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Consulta.h"
#include "Estruturas.h"
//#include "Validacoes.h"

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
    printf("| 4-Buscar                                                                |\n");
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
    char confirma;
    do{
        system("clear||cls");
        printf("\n");
        printf("___________________________________________________________________________\n");
        printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
        printf("|                                 Agendar                                 |\n"); 
        printf("| CPF: (123.456.789-01)                                                   |\n");  
        fgets(con->cpf,16,stdin);    
        strtok(con->cpf, "\n");
        getchar();
        //
        printf("| Dia:                                                                    |\n");    
        fgets(con->dd,5,stdin);
        strtok(con->dd, "\n");
        //
        printf("| Mês:                                                                    |\n");    
        fgets(con->mm,5,stdin);
        strtok(con->mm, "\n");
        //
        printf("| Horário desejado: (0~24)                                                |\n");
        fgets(con->hora,5,stdin);
        strtok(con->hora, "\n");
        //
        printf("| Médico desejado:                                                        |\n");
        fgets(con->medico,41,stdin);
        strtok(con->medico, "\n");
        //
        con->status = 1;
        printf("| 0-voltar                                                                |\n");                                              
        printf("|_________________________________________________________________________|\n");
        printf("Tecle enter para cadastrar\n");
        mostrarconsulta(con);
        printf("\nDados inseridos corretamente? S ou N\n");
        scanf("%c", &confirma);
        getchar();
    }while (confirma != 'S');
    printf("Tecle enter para finalizar o cadastro");
    getchar();
    gravarconsulta(con);
    printf("Cadastro realizado");
    getchar();
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
    printf("| Status: %i\n",con->status);
    printf("|_________________________________________________________________________|\n");
}

void buscarconsulta (void){
    Consulta* con;
    con = (Consulta *)malloc(sizeof(Consulta));
    FILE* gc;
    int enc;
    char buscacpf[15];
    gc = fopen("Consulta.dat","rb");
    if (gc == NULL){
        printf("O arquivo não existe");
        getchar();
    }
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Buscar consulta                             |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    printf("| Digite o cpf:                                                           |\n");
    printf("|_________________________________________________________________________|\n");
    fgets(buscacpf,15,stdin);    
    strtok(buscacpf, "\n");
    getchar();
    enc = 0;
    while ((!enc) && (fread(con, sizeof(Consulta), 1, gc))){
        if ((strcmp(con->cpf,buscacpf) == 0)){
            enc = 1;
        }
    }
    fclose(gc);
    if (enc == 1){
        printf("\nConsulta encontrada com sucesso\n");
        mostrarconsulta(con);
    }
    else{
        printf("\nA consulta %s não foi encontrado...\n", buscacpf);
    }
    getchar();
    free(con);
}

void eliminarconsulta(void){
    Consulta* con;
    con = (Consulta*)malloc(sizeof(Consulta));
    FILE* gc;
    int enc;
    char buscacpf[15];
    char resp;
    gc = fopen("Consulta.dat", "r+b");
    if(gc == NULL){
        printf("O arquivo não existe");
        getchar();
    }
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Deletar consulta                            |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    printf("| Digite o cpf:                                                           |\n");
    printf("|_________________________________________________________________________|\n");
    fgets(buscacpf,16,stdin); 
    strtok(buscacpf, "\n");   
    getchar();
    enc = 0;
    while ((!enc) && (fread(con, sizeof(Consulta), 1, gc))){
        if ((strcmp(con->cpf,buscacpf) == 0)){
            enc = 1;
        }
    }
    if (enc == 1){
        printf("Consulta a ser cancelada:\n");
        mostrarconsulta(con);
        getchar();
        printf("Deseja cancelar esta consulta? (S ou N):");
        scanf("%c", &resp);
        if (resp == 's' || resp == 'S') {
        con->status = 0;
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
    getchar();
    free(con);
    fclose(gc);   
}

void editarconsulta(void){
    Consulta* con;
    con = (Consulta*) malloc(sizeof(Consulta));
    FILE* gc;
    char confirma;
    int enc;
    char resp;
    char buscacpf[15];
    gc = fopen("Consulta.dat", "r+b");
        if (gc == NULL){
            printf("O arquivo não existe");
            getchar();
        }
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                            Remarcar consulta                            |\n");              
    printf("| CPF: (123.456.789-00)                                                   |\n");
    printf("| Digite o cpf:                                                           |\n");
    printf("|_________________________________________________________________________|\n");
    fgets(buscacpf,16,stdin); 
    strtok(buscacpf, "\n");   
    getchar();
    enc = 0;
    while((!enc) && (fread(con, sizeof(Consulta), 1, gc))) {
        if ((strcmp(con->cpf, buscacpf) == 0) && (con->status == 1)) {
            enc = 1;
        }
    }
    if (enc){
        printf("Consulta a ser remarcada:\n");
        mostrarconsulta(con);
        getchar();
        printf("Deseja realmente editar esta consulta S ou N? ");
        scanf("%c", &resp);
        getchar();
        if (resp == 's' || resp == 'S'){
            do{
                system("clear||cls");
                printf("\n");
                printf("___________________________________________________________________________\n");
                printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
                printf("|                                Remarcar                                 |\n");
                printf("| CPF: (123.456.789-00)                                                   |\n");
                fgets(con->cpf,16,stdin);    
                strtok(con->cpf, "\n");

                printf("| Dia:                                                                    |\n");    
                fgets(con->dd,5,stdin);
                strtok(con->dd, "\n");

                printf("| Mês:                                                                    |\n");    
                fgets(con->mm,5,stdin);
                strtok(con->mm, "\n");

                printf("| Horário desejado: (0~24)                                                |\n");
                fgets(con->hora,5,stdin);
                strtok(con->hora, "\n");

                printf("| Médico desejado:                                                        |\n");
                fgets(con->medico,41,stdin);
                strtok(con->medico, "\n");

                con->status = 1;
                printf("| 0-voltar                                                                |\n");                                              
                printf("|_________________________________________________________________________|\n");
                fseek(gc, (-1)*sizeof(Consulta), SEEK_CUR);
                fwrite(con, sizeof(Consulta), 1, gc);
                printf("\nDados inseridos corretamente? S ou N\n");
                scanf("%c", &confirma);
                getchar();
        }while (confirma != 'S');
        printf("\nTecle enter para cadastrar os novos dados\n");
        getchar();
        mostrarconsulta(con);
        printf("\nTecle enter para finalizar o cadastro\n");
        getchar();
        printf("\nConsulta remarcada com sucesso\n");
    } else {
      printf("\nOk, os dados não foram alterados\n");
    }
    } else {
        printf("O cpf %s não foi encontrado...\n", buscacpf);
    }
    getchar();
    free(con);
    fclose(gc);
}
