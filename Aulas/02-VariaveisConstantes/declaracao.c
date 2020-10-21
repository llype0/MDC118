#include <stdio.h>

/* tipo nome_variavel = valor inicial */
/* 
variaveis globais 
comentario em varias linhas
*/
// variaveis globais => comentario em uma linha
char ch = 'A';           // ou ch = 50; -128 a 127
unsigned char var = -19; // 0 a 255 => 0 a 127 -128 a -1 (255 - 19 + 1) = 237
short int curto = 23546; // -32768 a 32767
int numero = 100;
long int longo = 10000000000L;
float decimal = 0.465468545454654464; // 0.465469
double duplo = 0.465468545454654464;
const int SEXO_MASCULINO = 1;

int main() {
    // variavel local com escopo main
    int local = 10;
    int numero = 20;

    {
        // variavel local com escopo bloco
        int temp = 10;
    }

    // printf("%d", temp);
    printf("%c\n", ch);
    printf("%d\n", var);
    printf("%d\n", curto);
    printf("%d\n", numero);
    printf("%ld\n", longo);
    printf("%.15f\n", decimal);
    printf("%.15f\n", duplo);
    printf("%d\n", SEXO_MASCULINO);
    return 0;
}
