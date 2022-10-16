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

// CNPJ

// CELULAR