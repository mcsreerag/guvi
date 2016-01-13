#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[30],*str2;
	cin>>str;
	int t=100;
	while(t)
	{
		str2=strfry(str);
		cout<<str2<<endl;
		t--;
	}
}
