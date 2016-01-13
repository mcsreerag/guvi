#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
char dict[50][30];
int n;
bool checkword(char word[])
{
	for(int k=0;k<n;k++)
		{
			int c=strcmp(word,dict[k]);
			if(c==0)
			{
				cout<<"Match found"<<endl;
				return true;
			}
		}
		return false;
}
int main()
{
	char str[50],word[15];
	cout<<"Enter the sentence: ";
	gets(str);
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>dict[i];
	cout<<"Dictionary :\n";
	for (int i = 0; i < n; ++i)
	{
		cout<<dict[i]<<endl;
	}
	int l=strlen(str);
	int j=0;
	int i=0;
	bool flag=true;
	while(i<l&&flag)
	{
		j=0;
		while(str[i]!=' ')
		{
			word[j]=str[i];
			j++;
			i++;
		}
		word[j]='\0';
		i++;
		cout<<"word = "<<word<<endl;
		bool c=checkword(word);
		if(c)
			flag=true;
		else
			flag=false;
	}
	if(flag)
		cout<<"Sentence can be formed"<<endl;
	else
		cout<<"Impossible sentence"<<endl;
	return 0;
}