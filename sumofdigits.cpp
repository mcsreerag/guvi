#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n1,n2;
	int sum=0;
	cin>>n1>>n2;
	for(int i=n1;i<=n2;i++)
	{
		if(i>9)
		{
			int j=i;
			while(j>0)
			{
				int n=j%10;
				sum=sum+n;
				j=j/10;	
			}
		}
			else
				sum=sum+i;
	}
	cout<<sum;
	return 0;
}