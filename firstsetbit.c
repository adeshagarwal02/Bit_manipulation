#include<stdio.h>
int findfirst(int x)
{
	int n,count = -1;
	n = x^(x-1);
	while(n)
	{
		n = n&(n-1);
		count = -(~count);
	}
	return count;
}
int main()
{
	printf("%d\n",findfirst(12));
}

