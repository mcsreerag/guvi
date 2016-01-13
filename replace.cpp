#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
	char str1[20];
	gets(str1);
	int count=0;
	int l=strlen(str1);
	cout<<str1<<l;
	for (int i = 0; i < l; i++)
	{
		if(str1[i]==' ')
			count++;
	}
	cout<<"count = "<<count<<endl;
	int newl=l+count*3;
	cout<<"newl= "<<newl<<endl;
	char newstring[newl];
	newstring[newl]='\0';
	for(int i=l-1;i>=0;i--)
	{
		if(str1[i]==' ')
		{
			newstring[newl-1]='0';
			newstring[newl-2]='2';
			newstring[newl-3]='%';
			newl=newl-3;
			i--;
		}
		newstring[newl-1]=str1[i];
		newl=newl-1;
	}

	cout<<newstring;
}