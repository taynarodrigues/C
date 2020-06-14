#include <stdio.h>

int tamanho( char str[])
{
	int tam = 0;

	while(str[tam] != '\0')
		tam = tam + 1;
			  return tam;
}

int main(int argc, char** argv)
{
	int tam;
	
	tam = tamanho("falcon");
	
	printf("%d\n", tam);
	
	return 0;
}
