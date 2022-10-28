#include <stdio.h>
#include <stdlib.h>

struct paciente{
    char nome[40];
    char cpf[15];
    char celular[14];
    char data[11];
    char email[50];
    char tipo[4];
};

struct profissional{
    char nome[40];
    char cpf[15];
    char celular[14];
    char data[11];
    char email[50];
};

struct consulta{
    char cpf[15];
    char dd[3];
    char mm[3];
    char aaaa[5];
    char hora[3];
    char medico[40];
};

struct pagamento{
    char cpf[15];
    char cnpj[19];
    char celular[14];
    char email[40];
};