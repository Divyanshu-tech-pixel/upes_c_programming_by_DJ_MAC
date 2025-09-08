#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the charater --->");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='z'){
        printf("Charater is upper case");
    }
    else if(ch>='a'&&ch<='z'){
        printf("charater is lower case");
    }
    else if(ch>='0'&&ch<='9'){
        printf("Entered character is digit");
    }
    else{
        printf("Entered charater is special character");
    }
    return 0;
}