// validações

// DATA
char bissexto(char aaaa){
    if ((aaaa % 100 != '0') && (aaaa % 4 == '0')){
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
    char diamax;
    if (aaaa > '0' && aaaa <= '2050'){
        return 1;
    }
    else{
        return 0;
    }
    if (dd >= '1' && dd <='31'){
        return 1;
    }
    else{
        return 0;
    }
    if (mm >= '1' && mm <= '12'){
        return 1;
    }
    else{
        return 0;
    }
    if ((mm == '2') && (bissexto(aaaa))){
        diamax = 29;
    }
    else{
        diamax = 28;
    }
    switch (mm){
        case '4':
            diamax = 30;
            break;
        case '6':
            diamax = 30;
            break;
        case '9':
            diamax = 30;
            break;
        case '11':
            diamax = 30;
            break;
    }
    switch (mm){
        case '1':
            diamax = 31;
            break;
        case '3':
            diamax = 31;
            break;
        case '5':
            diamax = 31;
            break;
        case '7':
            diamax = 31;
            break;
        case '8':
            diamax = 31;
            break;
        case '10':
            diamax = 31;
            break;
        case '12':
            diamax = 31;
            break;
    }
}

// CPF

char CPF(char *cpf,char resultado,char resultado_dois){
    char *cpf[14];
    char resultado[4];
    char resultao_dois[4];
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