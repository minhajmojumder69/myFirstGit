#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for (int i = 1; i <= x; i++)
    {
        int a='A';
        for (int j = 1; j <= i; j++)
        {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    
    return 0;
}