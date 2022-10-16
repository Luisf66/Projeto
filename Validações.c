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
    char resultado_dois[4];
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

// CELULAR