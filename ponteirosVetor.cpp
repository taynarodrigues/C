#include <stdio.h>

int main(int argc, char** argv)
{
	int vet[] = {1,2,3};
	int i;
	
	for(i= 0; i < 3; i++)
		// printf("%d\n", vet + 1);// acessa os endere�os
		// printf("%d\n", *(vet + i)); //acessa o cont�udo
		//vet + 0
		//vet + 1
		//vet + 2
		printf("%d\n",vet[i]);
	return 0;
}