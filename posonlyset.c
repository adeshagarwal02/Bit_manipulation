#include<stdio.h>
int position(int n)
{
	int count =0;
	if(!(n && !(n & (n-1))))
		return -1;
	else 
	{
		while(n)
		{
			n = n>>1;
			count ++;
		}
	}
	return count;
}
int main()
{
	int n,x;
	printf("please enter the number:");
	scanf("%d",&n);
	x = position(n);
	(x == -1)?printf("Invalid value given\n"):printf("position is:%d\n",x);
	return 0;
}
