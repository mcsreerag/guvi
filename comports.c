#include<stdio.h>
//#include<conio.h>
//#include<dos.h>
void main()
{
	unsigned int *ptraddr;
	unsigned int address;
	int a;
	ptraddr=(unsigned int *)0x00000400;
	for(a=0;a<4;a++)
	{
		address=*ptraddr;
		if(address==0)
		{
			printf("No ports dound for COM\n");
		}
		else
			printf("Address assigned to COM %d is %X\n",a+1,address);
		*ptraddr++;
	}
}