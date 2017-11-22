#include<stdio.h>
int findxor(int x)
{
	if(x%4 == 0)
		return x;
	if(x%4 == 1)
		return 1;
	if(x%4 == 2)
		return x+1;
	if(x%4 == 3)
		return 0;

}
int main()
{

	printf("%d\n",findxor(12));
	return 0;
}

