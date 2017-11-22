#include<stdio.h>
#include<stdlib.h>
int getopp(int n1,int n2)
{
	int x;
	x = n1 ^ n2;	
	return x;
}
int main()
{
	int n1,n2;
	printf("please enter the two integer number:\n");
	scanf("%d%d",&n1,&n2);
	if(getopp(n1,n2)<0)
		printf("They are opposite\n");
	else
		printf("They are not opposite\n");
	return 0;
}
