#include<stdio.h>
int rev(char *,int,int);
int main()
{
	int i,j,r;
	char s[20];
	printf("enter the string to reverse\n");
	scanf("%s",s);

	for(j=0;s[j];j++);
	r=rev(s,0,j-1);
	printf("after reverse the string %s\n",s);
}
int rev(char *s,int i,int j)
{
	
	int temp;
	if(i<j)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		rev(s,i+1,j-1);
	}
	 return (char *)s;
}
