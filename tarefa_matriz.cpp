#include"stdio.h"  //criar matrizA de 10x10. preencher com aleatorios. ordena de forma crescente na matriz b. 
#include"stdlib.h"   // léo voce me pediu pra fazer de forma decrescente tambem
#include"time.h" 	// para iniciar os numero aleatorios, cada execução gera numeros diferentes
int main()		//Bruno Aparecido Rodrigues
{
	int lado = 10;     // definir o tamanho da matriz
	int matriz_a[lado][lado];
	int matriz_b[lado][lado];
	int i, j, valor_pequeno, i_pequeno, j_pequeno;
	int valor_maior, i_maior, j_maior;
	int l, k;
	printf("\n matriz original com numeros aleatorios: \n\n");
	srand(time(NULL));		// gerenciar numero aleatorios 
	for(i=0; i<lado; i++)
	{
		for(j=0; j<lado; j++)  // passei sem x dentro da matriz
		{
			matriz_a[i][j] = rand();		 // valor aleatorio 
			printf("%5i\t", matriz_a[i][j]);  
		}
		printf("\n");
	}
	for(i=0; i<lado; i++)		// obs: encontra o menor valor na parte restante, e troca pelo valor na posição atual
	{
		for(j=0; j<lado; j++)
		{
			valor_pequeno = matriz_a[i][j];  // eu atribui essas variaveis 
			i_pequeno = i;
			j_pequeno = j;
			for(l=0; l<lado; l++)
			{
				for(k=0; k<lado; k++)   
				{
					if(matriz_a[l][k] < valor_pequeno)
					{
							valor_pequeno = matriz_a[l][k];   // ler de forma da direita pra esquerda 
							i_pequeno = l;
							j_pequeno = k;
					}
				}
			}
			matriz_b[i][j] = valor_pequeno;		// armazena na matriz b
			matriz_a[i_pequeno][j_pequeno] = matriz_a[i][j];
		}
	}
	printf("\n matriz crescente: \n\n ");  // exibir matriz b de forma crescente 
	for(i=0; i<lado; i++)
	{
		for(j=0; j<lado; j++)
		{
			printf("%5i\t", matriz_b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<lado; i++)
	{
		for(j=0; j<lado; j++)   			
		{
			valor_maior = matriz_a[i][j];
			i_maior = i;
			j_maior = j;
			for(l=0; l<lado; l++)
			{
				for(k=0; k<lado; k++)
				{
					if(matriz_a[l][k] > valor_maior)     //encontrar o maior valor
					{
						valor_maior = matriz_a[l][k];
						i_maior = l;
						j_maior = k;
					}
				}
			}
			matriz_b[i][j] = valor_maior;
			matriz_a[i_maior][j_maior] = matriz_a[i][j];
		}
	}
	printf("\n matriz  decrescente: \n\n ");  	//exibir a matriz b de forma decrescente
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
