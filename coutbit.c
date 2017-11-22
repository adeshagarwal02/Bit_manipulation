#include<stdio.h>
int count_set(int n)
{
	int count=0;
	while(n)
	{
		n = n&(n-1);
		count++;
	}
	return count;
}
int main()
{
	printf("%d\n",count_set(10));
	return 0;
}
