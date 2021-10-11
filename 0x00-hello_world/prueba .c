#include <stdio.h>

int main()
{
    int numeros[6];
    printf("escriba seis numero");
    for (int i = 0; i < 6 ; i++)
    {
        scanf("%d", &numeros[i]);
    }
    printf("numero : \n");
    for (int i = 0; i < 6 ; i++)
    {
        printf("%d \n", numeros[i]);
    }
    return 0;
}