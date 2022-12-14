#include <stdio.h>
#include <stdlib.h>
#include "Estruturas.h"
#include "Servicos.h"
#include <string.h>

void cadastrarservicos (void){
    Servicos* serv;
    serv = (Servicos*)malloc(sizeof(Servicos));
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                         Serviços e Profissionais                        |\n"); 
    printf("|                                                                         |\n"); 
    printf("| Nome do serviço:                                                        |\n"); 
    fgets(serv->nome_serv,26,stdin); 
    strtok(serv->nome_serv, "\n");
    printf("| Nome do profissional:                                                   |\n"); 
    fgets(serv->nome_prof,26,stdin); 
    strtok(serv->nome_prof, "\n");
    serv->status = 1;
    printf("|_________________________________________________________________________|\n");
    printf("Tecle enter para cadastrar");
    printf("\n");
    mostrarservicos(serv);
    printf("Tecle enter para finalizar o cadastro");
    getchar();
    gravarservicos(serv);
    printf("Cadastro realizado");
    getchar();
    free(serv);
}

void gravarservicos (Servicos* serv){
    FILE* gser;
    gser = fopen("servicos.dat","ab");
    if (gser == NULL){
        printf("Arquivo inexistente");
        getchar();
    }
    fwrite(serv, sizeof(Servicos),1,gser);
    fclose(gser);
}

void mostrarservicos (Servicos* serv){
    printf("---------------------------------------------------------------------------\n");
    printf("| Nome do serviço: %s\n", serv->nome_serv);
    printf("| Nome do profissional: %s\n", serv->nome_prof);
    printf("| Status: %i\n",serv->status);
    printf("|_________________________________________________________________________|\n");
}