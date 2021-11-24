#include <stdio.h>
#include <stdlib.h>

void main()
{
    int Matriz[13][4]={0}, R=0, L=0, C=1, MT=0;
    do
    {
        printf("Ingrese los datos del coche: \n");
        printf("Linea: ");
        scanf("%d", &L);

        printf("Coche: ");
        scanf("%d", &C);
        if (C>=1)
        {
            printf("Recaudacion: ");
            scanf("%d", &Matriz[C][L]);
        }
        else
        {
        }
        
        system("cls"); 
    }    
    while (C>=1);

    for (L=1; L<=3; L++)
    {
        printf("\nLas recaudaciones de los coches de la linea %d fueron:\n", L);
        for (R=1; R<=12; R++)
        {
            printf("Coche %d: %d\n", R, Matriz[R][L]);
            Matriz[0][L]=Matriz[0][L]+Matriz[R][L];
        }
    }

    printf("\nLas recaudaciones totales de cada linea fueron:\n");
    for (L=1; L<=3; L++)
    {
        printf("Linea %d: %d\n", L, Matriz[0][L]);
        MT=MT+Matriz[0][L];
    }

    printf("\nLa recaudacion total de las tres lineas fue %d", MT);
}
