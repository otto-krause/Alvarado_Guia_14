#include<stdio.h>
#include<stdlib.h>

void main()
{
    int Matriz[2][3]={0}, F=0, C=0, S=0, M=0;
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
    }

    Matriz[0][2]=Matriz[0][2]*3;
    Matriz[1][2]=Matriz[1][2]*3;

    M=Matriz[0][0];

    for (F=0; F<2; F++)
    {
        for (C=0; C<3; C++)
        {
            if (Matriz[F][C]<M)
            {
                M=Matriz[F][C];
            }
            S=S+Matriz[F][C];
        }
        printf("\n");       
    }
    printf("El valor mas bajo de la matriz es %d y la suma de su contenido es %d\n\n", M, S);

    printf("La matriz modificada es:\n\n");
    for (F=0; F<2; F++)
    {
        for (C=0; C<3; C++)
        {
            printf("%d\t", Matriz[F][C]);
        }
        printf("\n");       
    }
}
