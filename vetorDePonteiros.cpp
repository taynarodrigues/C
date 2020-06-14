#include <stdio.h>

int main(int argc, char** argv)
{
	
	int *vet[3];
	int n1 = 10, n2 = 11, n3 = 12;
	
	vet[0] = &n1;
	vet[1] = &n2;
	vet[2] = &n3;
	
	int i;
	for(i = 0; i < 3; i++)
		printf("%d\n", *vet[i]);
	return 0;
}