#include<stdio.h>
#include<unistd.h>
#include<time.h>
void function(void);
int main()
{
	double time;
	clock_t t;
	t = clock();
	function();
	t = clock() -t ;
	time = ((double)t)/CLOCKS_PER_SEC;
	printf("function tooks %f seconds\n",time);
	return 0;
}
void function(void)
{
	printf("Hello Adesh\n");
	sleep(5);
}

