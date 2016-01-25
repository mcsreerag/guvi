#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n;
	int *arr;
	arr=(int *)malloc(sizeof(int)*n);
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cin>>t;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n-i;j++)
		{
			if(arr[i]+arr[j]==t)
			{
				cout<<"target Sum obtained : "<<(arr[i]+arr[j])<<endl;
				exit(0);
			}
		}
	}
	cout<<"Target not found"<<endl;
	return 0;
}