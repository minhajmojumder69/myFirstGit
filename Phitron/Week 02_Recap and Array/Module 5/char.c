#include<stdio.h>
int main(){
    char x;
    int sum;
    scanf("%c",&x);
    if (x>=65 && x<=90)
    {
        sum = x+32;
        printf("%c",sum);
    }
    else if (x>=97 && x<=122)
    {
        sum = x-32;
        printf("%c",sum);
    }  
    return 0;
}