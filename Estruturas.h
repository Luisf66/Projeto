#include <stdio.h>
#include <stdlib.h>

typedef struct paciente Paciente;
struct paciente{
    char nome[40];
    char cpf[13];
    char celular[14];
    char dd[4];
    char mm[4];
    char aaaa[6];
    char email[51];
    char tipo[5];
    char sexo[3];
    char status;
};

typedef struct profissional Profissional;
struct profissional{
    char nome[40];
    char cpf[13];
    char celular[15];
    char dd[4];
    char mm[4];
    char aaaa[6];
    char email[50];
    char funcao[35];
    char status;
};

typedef struct consulta Consulta;
struct consulta{
    char cpf[13];
    char dd[4];
    char mm[4];
    char hora[4];
    char medico[41];
    char aaaa[6];
    char status;
    //char pagamento[9];
};

struct tm *data_hora_atual; 

typedef struct servicos Servicos;
struct servicos{
    char nome_serv[25];
    char nome_prof[41];
    char status;
};
