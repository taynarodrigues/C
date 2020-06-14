#include <iostream>

/*
   Fibonacci: 1, 1, 2, 3, 5, 8, 13 ...
*/

using namespace std;

int fib(int n)
{
	if(n == 1 || n == 2)
		return 1;
	
	return fib(n -1) + fib(n - 2);
	
}

int main(int argc, char** argv)
{
 	cout << fib(7) << endl;
	
	return 0;
}