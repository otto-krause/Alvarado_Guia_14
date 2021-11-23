#include<stdio.h>
#include<stdlib.h>

void main()
{
    int M[101][4]={0}, D[3]={0}, F=0, C=0, R=0, P=0, V=0;
    for (F=1; F<=100; F++)
    {
        printf("Ingrese las notas de los tres bimestres del alumno %d\n", F);
        for (C=1; C<=3; C++)
        {
            printf("Trimestre %d: ", C);
            scanf("%d", &M[F][C]);
        }
        system("cls");
    }

    printf("Quiere cambiar alguna nota? (SI=1 | NO=2): ");
    scanf("%d", &R);

    system("cls");

    if (R==1)
    {
        printf("Ingrese el alumno y el bimestre a cambiar\n");
        printf("Alumno: ");
        scanf("%d", &D[1]);
        printf("Trimestre: ");
        scanf("%d", &D[2]);

        D[0]=M[D[1]][D[2]];

        printf("Ingrese la nueva nota: ");
        scanf("%d", &M[D[1]][D[2]]);

        system("cls");

        printf("Esta seguro de cambiar la nota %d por la nota %d? (SI=1 | NO=2): ", D[0], M[D[1]][D[2]]);
        scanf("%d", &R);
        if (R==1)
        {
            printf("Desea continuar? (SI=1 | NO=2): ");
            scanf("%d", &R);
            if (R==1)
            {
                system("cls");
                P=(M[D[1]][1]+M[D[1]][2]+M[D[1]][3])/3;
                printf("N Legajo\tTrimestre 1\tTrimestre 2\tTrimestre 3\tPromedio\n");
                printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n\n", D[1], M[D[1]][1], M[D[1]][2], M[D[1]][3], P);
            }
            else
            {
            }
        }
        else
        {
            M[D[1]][D[2]]=D[0];
        }
    }
}
