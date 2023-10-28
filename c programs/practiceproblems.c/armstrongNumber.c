#include <stdio.h>
#include <math.h>
 
int main(){
    int num, digit, sum = 0, length = 0;
    int temp;
 
    printf("Enter a number \n");
    scanf("%d",&num);
 
    temp = num;  //Copying the original number for operation on it
 
    //Counting how many digits do temp (i.e num) has
    while(temp != 0){
        length++;
        temp = temp / 10;
    }
    //On counting digits, the value of temp becomes 0
    //So we again assign the fresh copy to it
    temp = num;
 
    while(temp != 0){
        digit = temp % 10;
        sum += floor(pow(digit,length));
        temp = temp / 10;
    }
 
 
    //Output Result
    if(sum == num)
        printf("%d is a Armstrong number \n",num);
    else
        printf("%d is Not an Armstrong number \n",num);
 
    return 0;
}


