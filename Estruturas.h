#include <stdio.h>
#include <stdlib.h>

typedef struct paciente Paciente;
struct paciente{
    char nome[40];
    char cpf[16];
    char celular[16];
    char dd[5];
    char mm[5];
    char aaaa[7];
    char email[51];
    char tipo[6];
    char status;
};

typedef struct profissional Profissional;
struct profissional{
    char nome[40];
    char cpf[15];
    char celular[15];
    char dd[4];
    char mm[4];
    char aaaa[6];
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
    char aaaa[6];
    char status;
};

typedef struct pagamento Pagamento;
struct pagamento{
    char cpf[15];
    char cnpj[20];
    char celular[15];
    char email[40];
};
