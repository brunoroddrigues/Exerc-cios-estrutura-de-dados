#include"stdio.h"  // exer. 4 implemente uma busca pelo nome do produto usando a funcao strstr(). liste os encontrados ou de a mensagem de nao encontrado. usuario define o que ser buscado. 
#include"string.h"
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
    int refrigerar;
    struct dt validade;
};
int main()
{
    int limite, i;
    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &limite);
    struct produto vetor[limite];

    for(i = 0; i < limite; i++)
    {
        struct produto p;
        printf("\nProduto %d de %d\n", i+1, limite);
        printf("Digite o codigo: ");
        scanf("%d", &p.codigo);
        fflush(stdin);
        printf("Digite o nome: ");
        fgets(p.nome, sizeof(p.nome), stdin);
        printf("Digite o preco: ");
        scanf("%f", &p.preco);
        printf("Precisa refrigerar? (0 - nao / 1 - sim): ");
        scanf("%d", &p.refrigerar);
        printf("Validade (dd/mm/aaaa): ");
        scanf("%d %d %d", &p.validade.dia, &p.validade.mes, &p.validade.ano);
        vetor[i] = p;
    }
    float minimo, maximo;
	printf("digite valor minimo: ");
	scanf("%f", &minimo);
	printf("digite o valor maximo: ");
	scanf("%f", &maximo);
	printf("\n buscando produtos com preco entre %.2f e %.2f...\n\n", minimo, maximo);
	for(i=0; i<limite; i++)
	{
		produto p;
		p = vetor[i];
		if(vetor[i].preco>=minimo &&  p.preco<=maximo)
		{
			printf("%s -> %.2f\n", p.nome, p.preco);
		}
	}
    char busca[30]; // agulha 
    printf("\n Digite o nome do produto que deseja buscar: ");
    fflush(stdin); // Dá espaço           /stdin fluxo de entrada padrao 
    fgets(busca, sizeof(busca), stdin); // fgets leitura da strings, a partir do teclado 
    busca[strlen(busca)-1]='\0';   // strlen retorna o número de caracteres contidos na string str,
    int encontrou = 0;
    printf("\n Resultados da busca: \n ");
    for(i=0; i<limite; i++)
    {
        struct produto p = vetor[i]; //agulha é o busca
        if(strstr(p.nome, busca) != NULL) //strstr vai buscar a agulha
        {
            printf("Codigo: %d\n", p.codigo);
            printf("Nome: %s", p.nome);
            printf("Preco: %.2f\n", p.preco);
            printf("Refrigerar: %s\n", p.refrigerar ? "Sim":"Nao");
            printf("validade: %d/%d/%d\n\n", p.validade.dia, p.validade.mes, p.validade.ano);
            encontrou = 1;
        }
    } 
    if(!encontrou) // ! Negação
    { 
        printf("Nenhum produto encontrado com o nome \"%s\"\n", busca);
    }
    return 0;
}

