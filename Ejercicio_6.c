#include<stdio.h>
#include<stdlib.h>

void main()
{
    int Matriz[21][7]={0}, F=0, C=0, HT=0;
    printf("Ingrese la cantidad de habitantes por departamento\n");
    for (F=1; F<=20; F++)
    {
        printf("Piso %d\n", F);
        for (C=1; C<=6; C++)
        {
            printf("Departamento %d: ", C);
            scanf("%d", &Matriz[F][C]);
            Matriz[F][0]=Matriz[F][0]+Matriz[F][C];
        }
        HT=HT+Matriz[F][0];
        Matriz[F][0]=Matriz[F][0]/6;
        system("cls");
    }

    printf("La cantidad de habitantes totales es de %d\n", HT);
    printf("La cantidad de habitantes promedio por piso es:\n");
    for (F=1; F<=20; F++)
    {
        printf("Piso %d\t%d\n", F, Matriz[F][0]);
    }
}
