#include"stdio.h" //endereco de memoria 
int main()	//ponteiro � uma variavel que aponta pra outra variavel
{			// var fica na mira da ponteira, uma ligacao entre elas 
	int *ptr;// cria ponteiro pra trabalhar com var      *ptr declara ponteiro
	int var=8;
	printf("nome \t valor \t posicao\n");
	printf("var \t %8i \t %i\n", var, &var); //& � o operador de endere�o 
	printf("ptr \t %8i \t %i\n", ptr, &ptr);
	ptr = &var; // ponteiro recebe o endere�o de var
	printf("var \t %8i \t %i\n", var, &var); 
	printf("ptr \t %8i \t %i\n", ptr, &ptr);
	*ptr = 666; // atrualiza o apontado (var)
	printf("var \t %8i \t %i\n", var, &var);
	printf("ptr \t %8i \t %i\n", ptr, &ptr);
	printf("ptr* \t %8i \t %i\n", *ptr, &ptr); 
	return 0;
}
