#include<stdio.h>
int filps(int n)
{
	int count = 0;
	while(n)
	{
		n = n&(n-1);
		count ++;
	}
	return count;
}
int main()
{
	int a =10;
	int b = 20;
	printf("%d\n",filps(a^b));
	return 0;
}
