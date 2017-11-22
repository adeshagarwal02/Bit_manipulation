#include<stdio.h>
#include<stdlib.h>
int mult(int x)
{
	int y;
	y = (x<<1)+x+(x>>1);
	return y;
}
int main()
{
	printf("%d\n",mult(2));
	return 0;
}
