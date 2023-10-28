#include<stdio.h>  
 int main()
 {  
     int num,i; 
     printf("Enter the no. \n") ;
     scanf("%d",&num);

     for ( i = 1; i <= num; i++)
     {
        printf("The Number is %d ANd the cube of it is :%d\n",i,i*i*i); 
     }
     return 0 ;
 }  

/*int main()
 {
    int i,ctr;
    printf("Input number of terms : ");
    scanf("%d", &ctr);
    for(i=1;i<=ctr;i++)
    {
	 printf("Number is : %d and cube of the %d is :%d \n",i,i, (i*i*i));     
    } 
    return 0;
 }*/


/*int main()
{ 
    int a; 
    scanf("%d",&a);
    printf("%d\n",cube(a)); 

    return 0;
}*/
