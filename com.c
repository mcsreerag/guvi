#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	char s[100],string[100];
	int com=0;
	system("dmesg | grep wlan0 > out.txt");
	FILE *fp;
	fp=fopen("out.txt","r");
	while(!feof(fp))
	{
		fscanf(fp,"%s",string);
		if(strcmp(string,"[ 1118.190502]")==0)
		{
			printf("here\n");
			fscanf(fp,"%s",s);
			printf("COM ports %d ADDRESS is %s,\n",com,s);
		}
		//	printf("%s\n",string );
	}
	fclose(fp);
	return 0;
}