#include<stdio.h>
int pow_2(int n)
{
	if((n&(n-1)))
		printf("It is not a power of 2\n");
	else
		printf("It is a power of 2\n");
}
int main()
{
	int n;
	printf("please enter the numbe n:");
	scanf("%d",&n);
	pow_2(n);
	return 0;
}
