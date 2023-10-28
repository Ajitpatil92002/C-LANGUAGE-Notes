#include<stdio.h>
#include<strings.h>
int main()
{
  int n,no; 
  printf("Enter the no. of rows : "); 
  scanf("%d",&no);
  for (int row = 0; row < no; row++)
  {
      for(int space = 0 ; space <(no -row);space++)
      { 
          printf(" ");
      }
      n =1 ;
      for (int col = 0; col <= row; col++)
      {
          printf("%d ",n);
          n = n * (row - col)/(col + 1); 
          //printf("%d = %d *(%d - %d) / (%d + %d)",n,n,row,col,col,1);
      }
      printf("\n");
  }
  
    return 0;
}