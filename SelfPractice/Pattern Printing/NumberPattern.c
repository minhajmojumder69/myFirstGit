#include<stdio.h>
int main(){
    int x,n;
    scanf("%d %d",&x,&n);
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}