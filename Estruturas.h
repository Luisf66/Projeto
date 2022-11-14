#include <stdio.h>
#include <stdlib.h>

typedef struct paciente Paciente;
struct paciente{
    char nome[40];
    char cpf[15];
    char celular[15];
    char dd[4];
    char mm[4];
    char aaaa[6];
    char email[50];
    char tipo[5];
    char status[3];
};

typedef struct profissional Profissional;
struct profissional{
    char nome[40];
    char cpf[14];
    char celular[14];
    char dd[3];
    char mm[3];
    char aaaa[5];
    char email[50];
    char status;
};

typedef struct consulta Consulta;
struct consulta{
    char cpf[15];
    char dd[4];
    char mm[4];
    char hora[4];
    char medico[40];
    char status;
};

typedef struct pagamento Pagamento;
struct pagamento{
    char cpf[14];
    char cnpj[19];
    char celular[14];
    char email[40];
};
