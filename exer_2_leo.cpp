#include"stdio.h" // exer 2 - treinar pra prova   // forma direto
typedef unsigned short int USI;
struct dt
{
	USI dia;
	USI mes;
	USI ano;
};
struct produto
{
	char nome[30];
	int codigo;
	float preco;
	bool refrigerar;
	dt validade;
};
int main()
{
	int limite, i;
	printf("quantos produtos quer cadastrar? ");
	scanf("%d", &limite);
	produto vetor[limite];
	for(i=0; i<limite; i++)
	{
		produto p; // cria um objeto 
		printf("\n produto %d de %d\n", i+1, limite);
		printf("Digite o codigo: ");
		scanf("%d", &p.codigo);
		fflush(stdin);
		printf("Digite o nome: ");
		fgets(p.nome, sizeof(p.nome), stdin);
		printf("digite o preco: ");
		scanf("%f", &p.preco);
		printf("precisa refrigerar? (0-nao/1-sim) ");
		scanf("%d", &p.refrigerar);
		printf("validade: (dd/mm/aaaa): ");
		scanf("%d %d %d", &p.validade.dia, &p.validade.mes, &p.validade.ano);
		vetor[i] = p; // criar vetor
	}	
	for(i=0; i<limite; i++)
	{
		produto p;
		p = vetor[i];
		printf(" Codigo: %d\t", p.codigo);
		printf(" Nome: %s\n", p.nome);
		printf(" Preco: %.2f\t", p.preco);
		printf(" Refrig: %d\n", p.refrigerar);
		printf(" validade: %d/%d/%d\n\n", p.validade.dia, p.validade.mes, p.validade.ano);
	}
	float minimo, maximo;
	printf("digite valor minimo: ");
	scanf("%f", &minimo);
	printf("digite o valor maximo: ");
	scanf("%f", &maximo);
	printf("\n buscando produtos com preco entre %.2f e %.2f...\n\n", minimo, maximo);
	for(i=0; i<limite; i++)
	{
		if(vetor[i].preco>=minimo && vetor[i]. preco<=maximo)
		{
			printf("%s -> %.2f\n", vetor[i].nome, vetor[i].preco);
		}
	}
	return 0;
}
