#include<stdio.h>
#include<unistd.h>
#include<sys/io.h>
void main()
{
	int base=0x378,i;
	if(ioperm(base,1,1)==-1)
	{
		printf("Permission denied!!! Error\n");
		return;
	}
	else{}
	
		while(1){

			for ( i = 0; i < 256; i=i*2)
			{
				if(i==0)
					i=1;
				outb(i,base);
				sleep(1);
				printf("%d\n",i);
			}	
		}

			/*for ( i =1 ; ; i =1)
				for ( ; i <16 ; sleep ( 1 ) , i = i <<1)
				{
					outb(i,base) ;
					printf("%d\n",i);
				}*/
	ioperm(base,1,0);
	return;
}