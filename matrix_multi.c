#include<stdio.h>
int main()
{
	int a[3][3]={10,20,30,40,50,60,70,80,90};
	int b[3][3]={1,2,3,4,5,6,7,8,9};
	int c[3][3]={};
	int i,j,k;
	{
	for(i=0;i<3;i++)
		for(k=0;k<3;k++)
			for(j=0;j<3;j++)
			{
				c[i][k]=c[i][k]+(a[i][j]*b[j][k]);

			}			}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
	printf("\n");
	}
}
