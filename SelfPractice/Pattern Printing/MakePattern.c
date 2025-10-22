#include<stdio.h>
int main(){
    int x,n;
    scanf("%d %d",&x,&n);
    for (int i = 0; i < x; i++)
    {
        for (int j = 1; j <= n ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}