#include <stdio.h>
#include <stdlib.h>


int main()
{

    int Matriz[14][4]={0}, MT=0, L=0, V=0, C=0;
    for (L=1; L<=3; L++)
    {
        printf("Linea %d\n", L);
        printf("Ingrese el numero de coche y luego su recaudacion\n");
        for (V=1; V<=13; V++)
        {   
            printf("Coche: ");
            scanf("%d", &C);
            
            if (C<1)
            {
                V=13;
            }
            else
            {
                printf("Recaudacion: ");
                scanf("%d", &Matriz[C][L]);
            }
        }
        system("cls");
    }

    for (L=1; L<=3; L++)
    {
        printf("\nLas recaudaciones de los coches de la linea %d fueron:\n", L);
        for (V=1; V<=13; V++)
        {
            if (Matriz[V][L]==0)
            {
            }
            else
            {
               printf("Coche %d: %d\n", V, Matriz[V][L]);
            }
            Matriz[0][L]=Matriz[0][L]+Matriz[V][L];
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
