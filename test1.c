#include<stdio.h>
#include<string.h>
main()
{
	int i,l;
	char str[]="Hello World";
	l=strlen(str);
	for(i=0;i<l/2;i++)
	{
		char temp=str[i];
		str[i]=str[l-1-i];
		str[l-1-i]=temp;
	}
	printf("%s\n",str);
}
