#include <stdio.h>
int main()
{
    int a = 10, b = 10, c = 20;
    int temp1 = a + b * c; /* a+10X20----> a+200---->10+200 =210 */
    printf("temp1 = %d\n", temp1);

    int temp2 = (a + b) * c; /* (10+10)Xc----> (20)X20=400 */
    printf("\ntemp2 = %d\n", temp2);

    int temp4 = a + b - c; /* 10+10-c--->20-20 =0*/
    printf("\ntemp4 =%d\n", temp4);

    int temp5 = a * b / c; /* 10X10/c---->100/20=5*/
    printf("\ntemp5 = %d\n", temp5);

    int temp3 = a = b = c; /* c=20---> 20=b--->20=a--->a=20*/
    printf("\ntemp3 = %d\n", temp3);
    return 0;
}
