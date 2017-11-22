#include<stdio.h>
int main()
{
	int a,k;
	printf("Give value of a and k :");
	scanf("%d%d",&a,&k);
	a = a | (1<<k-1);
	printf("a = %d\n",a);
	return 0;
}
