#include<stdio.h>
int main(int argc,char **argv)
{
	if(argc<3)
	{
		printf("usage:.\a.out source dest\n");
		return 0;
	}

	FILE *fs=fopen(argv[1],"r");
	if(fs==NULL)
	{
		printf("file doesnot exist\n");
		return 0;
	}

	char ch; int i;
	for(i=2;i<argc;i++)
	{
		FILE *fd=fopen(argv[i],"w");

		while((ch=fgetc(fs))!=-1)
			fputc(ch,fd);

		printf("\n");
		fclose(fd);
		rewind(fs);
	}
}
