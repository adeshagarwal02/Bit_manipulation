#include<stdio.h>
int right_rotated(int n, int d)
{

	return((n>>d)|(n<<(32-d)));
}
int left_rotated(int n, int d)
{

	return((n<<d)|(n>>(32-d)));
}
int main()
{
	int n = 8;
	int d = 4;
	printf("left roteted:%d\n",left_rotated(n,d));
	printf("right roteted:%d\n",right_rotated(n,d));
	return 0;
}
