#include<stdio.h>
#define own_size(x) (char *)(&x +1) - (char *)(&x)
int main()
{
	int x[5];
	printf("%d\n",own_size(x));
	return 0;
}
