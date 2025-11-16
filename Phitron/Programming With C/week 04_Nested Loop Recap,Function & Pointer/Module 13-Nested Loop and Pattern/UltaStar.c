#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int space=n-1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i-1; k++)
        {
            printf(" ");
        }
        for (int j = n; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}