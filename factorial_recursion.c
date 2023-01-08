#include<stdio.h>
int fact(int,int);
int main()
{
	int n,f;
	printf("Enter the n value\n");
	scanf("%d",&n);

	f = fact(n,1);
	printf("f = %d\n",f);
}
int fact(int n,int f)
{
	if(n!=0) //4!=0,3!=0,2!=0,1!=0,0!=0
	{
		f = f*n; //f=1*4,f=4*3,f=12*2,f=24*1  
		n = n-1; //n=3,n=2,n=1,n=0 
		return fact(n,f);
	}
	else
		return f;
}
