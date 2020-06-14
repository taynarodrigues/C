#include <stdio.h>
int main(int argc, char** argv)
{
	int *num;
	
	num = NULL;
	if(num != NULL)
		printf("Ponteiro diferente de NULL\n");
	else
		printf("Ponteiro igual a NULL\n");

	return 0;
}