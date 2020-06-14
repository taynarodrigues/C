#include <stdio.h>

int main(int argc, char** argv)
{
	int num = 10;
	int *p = &num;
	int **pp;
	
	pp = &p;
	
	printf("%d\n", **pp);
	
	return 0;
}