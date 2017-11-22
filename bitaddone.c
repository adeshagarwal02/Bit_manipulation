#include<stdio.h>
#include<stdlib.h>
int add(int x)
{
	int m =1;
	while(x & m)
	{
		x = x^m;
		m = m<<1;
	}
	x = x^m;
	return x;

}
int comp(int y)
{
	return (-(~y));
}
int main()
{
	int x,y;
	x = add(3);
	y = comp(11);
	printf("%d\n",x);
	printf("%d\n",y);
}
