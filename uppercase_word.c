#include<stdio.h>
int main(int argc, char **argv)
{
	if(argc!=3)
	{
		printf("usage:./a.out file modifiedfile\n");
		return 0;
	}

	FILE *fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("file doesnt exit\n");
		return 0;
	}

	FILE *fd=fopen(argv[2],"w");
	int count=0;
	char ch;
	while((ch=fgetc(fp))!=-1)
			{
			count++;
			if(count==1)
			{
			 ch=ch^32;
			fputc(ch,fd);
			continue;
			}
			if((ch==' ')||(ch=='\n'))
				{
					ch=putc(ch,fd);
				ch=fgetc(fp);
				ch=ch^32;
				fputc(ch,fd);
				}
				else
				fputc(ch,fd);
				}
				
				fclose(fp);
				fclose(fd);

}
