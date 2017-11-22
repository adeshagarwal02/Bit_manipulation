#include<stdio.h>
int right(int n)
{
	return (n&(n-1));
}
int main()
{
	printf("%d\n",right(12));
	return 0;
}
