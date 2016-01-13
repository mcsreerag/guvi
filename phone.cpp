#include<stdio.h>
#include<stdlib.h>
FILE *fp;
int main()
{
	fp=fopen("num.txt","w");
	int i=9,j=5,k=6,l=2;
	for(int m=0;m<=9;m++)
		for(int n=0;n<=9;n++)
			for(int o=0;o<=9;o++)
				for(int p=0;p<=9;p++)
					for(int q=0;q<=9;q++)
						for(int r=0;r<=9;r++)
							fprintf(fp,"%d%d%d%d%d%d%d%d%d%d",i,j,k,l,m,n,o,p,q,r);
				
	return 0;
}