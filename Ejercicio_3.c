#include<stdio.h>
#include<stdlib.h>

void main()
{
    int Matriz[2][3]={0}, I=0, J=0, S=0, M=0;
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

    M=Matriz[0][0];

    for (I=0; I<2; I++)
    {
        for (J=0; J<3; J++)
        {
            if (Matriz[I][J]<M)
            {
                M=Matriz[I][J];
            }
            S=S+Matriz[I][J];
        }
        printf("\n");
    }
    printf("El valor mas bajo de la matriz es %d y la suma de su contenido es %d\n\n", M, S);

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
