#include<stdio.h>
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("usage :.\a.out file \n");
		return 0;
	}
	FILE *fs=fopen(argv[1],"r");
	if(fs==NULL)
	{
		printf("Source file does not exit\n");
		return 0;
	}
	char ch;
	FILE *fd=fopen("data.txt","w");
	while((ch=getc(fs))!=-1)
	 {
if(ch!='\n')
{
		 if((ch!=' '))
		 {
		ch=ch^32;
		fputc(ch,fd);
		 }
		 else
		 
			 fputc(ch,fd);
}
else
fputc(ch,fd);

	}
	fclose(fs);
	fclose(fd);
}
