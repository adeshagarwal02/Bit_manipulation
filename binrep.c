#include<stdio.h>
int main()
{
	int n;
	unsigned int i;
	printf("please enter the value of n:");
	scanf("%d",&n);
	for(i = 1<<31;i>0;i=i/2)
	{
		(n&i)?printf("1"):printf("0");
	}
	printf("\n");
	return 0;
}
