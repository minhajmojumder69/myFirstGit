#include<stdio.h>
int main(){
    int n,star=1;
    scanf("%d",&n);
    int space= n-1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("* ");
        }
        printf("\n");
        star+=2;
        space--;
    }
    int star1= (n*2)-1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i-1; k++)
        {
            printf("  ");
        }
        for (int j = star1; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
        star1--;
       
    }
    return 0;
}