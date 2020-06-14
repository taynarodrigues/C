#include <stdio.h>

int main(int argc, char** argv)
{

	if(argc > 1)
	{
		int i;
          for(i = 1; i < argc; i++)
		     printf("%s ", argv[i]);
	}
	else
	{
	   printf("Não foram passados argumentos!");	
	}
	return 0;
}