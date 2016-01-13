#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char const *argv[])
{
	char str1[50],str2[30];
	bool flag;
	cin>>str1;
	cin>>str2;
	int l1=strlen(str1);
	int l2=strlen(str2);
	int count=0;
	flag=false;
	for(int i=0;i<l1;i++)
	{
		if(str1[i]==str2[0])
		{
			for(int j=0;j<l2;j++)
			{
				if(str1[i]==str2[j])
				{
					i++;
					//count++;
					flag=true;
				}
				else
				{
					flag=false;
					break;
				}
			}
		}
	}
	if(flag)
		cout<<"Is a substring"<<endl;
	else
		cout<<"Not a substring"<<endl;
	return 0;
}
