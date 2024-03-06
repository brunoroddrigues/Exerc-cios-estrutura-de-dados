/*3.Aumente o valor do veículo em 4%. 
Exiba os dados antes e depois*/
#include "stdio.h"
#include "string.h"
typedef int inteiro;//tipo orginal, depois apelido
typedef 
	struct{
		int codigo;
		char fab[15];
		char modelo[15];
		int ano;
		bool novo;
		float preco;
	} Veiculo;//meu struct vai chamar veiculo

int main()
{
	Veiculo possante1;
	//insere dados
	possante1.codigo=1;
	strcpy(possante1.fab,"VW");
	strcpy(possante1.modelo,"Fusca");
	possante1.ano=1978;
	possante1.novo=false;//ou 0
	possante1.preco=4999.99;
	printf("Cod\tFabric\tModelo\tAno\tNovo\tPreco\n");//cabecalho
	//exibe original
	printf("%d\t%s\t%s\t%d\t%d\t%.2f\n", 
		possante1.codigo, 
		possante1.fab, 
		possante1.modelo,
		possante1.ano,
		possante1.novo,
		possante1.preco);
	possante1.preco = possante1.preco*1.04;//inflacao de 4%
	//exibe remarcado
	printf("\n\n%d\t%s\t%s\t%d\t%d\t%.2f\n", 
		possante1.codigo, 
		possante1.fab, 
		possante1.modelo,
		possante1.ano,
		possante1.novo,
		possante1.preco);	
	return 666;
}
