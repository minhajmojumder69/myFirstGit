#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int star= (n*2)-1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i-1; k++)
        {
            printf("  ");
        }
        for (int j = star; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
        star--;
       
    }
    return 0;
}