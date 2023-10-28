#include<stdio.h> 
 /* with arguments and without return value */
 void product(int x,int y) 
 { 
     int multiplication ; 
     multiplication = x*y ; 
     printf(" The product is %d \n",multiplication);
 }
int main()
{  
    int a,b; 
    printf(" Enter the two numbers\n"); 
    scanf("%d %d",&a,&b); 

    product (a,b);
    return 0;
}
