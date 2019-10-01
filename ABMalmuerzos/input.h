#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED

void myFgets(char cadena[], int tamano, char mensaje[]);
void first_Toupper(char cadena[]);

int getInt(char mensaje[]);
float getFloat(char mensaje[]);
char getChar(char mensaje[]);

char getNumeroAleatorio(int desde , int hasta, int iniciar);

int esNumerico(char str[]) ;
int esTelefono(char str[]);
int esAlfaNumerico(char str[]);
int esSoloLetras(char str[]);
int esNumericoFlotante(char str[]);

void getString(char mensaje[],char input[]);
int getStringLetras(char mensaje[],char input[]);
int getStringNumbers(char mensaje[],char input[]);
int getStringNumerosFlotantes(char mensaje[],char input[]);
int getValidInt(char message[], int lowLimit, int hiLimit);
//int getValidInt(char requestMessage[],char errorMessage[], int lowLimit, int hiLimit);
void getValidString(char requestMessage[],char errorMessage[], char input[]);
float getValidFloat(char requestMessage[],char errorMessage[], int lowLimit, int hiLimit);

void clean_stdin(void);
void pause(char message[]);

void getSex(char input);
void getValidSex(char letter);



#endif // INPUT_H_INCLUDED
