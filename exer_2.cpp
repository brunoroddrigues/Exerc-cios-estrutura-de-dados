#include"stdio.h"  // MOSTRAR TELEFONE COM DDD
struct Pessoa
{
	char nome[60];
	char cpf[11];
	struct Telefone
	{	
		int ddd;
		int numero;	
	} ;
	Telefone tel;
};
int main()
{
	Pessoa p;
	p.tel.ddd=14;
	p.tel.numero=989442132;
	printf("(%i) %i", p.tel.ddd, p.tel.numero);
	return 0;
}

