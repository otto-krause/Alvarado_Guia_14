#include<stdio.h>
#include<stdlib.h>

void main()
{
    int Matriz[2][3]={0}, F=0, C=0;
    printf("Ingrese tres numeros por fila\n");
    for (F=0; F<2; F++)
    {
        for (C=0; C<3; C++)
        {
            scanf("%d", &Matriz[F][C]);
        }
        printf("\n");
    }

    system("cls");

    for (C=0; C<3; C++)
    {
        Matriz[0][C]=Matriz[0][C]*4;
        Matriz[1][C]=Matriz[1][C]*3;
    }

    for (F=0; F<2; F++)
    {
        for (C=0; C<3; C++)
        {
            printf("%d\t", Matriz[F][C]);
        }
        printf("\n");       
    }
}