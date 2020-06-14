#include <stdio.h>
int main(int argc, char** argv)
{
	int num = 10;
	int *pnum;
	
	pnum = &num;
	
	// *pnum = 11;
	
	printf("%d\n", num);
	printf("%d", *pnum);
	
	// scanf("%d", &num);
	// printf("%d\n", num);
	return 0;
}