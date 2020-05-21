#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void a(int n1,char argv[])
{
	char ch;
	FILE *fp;
	fp=fopen(argv,"r");
	while((ch=fgetc(fp))!=EOF)
	{
		n1++;
	}
	printf("×Ö·ûÊý:%d\n",n1);
	fclose(fp);
}
void b(int n2,char argv[])
{
	char ch;
	FILE *fp;
	fp=fopen(argv,"r");
	while((ch=fgetc(fp))!=EOF);
	{
		if(ch == ' ' || ch == '.' || ch == ',' || ch == '?' || ch == '!'||ch == '\n')
			n2++;
	}
	printf("µ¥´ÊÊý:%d\n",n2);
		fclose(fp);
}

int main(int argc,char* argv[])
{
	FILE *fp;
	char ch;
	int n1=0;
	int n2=1;
	if(strcmp(argv[1],"-c")==0){
		a(n1,argv[2]);
	}
	if(strcmp(argv[1],"-w")==-0){
		b(n2,argv[2]);
	}

	return 0; 
}
