#include<bits/stdc++.h>
using namespace std;
int nthmagic(int n)
{
	int pow=1,ans=0;
	while(n)
	{
		pow=pow*5;
		if(n&1)
			ans+=pow;
		n>>=1;
	}
	return ans;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<nthmagic(n);
	return 0;
}
