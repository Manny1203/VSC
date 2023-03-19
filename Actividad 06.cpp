#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
 
int main()
{
    printf("  **  CALCULADORA DE MATRICES  **\n************************************\n\n");
    int filaA, columA, filaB, columB, filaF, columF;
    printf("  Se realizara una operacion entre dos matrices a definir.\n");
    printf("  A continuacion, introduzca la dimension de ambas matrices:  \n\n");
    printf("  Matriz A:\n  - Nº filas:  ");
    scanf(" %d", &filaA);
    printf("  - Nº columnas:  ");
    scanf(" %d", &columA);
    printf("\n  Matriz B:\n  - Nº filas:  ");
    scanf(" %d", &filaB);
    printf("  - Nº columnas:  ");
    scanf(" %d", &columB);
    int i, j, k, k1, k2, k3;
    filaF = filaA;
    columF = columB;
    int vector_A[filaA+1][columA+1], vector_B[filaB+1][columB+1], vector_F[filaF+1][columF+1];
    printf("\n\n  Ahora, introduzca los valores de las matrices:\n\n  Matriz A:\n  ------- \n\n");
    for(i=0;i<filaA;i++)
    {
        for(j=0;j<columA;j++)
        {
            printf("  Valor en la fila %d, columna %d:  ", i+1, j+1);
            scanf(" %d", &k);
            vector_A[i][j] = k;
        }
        printf("\n");
    }
    k=0;
    printf("\n\n  Matriz B:\n  ------- \n\n");
    for(i=0;i<filaB;i++)
    {
        for(j=0;j<columB;j++)
        {
            printf("  Valor en la fila %d, columna %d:  ", i+1, j+1);
            scanf(" %d", &k);
            vector_B[i][j] = k;
        }
        printf("\n");
    }
    k=0;
    int w1=0, w2, w3=0, w4, w5=0, w6, w7=0;
    printf("\n\n  Elija que operacion quiere realizar entre estas matrices:");
    if((filaA==filaB) && (columA==columB))
    {
        printf("\n  1.- Suma\n  2.- Resta");
    }
    if(filaB==columA)
    {
        printf("\n  3.- Producto");
    }
    printf("\n  Respuesta:  ");
    while((k!=1) || (k!=2) || (k!=3))
    {
        scanf(" %d", &k);
        switch(k)
        {
            case 1:
            {
                if((filaA==filaB) && (columA==columB))
                {
                    for(i=0;i<filaA;i++)
                    {
                        for(j=0;j<columA;j++)
                        {
                            k1 = vector_A[i][j];
                            k2 = vector_B[i][j];
                            vector_F[i][j] = (k1+k2);
                        }
                    }
                    printf("\n\n  Su matriz final es la siguiente:\n\n");
                    for(i=0;i<filaA;i++)
                    {
                        for(j=0;j<columA;j++)
                        {
                            k3 = vector_F[i][j];
                            printf("  Valor en la fila %d, columna %d:  %d", i+1, j+1, k3);
                            printf("\n");
                        }
                        printf("\n");
                    }
                    return 0;
                }
                else
                {
                    printf("\n\n  No entiendo tu eleccion. Prueba otra vez.");
                    k=0;
                    printf("\n  Selecciona una operacion:  ");
                }
                break;
            }
            case 2:
            {
                if((filaA==filaB) && (columA==columB))
                {
                    for(i=0;i<filaA;i++)
                    {
                        for(j=0;j<columA;j++)
                        {
                            k1 = vector_A[i][j];
                            k2 = vector_B[i][j];
                            vector_F[i][j] = (k1-k2);
                        }
                    }
                    printf("\n\n  Su matriz final es la siguiente:\n\n");
                    for(i=0;i<filaA;i++)
                    {
                        for(j=0;j<columA;j++)
                        {
                            k3 = vector_F[i][j];
                            printf("  Valor en la fila %d, columna %d:  %d", i+1, j+1, k3);
                            printf("\n");
                        }
                        printf("\n");
                    }
                    return 0;
                }
                else
                {
                    printf("\n\n  No entiendo tu eleccion. Prueba otra vez.");
                    k=0;
                    printf("\n  Selecciona una operacion:  ");
                }
                break;
            }
            case 3:
            {
                if(columA==filaB)
                {
                    do
                    {
                        for(i=0;i<columA;i++)
                        {
                            w2 = vector_A[w3][i];
                            w4 = vector_B[i][w5];
                            w6 = w2*w4;
                            w7 = (w6+w7);
                        }
                        vector_F[w3][w5] = w7;
                        w7 = 0;
                        w1++;
                        w5++;
                        if(w5>columB)
                        {
                            w3++;
                            w5 = 0;
                        }
                    }
                    while(w1 <= ((filaA*columB)+2));
                    printf("\n");
                    for(i=0;i<filaA;i++)
                    {
                        for(j=0;j<columB;j++)
                        {
                            k3 = vector_F[i][j];
                            printf("  Valor en la fila %d, columna %d:  %d", i+1, j+1, k3);
                            printf("\n");
                        }
                        printf("\n");
                    }
                    return 0;
                }
                else
                {
                    printf("\n\n  No entiendo tu eleccion. Prueba otra vez.");
                    k=0;
                    printf("\n  Selecciona una operacion:  ");
                }
                break;
            }
            default:
            {
                printf("\n\n  No entiendo tu eleccion. Prueba otra vez. Selecciona una operacion:  ");
                break;
 
            }
        }
    }
    return 0;
}