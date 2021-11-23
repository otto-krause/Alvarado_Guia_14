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

    printf("La matriz ingresada es:\n\n");
    for (F=0; F<2; F++)
    {
        for (C=0; C<3; C++)
        {
            printf("%d\t", Matriz[F][C]);
        }
        printf("\n");       
    }
}
