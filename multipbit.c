#include<stdio.h>
int main()
{
	int a,b,mult=0;
	printf("please enter the value of two number a and b:");
	scanf("%d%d",&a,&b);
	while(b>0)
	{
		if(b & 1)
			mult += a ;
		a = a<<1;
		b = b>>1;
	}
	printf("Multiplyed value is :%d\n",mult);
	return 0;
}
