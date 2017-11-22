#include<stdio.h>
int main()
{
	unsigned int n=107;
	unsigned int k,m;
	m = 1;
	printf("please enter the value of k:");
	scanf("%d",&k);
	m = m<<k;
	m = m-1;
	n = n^m;
	printf("%d\n",n);
	return 0;
}
