#include<stdio.h> 
#include<string.h> 
int main(int argc, char const *argv[])
{
    char s[20] = {"AJIT PATIL"}; 
    int lenth =0; 
  for (int i = 0; s[i]!='\0'; i++)
  {
     
      lenth++;
  }
  printf("Finding length without using strlen function : %d",lenth);
  printf("\nFinding length with using strlen function : %d",strlen(s));  
    
    return 0;
}
