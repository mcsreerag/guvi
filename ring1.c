#include<stdio.h>
#include<sys/io.h>
#include<unistd.h>
void main ( ) {
int base = 0 x378 ;
//−−Granting p e r m i s s i o n on p o r t s
if( ioperm ( base , 1 , 1 ) == −1){
printf(”\ nError g r a n t i n g p e r m i s s i o n . Terminating . . . \ n ” ) ;
return ;
} e l s e {}
int i ;
//−−o u t p u t t i n g powers o f 2 from 1 t o 1 6 , one i n e v e r y second
for ( i =1 ; ; i =1)
for ( ; i <16 ; sleep ( 1 ) , i = i <<1)
outb(i,base) ;
//−−Revoking p e r m i s s i o n g r a n t e d e a r l i e r
ioperm ( base , 1 , 0 ) ;
return ;
}