#include"stdio.h"
typedef unsigned short int USI; // esse codigo muda o nome da variavel
struct Dt{
	USI dia;
	USI mes;
	USI ano;
};
struct Produto{
	 int codigo;
	 char nome[60];
	 float preco;
	 Dt validade; // pegando o dia, mes e ano //dt-data
};
int main()
{
	Produto prod1;       
	prod1.codigo=345;
	prod1.validade.dia=18;
	prod1.validade.mes=4;
	prod1.validade.ano=2023;
	printf("codigo: %i\n", prod1.codigo); // %i em cada variavel que criou
	printf("validade: %2i-%2i-%4d",   // printf aqui pra mostrar e fecha embaixo com as variaveis criada.
	prod1.validade.dia,
	prod1.validade.mes,
	prod1.validade.ano
	);
	//printf("%i",sizeof(USI));
	return 0;	
}

