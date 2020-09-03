#include <stdio.h>
int sum(int,int);
int main()
{
	int a = 10;
	int b = 20;
	int c;
	c = sum (a,b);
	printf("%d\n",c);
	return 0;
}

int sum(int a,int b)
{
	return (a+b);
}
