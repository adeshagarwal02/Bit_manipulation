#include <stdio.h>
int count_one(int n)
{
    int count =0;
    while(n)
    {
        n = n&(n-1);
        count++;
    }
    return count;
}
int count_zero(int n)
{
    int count =0;
    int k = n;
    while(k)
    {
         k = k>>1;
        count++;
    }
    k = 1<<(count-1);
    count =0;
    n = ~n & (k-1);
    while(n)
    {
        n = n&(n-1);
        count ++;
    }
    return count;
}

int main() {
	int n=10;
	printf("ones:%d\n",count_one(n));
	printf("zero:%d\n",count_zero(n));
	return 0;
}
