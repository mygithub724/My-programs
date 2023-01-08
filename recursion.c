#include<stdio.h>
void fun(int n);
int main()
{
	printf("In main(),before fun()\n");
	fun(3);
	printf("\nIn main(),after fun()\n");
}
void fun(int n) 
{
	if(n>0)
	{
		fun(--n); 
		printf("%d  ",n); 
	}

	printf("\nHello...");
}
