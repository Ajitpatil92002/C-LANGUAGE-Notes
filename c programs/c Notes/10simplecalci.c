#include <stdio.h>
/*  with arguments and with return value */

int sum(int x, int y) //declaration the function
{
    return x + y;
}

/* without argument and without return value */

void division()
{
    float x, y;
    printf("Enter the numerator no.");
    scanf("%f", &x);
    printf("Enter the denomenator no."); 
    scanf("%f",&y);

    printf("%f ", x / y);
}

/*without arguments and with return value */
int subtration()
{
    int x, y, z;
    printf(" Enter the no.1 :\t");
    scanf("%d", &x);
    printf(" Enter the no.2 :\t");
    scanf("%d", &y);
    z = x - y;

    return z;
}

/* with arguments and without return value */
void product(int x, int y)
{
    int multiplication;
    multiplication = x * y;
    printf(" The product is %d \n", multiplication);
}

int main2()
{ 
    int a,b;
    int func;
    printf(" slect which function you want\n");
    printf("1.sum function\n 2.division function\n 3.subtraction function\n 4.product fuction\n");
    scanf("%d", &func);

    switch (func)
    {
    case 1:
        
        printf("enter the two value which you want add \n");
        scanf("%d %d", &a, &b);

        printf("The sum is %d", sum(a, b));
        break;

    case 2:
        division();
        break;

    case 3:
        printf(" The sum is %d", subtration());
        break;

    case 4:
        
        printf(" Enter the two numbers to find ther product\n");
        scanf("%d %d", &a, &b);
        product(a, b);
        break;

    default:
        printf("You not slected any fuction");
        break;
    }

    return 0;
}
