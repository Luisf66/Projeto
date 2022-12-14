typedef struct paciente Paciente;

char paciente(void);

void cadastrarpaciente(void);

void gravarcliente (Paciente*);

void mostrarclientes (Paciente*);

void buscarcliente (void);

void deletarcliente(void);

void editarcliente(void);

int convertedia(char* dd);

int convertemes (char* mm);

int converteano (char* aaaa);

int validacao_data (int dia,int mes, int ano);

int validacao_cpf (char* cpf);
