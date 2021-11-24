#include <stdio.h>
#include <stdlib.h>

void main()
{
    int Matriz[13][4]={0}, I=0, J=0, MT=0;
    do
    {
        printf("Ingrese los datos del coche: \n");
        printf("Linea: ");
        scanf("%d", &I);

        printf("Coche: ");
        scanf("%d", &J);
        if (J>=1)
        {
            printf("Recaudacion: ");
            scanf("%d", &Matriz[J][I]);
        }
        else
        {
        }

        system("cls");
    }
    while (J>=1);

    for (I=1; I<=3; I++)
    {
        printf("\nLas recaudaciones de los coches de la linea %d fueron:\n", I);
        for (J=1; J<=12; J++)
        {
            printf("Coche %d: %d\n", J, Matriz[J][I]);
            Matriz[0][I]=Matriz[0][I]+Matriz[J][I];
        }
    }

    printf("\nLas recaudaciones totales de cada linea fueron:\n");
    for (I=1; I<=3; I++)
    {
        printf("Linea %d: %d\n", I, Matriz[0][I]);
        MT=MT+Matriz[0][I];
    }

    printf("\nLa recaudacion total de las tres lineas fue %d", MT);
}

