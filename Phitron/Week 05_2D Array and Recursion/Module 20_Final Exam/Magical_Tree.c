#include<stdio.h>
int main(){
    int n,star=1;
    scanf("%d",&n);
    int m = 5;
    
    for (int i = 1; i <= n; i++)
    {
        if (i%2!=0)
        {
            m= m+1;
        }     
    }
    int space= m-1;
    for (int i = 1; i <= m; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
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