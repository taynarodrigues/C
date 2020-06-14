#include <stdio.h>

int retangulo(int base, int altura)
{

	return base * altura;
}

int main(int argc, char** argv)
{
	int area;
	
	area = retangulo(2,3);
	printf("%d\n", area);
	return 0;
}
