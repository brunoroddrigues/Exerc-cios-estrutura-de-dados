#include"stdio.h"
int main()
{
	float *ptrvetor; // cria ponteiro pro vetor
	float vetor[]={45.3, 18, -3, 74.1, 23};
	int tamanho = sizeof(vetor) / sizeof(float);
	ptrvetor = &vetor[0];   // endereco da primeira posicao //[0] é a primeira posicao 
	for(int i=0; i<tamanho; i++)
	{
		printf("%.1f\t", vetor[i]);
	}
	return 0;
}
