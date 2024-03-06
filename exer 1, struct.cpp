#include"stdio.h"  // crie uma estrutura de dados para cadastrar produtos de uma quitanda com 5 campos(use int, char, bool e float
#include"string.h"
struct Produto // COMECAR COM LETRA MAIUSCULA
{
	int codigo; 
	char nome[30];
	bool nacionalidade;
	float preco;
};
int main()
{
	Produto prod1;    // definir o nome pra estrutura produto 
	prod1.codigo=666;
	strcpy(prod1.nome,"Banana");
	prod1.nacionalidade=false;
	prod1.preco=3.50;    //%s usar qd é mais de uma letra 
	printf(" codigo: %i\n nome: %s\n nacionalidade: %d\n preco: %.2f\n", prod1.codigo, prod1.nome, prod1.nacionalidade, prod1.preco);
	return 0;			//usar %d no bolleano
}
