#include <stdio.h>

int main()
{

    /* sintaxe */
    int i = 0;
    do
    {
        printf("%d, ", i);
        i++;
    } while (i < 10);

    printf("\n");

    /* saltar uma repetição/laço */
    i = 10;
    do
    {
        if (i < 20)
            continue; // saltou a repetição
        printf("%d, ", i);
        i++;
    } while (i < 10);
    printf("\n");

    /* dowhile aninhado */
    i = 0;
    do
    {
        int j = 0;
        do
        {
            printf("%d,%d ", i, j);
            j++;
        } while (j < 10);
        i++;
    } while (i < 10);
    printf("\n");

    /* dowhile infinito */
    do
    {
        printf("Ao infitino e alem!\n");
    } while(1);

    return 0;
}