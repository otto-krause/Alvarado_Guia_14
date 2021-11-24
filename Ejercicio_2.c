#include<stdio.h>
#include<stdlib.h>

void main()
{
    int Matriz[2][3]={0}, I=0, J=0;
    printf("Ingrese tres numeros por fila\n");
    for (I=0; I<2; I++)
    {
        for (J=0; J<3; J++)
        {
            scanf("%d", &Matriz[I][J]);
        }
        printf("\n");
    }

    system("cls");

    for (J=0; J<3; J++)
    {
        Matriz[0][J]=Matriz[0][J]*4;
    }

    for (I=0; I<2; I++)
    {
        Matriz[I][2]=Matriz[I][2]*3;
    }

    printf("La matriz modificada es:\n\n");
    for (I=0; I<2; I++)
    {
        for (J=0; J<3; J++)
        {
            printf("%d\t", Matriz[I][J]);
        }
        printf("\n");
    }
}
