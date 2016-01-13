#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
	/* code */
	char str1[50],str2[50];
	cin>>str1;
	cin>>str2;
	int l1=strlen(str1);
	int l2=strlen(str2);
	if(l1!=l2)
	{
		cout<<"Not a permutation"<<endl;
		exit(0);
	}
	for(int i=0;i<l1;i++)
	{
		for(int j=0;j<l1;j++)
		{
			if(str1[i]>str1[j])
			{
				char temp=str1[i];
				str1[i]=str1[j];
				str1[j]=temp;
			}
		}
	}
	for(int i=0;i<l2;i++)
	{
		for(int j=0;j<l2;j++)
		{
			if(str2[i]>str2[j])
			{
				char temp=str2[i];
				str2[i]=str2[j];
				str2[j]=temp;
			}
		}
	}
	int c=strcmp(str1,str2);
	if(c==0)
		cout<<"Is a permutation"<<endl;
	else
		cout<<"Not a permutation"<<endl;
	return 0;
}