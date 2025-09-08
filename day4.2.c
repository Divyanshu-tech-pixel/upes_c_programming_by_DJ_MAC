// sum of first n natural number
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Till which number you want to print sum -->");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ 
        sum += i;
    }
    printf("Sum is %d",sum);
    return 0;
}