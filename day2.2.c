//program to calculate circumference of cicle and its area
#include<stdio.h>
int main()
{
    float radius;
    printf("Enter the raduis of circle -->");
    scanf("%f",&radius);
    printf("Circumference is %f -->",2*3.14*radius);
    printf("Area is %f -->",3.14*radius*radius);
    return 0;
}