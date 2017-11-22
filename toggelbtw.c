#include<stdio.h>
int main()
{
	int n = 17;
	int r,l;
	printf("please enter the r and l value:\n");
	scanf("%d%d",&r,&l);
	r = (1<<(r-1))-1;
	l = (1<<l)-1;
	n = n^l^r;
	printf("%d\n",n);
	return 0;
}

