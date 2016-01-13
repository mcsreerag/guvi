#include<iostream>
#include<stdlib.h>
using namespace std;
void toh(int n,int a,int b,int c)
{
	if (n>0)
	{
		toh(n-1,a,c,b);
		cout<<"Disk "<<n<<" moved from "<<a<<" to "<<c<<endl;
		toh(n-1,b,a,c);/* code */
	}
	
}
int main(int argc, char const *argv[])
{
	int n;
	int a=1,b=2,c=3;
	cout<<"Enter the number of disks : ";
	cin>>n;
	toh(n,a,b,c);
	return 0;
}