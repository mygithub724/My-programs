#include<stdio.h>
void fun(char *p);
int main()
{
	fun("abcd");
}
void fun(char *p)
{
	if(*p)
	{
		printf("%c",*p);
		fun(p+1);
	}
}
