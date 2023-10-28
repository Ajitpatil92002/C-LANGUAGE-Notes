#include<stdio.h> 
#include<string.h> 
 int main(int argc, char const *argv[])
 {
     char name[20]= {"AJIT "}; 
     char surname[20]={"PATIL"}; 
     char l1 = strlen(name); 
     char l2 = strlen(surname);
     for (int i = 0; i<= l2; i++)
     {
         name[i+l1] = surname[i];
     }
     
      printf("%s",name);
     return 0;
 }
 