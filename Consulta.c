// Consulta

char agendamento(void){
    char opagendamento;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                               Agendamento                               |\n");              
    printf("| 1-Agendar                                                               |\n");
    printf("| 2-Remarcar                                                              |\n");
    printf("| 3-Cancelar                                                              |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c",&opagendamento);
    getchar();
    return opagendamento;
}


void agendar(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                 Agendar                                 |\n"); 
    printf("| CPF: (123.456.789-01)                                                   |\n");             
    printf("| Data desejada: (dd/mm/aa)                                               |\n");
    printf("| Horário desejado: (7h~17h)                                              |\n");
    printf("| Serviço desejado:                                                       |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &op);
    getchar();
}

void remarcar(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                 Remarcar                                |\n");    
    printf("| CPF: (123.456.789-01)                                                   |\n");          
    printf("| Nova data desejada: (dd/mm/aa)                                          |\n");
    printf("| Novo horário desejado: (7h~17h)                                         |\n");
    printf("| Serviço desejado:                                                       |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
    scanf("%c", &op);
    getchar();
}

void cancelar(void){
  //  char cpf,data,horario;
  //  char servico;
    char op;
    system("clear||cls");
    printf("\n");
    printf("___________________________________________________________________________\n");
    printf("|       ----- Sistema de Agendamento para Clínicas Médicas -----          |\n");
    printf("|                                 Cancelar                                |\n");    
    printf("| CPF: (123.456.789-01)                                                   |\n");          
    printf("| Data cadastrada: (dd/mm/aa)                                             |\n");
    printf("| Horário cadastrado: (7~17)                                              |\n");
    printf("| Serviço cadastrado:                                                     |\n");
    printf("| 0-voltar                                                                |\n");
    printf("| Escolha uma das opções:                                                 |\n");                                               
    printf("|_________________________________________________________________________|\n");
 //   scanf("%[.-0-9]", cpf);
 //   scanf("%[A-Z a-z /0-9]", data);
 //   scanf("%[0-9]", horario);
 //   scanf("%[A-Z a-z]", servico);
    scanf("%c", &op);
    getchar();
}