#include <stdio.h>

int main(int argc, char** argv)
{
	void *pgen;
	int *pnum;
	int num = 10;
	
	pnum = &num;
	pgen = pnum;
	
	printf("%d\n", *(int*)pgen); 
	//(int*) � um casting, apontando para 
	//um ponteiro gen�rico
	
	return 0;
}