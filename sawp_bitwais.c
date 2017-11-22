#include<stdio.h>
int main()
{
	int a = 5 , b = 6;
	b = b^a;
	a = a^b;
	b = b^a;
	printf("a = %d , b=%d\n",a,b);
	return 0;
}
