#include<stdio.h>
int main()
{
    int n;
    printf("Enter the day number --->");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("sunday");
        break;
        default:
        printf("Wrong input");
        break;
    }
    return 0;
}