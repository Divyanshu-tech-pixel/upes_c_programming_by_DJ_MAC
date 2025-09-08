#include<stdio.h>
int main()
{
    float x,y,z;
    printf("Enter all three sides of triangle -->\n");
    scanf("%f %f %f",&x,&y,&z);
    if(x==y&&y==z){
        printf("Triangle is equilateral");
    }
    else if(x==y||y==z){
        printf("Triangle is isosceles");
    }
    else{
        printf("Triangle is scalene");
    }

    return 0;
}