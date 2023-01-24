#include<stdio.h>
int main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("usage:./a.out file1 file2 newfile\n");
		return 0;
	}

	FILE *fp1=fopen(argv[1],"r");

	if(fp1==NULL)
	{
		printf("file doesnt exit\n");
		return 0;
	}

	FILE *fp2=fopen(argv[2],"r");
	if(fp2==NULL)
	{
		printf("file doesnt exit\n");
		return 0;
	}

	FILE *fd=fopen(argv[3],"w");

char str[50]; char ch;
	while(((ch=fgetc(fp1))!=-1)||(ch=fgetc(fp2))!=-1)
	{
		fputc(ch,fd);
	}

fclose(fp1);
fclose(fp2);
}


