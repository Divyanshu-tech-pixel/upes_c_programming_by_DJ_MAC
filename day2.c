/*write a program to input number and display their sum,difference,product and quotient*/
#include<stdio.h>
int main()
{
    float x,i;
    printf("Enter two number");
    scanf("%f %f ",&x,&i);
    printf("sum is --> %f\n",x+i);
    printf("difference is --> %f\n",x-i);
    printf("multiplication is --> %f\n",x*i);
    printf("division is --> %f\n",x/i);
    return 0;
}