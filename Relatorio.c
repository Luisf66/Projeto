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
    rfun = fopen("Funcionarios.dat","rb");
    if (rfun == NULL){
        printf("Arquivo inexistente\n");
        printf("Programa encerrando...");
        exit(1);
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
    rcli = fopen("Clientes.dat","rb");
    if (rcli == NULL){
        printf("Arquivo inexistente\n");
        printf("Programa encerrando...");
        exit(1);
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
    FILE* rcli;
    rcli = fopen("Consulta.dat","rb");
    if (rcli == NULL){
        printf("Arquivo inexistente\n");
        printf("Programa encerrando...");
        exit(1);
    }
    while(fread(con, sizeof(Consulta), 1, rcli)){
        mostrarconsulta(con);
    }
    getchar();
    fclose(rcli);
    free(con);
}

void relatorioservicos (void){
    Servicos* serv;
    serv = (Servicos*) malloc(sizeof(Servicos));
    FILE* rser;
    rser = fopen("servicos.dat","rb");
    if (rser == NULL){
        printf("Arquivo inexistente\n");
        printf("Programa encerrando...");
        exit(1);
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
//    rcli = fopen("Consulta.dat","rb");
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
