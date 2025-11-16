#include<stdio.h>
int main(){
    int n,star=1;
    scanf("%d",&n);
    int space= n-1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("* ");
        }
        printf("\n");
        star++;
        space--;
    }
    return 0;
}