// validações

#include <stdio.h>
#include <stdlib.h>
#include "Validações.h"
#include "Estruturas.h"

// DATA
char bissexto(char aaaa){
    char aaaa[4];
    int atoi (const char *aaaa);
    //aaaa - '0';
    if ((aaaa % 100 != 0) && (aaaa % 4 == 0)){
        return 1;
    }
    else{
        return 0;
    }
    if (aaaa % 400 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
char data(char dd, char mm, char aaaa){
    char dia_max;
    struct consulta consulta;
   // printf("| Dia:                                                                    |\n");
   // scanf("%[0-9]", consulta.dd);    
   // getchar();
   // printf("| Mês:                                                                    |\n");
   // scanf("%[0-9]", consulta.mm);    
   // getchar();
   // printf("| Ano:                                                                    |\n");
   // scanf("%[0-9]", consulta.aaaa);
    int atoi (const char *aaaa);
    int atoi (const char *mm);
    int atoi (const char *dd);
    int atoi (const char *dia_max);
    // FAIXA DE DATAS VALIDAS
    if ( dd > 0 && dd < 32){
        return 1;
    }
    else{
        return 0;
    }
    if ( mm > 0 && mm < 13){
        return 1;
    }
    else{
        return 0;
    }
    if ( aaaa > 1900 && aaaa < 2077){
        return 1;
    }
    else{
        return 0;
    }
    //DIAS VALIDOS NO MES
    if ( mm == 4 || mm == 6 || mm == 9 || mm == 11){
        dia_max = 30;
        if ( dd > dia_max){
            return 0;
        }
        else{
            return 1;
        }
    }
    if ( mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12){
        dia_max = 31;
        if ( dd > dia_max){
            return 0;
        }
        else{
            return 1;
        }
    }
    if ( mm == 2 && bissexto){
        dia_max = 29;
        if ( dd > dia_max){
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        dia_max = 28;
        if ( dd > dia_max){
            return 0;
        }
        else{
            return 1;
        }
    }
}

// CPF

char CPF(char *cpf,int resultado,int resultado_dois){
    // vetor cpf: 0 1 2 3 4 5 6 7 8 9 10 11 12 13
    // numer cpf: 1 2 3 . 4 5 6 . 7 8 9  -  0  1
    struct paciente cliente;
    printf("| CPF: (123.456.789-00)                                                   |\n");
    scanf("%[0-9.-]", cliente.cpf);
    getchar();
    int resultado;
    int resultado_dois;
    int atoi (const char *cpf);

    resultado = (cpf[0]*10) + (cpf[1]*9) + (cpf[2]*8) + (cpf[4]*7) + (cpf[5]*6) + (cpf[6]*5) + (cpf[8]*4) + (cpf[9]*3) + (cpf[10]*2); 
    resultado = (resultado * 10) % 11;

    if (resultado == 10){
        resultado = 0;
    }
    if (resultado == cpf[12]){
        return 1;
    }
    else{
        return 0;
    }
    resultado_dois = (cpf[0]*11) + (cpf[1]*10) + (cpf[2]*9) + (cpf[4]*8) + (cpf[5]*7) + (cpf[6]*6) + (cpf[8]*5) + (cpf[9]*4) + (cpf[10]*3) + (cpf[12]*2);
    resultado_dois = (resultado_dois * 10) % 11;
    if (resultado_dois == cpf[13]){
        return 1;
    }
    else{
        return 0;
    }
}

// CNPJ

char CNPJ(char *cnpj,char resultado, char resto,char resultado_dois, char resto_dois){

    char cnpj[18];
    char resultado[4];
    char resto[3];
    char resultado_dois[4];
    char resto_dois[3];

    *cnpj - '0';
    resultado - '0';
    resto - '0';
    resultado_dois - '0';
    resto_dois - '0';
    resultado = (cnpj[0]*5) + (cnpj[1]*4) + (cnpj[3]*3) + (cnpj[4]*2) + (cnpj[5]*9) + (cnpj[7]*8) + (cnpj[8]*7) + (cnpj[9]*6) + (cnpj[11]*5) + (cnpj[12]*4) + (cnpj[13]*3) + (cnpj[14]*2);
    resto = (resultado % 11);

    if( resto >= 2 && resto <= 10){
        resto = 11 - resto;
    }
    else{
        resto = 0;
    }
    resultado_dois = (cnpj[0]*6) + (cnpj[1]*5) + (cnpj[3]*4) + (cnpj[4]*3) + (cnpj[5]*2) + (cnpj[7]*9) + (cnpj[8]*8) + (cnpj[9]*7) + (cnpj[11]*6) + (cnpj[12]*5) + (cnpj[13]*4) + (cnpj[14]*3) + (cnpj[16]*2);
    resto_dois = (resultado_dois % 11);
    if ( resto_dois >= 2 && resto_dois <= 10){
        resto_dois = 11 - resto_dois;
    }
    else{
        resto_dois = 0;
    }
    if ( cnpj[16] != resto || cnpj[17] != resto_dois){
        return 0;
    }
    else{
        return 1;
    }
}

// CELULAR

