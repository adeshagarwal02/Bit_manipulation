/* Given an array of size n,
 * the goal is to find out the smallest number 
 * that is repeated exactly ‘k’ times 
 * where k > 0?
*/
#include<stdio.h>
#include<stdlib.h>
int *getArray();
int find_kt(int *,int);
int main()
{
	int k;
	int *a;
	printf("Enter the value of k:");
	scanf("%d",&k);
	if(k <= 0)
	{
		printf("wrong input k should be greater than 0 and less than 10\n");
		return 0;
	}
	printf("Please enter the value into array:\n");
	a = getArray();
	k = find_kt(a,k);
	if(k == 0)
	{
		printf("No element\n");
	}
	else
		printf("value :%d\n",k);
	free(a);
	return 0;
}
int *getArray()
{
	int i,n;
	int *a;
	a = (int *)calloc(10,sizeof(int));
	for(i=0;i<10;i++)
	{
		printf(">>>>");
		scanf("%d",&n);
		*(a+i) = n;
	}
	return a;
}
int find_kt(int *a,int k)
{
	int i,j,count,kt=0;
	for(i=0;i<9;i++)
	{
		count = 0;
		for(j=0;j<10;j++)
		{
			if(*(a+i)==*(a+j))
				count++;
		}
		if(count == k)
		{
			if(i == 0)
				kt = *(a+i);
			else if(kt > *(a+i))
				kt = *(a+i);
		}

	}

	return kt;
}
