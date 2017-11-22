#include<stdio.h>
typedef union test
{
	short i;
	char j;

}test;
int main()
{
	test en;
	en.i = 1;
	if(en.j)
		printf("little endian\n");
	else
		printf("big endian\n");
}
