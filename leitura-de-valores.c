#include <stdio.h>
// exemplo de leitura e valores

#define CT_TAM_NOME 13

int main () { // programa principal
	int idade = 0; // variavel
	char nome[CT_TAM_NOME]; // Uma variavel que armazena  12 caracteres, só pode usar 12



    printf (" \n Digite seu primeiro nome(verdadeiro): ");
	scanf ("%s, &nome"); // lendo um nome

	printf(" \n Digite sua idade(pode ser fake): ");
	scanf ("%d", &idade); // lendo um numero que correponde a idade	
    
    printf ("\n \n ==> %s voce tem %i (decimal) de idade", nome, idade);
    printf ("\n \n ==> %s voce tem %x (hexa) de idade", nome, idade);
	printf ("\n \n ==> %s voce tem %o (octal) de idade", nome, idade);
	
	return 404;
	
    
}