#include"stdio.h"  //criar matrizA de 10x10. preencher com aleatorios. ordena de forma crescente na matriz b.  
#include"stdlib.h" //Bruno Aparecido Rodrigues
#include"time.h"
int main()
{
    int lado = 10;				// criando 10 linhas e 10 colunas
    int matriz_a[lado][lado];
    int matriz_b[lado][lado];
    int i, j, valor_pequeno, i_pequeno, j_pequeno;
    int k, l;
    srand(time(NULL));   //gerador de números aleatórios
    printf("\n matriz original com numeros aleatorios: \n\n");
    for(i=0; i<lado; i++)      // i linha 
        {
            for(j=0; j<lado; j++)  //j coluna     // to jogando os numeros aleatorios na matriz A
                {
                    matriz_a[i][j] = rand(); // pegar numeros aleatorios. 
                    printf("%5i\t", matriz_a[i][j]);  //%5 numero com 5 colunas 
                }
            printf("\n");
        }

     for(i=0; i<lado; i++)            // obs peguei o menor numero ee comparei com o primeiro de linha seguinte
        {
            for(j=0; j<lado; j++)
                {
                    valor_pequeno = matriz_a[i][j];
                    i_pequeno = i;
                    j_pequeno = j;
                    for(k=0; k<lado; k++)
                        {
                            for(l=0; l<lado; l++)
                                {
                                    if(matriz_a[k][l] < valor_pequeno)
                                        {
                                            valor_pequeno = matriz_a[k][l];
                                            i_pequeno = k;
                                            j_pequeno = l;
                                        }
                                }
                        }
                    matriz_b[i][j] = valor_pequeno;
                    matriz_a[i_pequeno][j_pequeno] = matriz_a[i][j];
                }
        }
    printf("\n Matriz de forma crescente: \n\n");   // exibi a matriz lado b
    for(i=0; i<lado; i++)
        {
            for(j=0; j<lado; j++)
                {
                    printf("%5i\t", matriz_b[i][j]);
                }
            printf("\n");
        }
    return 0;
}
