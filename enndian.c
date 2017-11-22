#include<stdio.h>
int main()
{
	unsigned int i = 0x8000;
	char * a = (char *)&i;
	if(*a)
		printf("Big  endian\n");
	else
		printf("littel endian\n");
	return 0;


}
