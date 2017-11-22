#include<stdio.h>
int main()
{
	int a = 100;
	a = ((a & 0x0f)<<4 | (a & 0xf0)>>4);
       	printf("a = %d\n",a);	
	return 0;
}
