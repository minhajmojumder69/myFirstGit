#include<stdio.h>
int main(){
    int n,star=1;
    scanf("%d",&n);
    int space= 3;
    for (int i = 1; i <= 7; i++)
    {
        for (int k = 1; k <= 6; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n+10 ; j++)
        {
            printf("*");
        }
        printf("\n");
        star+=2;
        space--;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}