//#include "Estruturas.h"
typedef struct consulta Consulta;

char agendamento(void);

void agendar(void);

void gravarconsulta (Consulta*);

void mostrarconsulta (Consulta*);

void buscarconsulta (void);

void eliminarconsulta(void);

void editarconsulta(void);

int convertehora (char* hh);

int data_consulta (int dia,int mes);
