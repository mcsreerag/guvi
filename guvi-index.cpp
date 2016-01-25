#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *arr;
	arr=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]==i)
		{
			cout<<i<<endl;
			exit(0);
		}
	}
	return 0;

}