#include<stdio.h> 
int main(int argc, char const *argv[])
{
    int no,var,re,binary=0,i=1; 
    printf("Enter the Decimal number\n "); 
    scanf("%d",&no); 

    var=no; 
     
   while (no!=0)
   {
       re =no%2; 
       no=no/2; 
       binary=binary +(re*i); 
       i=i*10;
   }
   printf("Binary Equivalent of %d is %d",var,binary);
    return 0;
}