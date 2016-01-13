#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	/* code */
	char str[50],res[50];
	cin>>str;
	char last;
	int count;
	count=0;
	int k=0;
	int l=strlen(str);
	last=str[0];
	res[k]=str[0];
	count++;
	k++;
	for(int i=1;i<l;i++)
	{
		if(str[i]==last)
		{
			count++;
			last=str[i];
		}
		else
		{
			char c=(char)count;
			strcat(res,c);
			last=str[i];
			count=1;
			k++;
		}
	}
	res[k]='\0';
	cout<<res;
	return 0;
}