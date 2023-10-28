#include <stdio.h>
void arrrev(int arr[])
{
    for (int i = 0; i < 5 / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[10 - i];
        arr[10 - i] = temp;
    }
}
int main()
{
  //char arr[]={"AJIT PATIL"};
  
   int arr[]={1,2,3,4,5}; 
 
   printf("berfore reversing\n"); 
    for (int i = 0; i < 11; i++)
   {
      printf("%d",arr[i]) ;
   } 
   printf("\nafter reversing\n");
   arrrev(arr); 
   for (int i = 0; i < 11; i++)
   {
      printf("%d",arr[i]) ;
   }
    return 0;
}
