#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for (int i = 1; i <=x; i++)
    {
        if (i%2!=0)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ",j);
        
            }
        }
        else
        {
            int a='A';
            for (int j = 1; j <= i; j++)
            {
                printf("%c ",a);
                a++;
            } 
        }
        printf("\n");
    }
    
    return 0;
}