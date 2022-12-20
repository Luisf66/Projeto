//Relatório
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Estruturas.h"
#include "Profissional.h"
#include "Consulta.h"
#include "Paciente.h"
#include "Servicos.h"

void relatoriofuncionario (void){
    Profissional* funcionario;
    funcionario = (Profissional*) malloc(sizeof(Profissional));
    FILE* rfun;
    rfun = fopen("Funcionarios.dat","ab");
    if (rfun == NULL){
        printf("Arquivo inexistente\n");
        getchar();
    }
    while(fread(funcionario, sizeof(Profissional), 1, rfun)){
        mostrarfuncionario(funcionario);
    }
    getchar();
    fclose(rfun);
    free(funcionario);
}

void relatoriocliente (void){
    Paciente* cliente;
    cliente = (Paciente*) malloc(sizeof(Paciente));
    FILE* rcli;
    rcli = fopen("Clientes.dat","ab");
    if (rcli == NULL){
        printf("Arquivo inexistente\n");
        getchar();
    }
    while(fread(cliente, sizeof(Paciente), 1, rcli)){
        mostrarclientes(cliente);
    }
    getchar();
    fclose(rcli);
    free(cliente);
}

void relatorioconsulta (void){
    Consulta* con;
    con = (Consulta*) malloc(sizeof(Consulta));
    FILE* rcon;
    rcon = fopen("Consulta.dat","ab");
    if (rcon == NULL){
        printf("Arquivo inexistente\n");
        printf("Programa encerrando...");
        getchar();
    }
    while(fread(con, sizeof(Consulta), 1, rcon)){
        mostrarconsulta(con);
    }
    getchar();
    fclose(rcon);
    free(con);
}

void relatorioservicos (void){
    Servicos* serv;
    serv = (Servicos*) malloc(sizeof(Servicos));
    FILE* rser;
    rser = fopen("servicos.dat","ab");
    if (rser == NULL){
        printf("Arquivo inexistente\n");
        getchar();
    }
    while(fread(serv, sizeof(Servicos), 1, rser)){
        mostrarservicos(serv);
    }
    getchar();
    fclose(rser);
    free(serv);
}


//void consultaproxima (void){
//    Consulta* con;
//    con = (Consulta*) malloc(sizeof(Consulta));
//    FILE* rcli;
//    rcli = fopen("Consulta.dat","ab");
//    time_t segundos;
//    time(&segundos);
//    data_hora_atual = localtime(&segundos);
//    printf("Data atual\n");
//    printf("Dia: %d\n", data_hora_atual->tm_mday);
//    printf("Mês: %d\n", data_hora_atual->tm_mon+1);
//    getchar();
//    if (rcli == NULL){
//        printf("Arquivo inexistente");
//        printf("\n");
//        printf("Programa encerrando...");
 //       exit(1);
 //   }
  //  while(fread(con, sizeof(Consulta), 1, rcli)){
   //     //if((con->dd == data_hora_atual->tm_mday) && (con->mm == data_hora_atual->tm_mon+1))
  //      mostrarconsulta(con);
 //   }
//    getchar();
//    fclose(rcli);
//    free(con);
//}


void removecliente (void){
    FILE* rcli;
    char confirma;
    rcli = fopen("Clientes.dat","ab");
    if (rcli == NULL){
        printf("Arquivo inexistente\n");
        getchar();
    }
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Deletar arquivo                             |\n");    
    printf("|                                                                         |\n");          
    printf("| Deseja deletar todo o arquivo de clientes? (S ou N)                     |\n");
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &confirma);
    getchar();
    fclose(rcli);
    if(confirma == 'S'){
        remove("Clientes.dat");
        printf("Arquivo excluído com sucesso\n");
    }
    else{
        printf("Arquivo não removido");
    }
    getchar();
}

void removefuncionario (void){
    FILE* rfun;
    rfun = fopen("Funcionarios.dat","ab");
    char confirma;
    if (rfun == NULL){
        printf("Arquivo inexistente\n");
        getchar();
    }
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Deletar arquivo                             |\n");    
    printf("|                                                                         |\n");          
    printf("| Deseja deletar todo o arquivo de funcionários? (S ou N)                 |\n");
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &confirma);
    getchar();
    fclose(rfun);
    if(confirma == 'S'){
        remove("Funcionarios.dat");
        printf("Arquivo excluído com sucesso\n");
    }
    else{
        printf("Arquivo não removido");
    }
    getchar();
}

void removeconsulta (void){
    FILE* rcon;
    char confirma;
    rcon = fopen("Consulta.dat","ab");
    if (rcon == NULL){
        printf("Arquivo inexistente\n");
        getchar();
    }
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Deletar arquivo                             |\n");    
    printf("|                                                                         |\n");          
    printf("| Deseja deletar todo o arquivo de consultas? (S ou N)                    |\n");
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &confirma);
    getchar();
    fclose(rcon);
    if(confirma == 'S'){
        remove("Consulta.dat");
        printf("Arquivo excluído com sucesso\n");
    }
    else{
        printf("Arquivo não removido");
    }
    getchar();
}

void removeservico (void){
    FILE* serv;
    char confirma;
    serv = fopen("servicos.dat","ab");
    if (serv == NULL){
        printf("Arquivo inexistente\n");
        getchar();
    }
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|        ----- Sistema de Agendamento para Clínicas Médicas -----         |\n");
    printf("|                             Deletar arquivo                             |\n");    
    printf("|                                                                         |\n");          
    printf("| Deseja deletar todo o arquivo de serviços? (S ou N)                     |\n");
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &confirma);
    getchar();
    fclose(serv);
    if(confirma == 'S'){
        remove("servicos.dat");
        printf("Arquivo excluído com sucesso\n");
    }
    else{
        printf("Arquivo não removido");
    }
    getchar();
}