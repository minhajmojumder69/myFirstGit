#include<stdio.h>
int main(){
    int x,i;
    scanf("%d",&x);
    if (x>0)
    {
        for (i = 1; i <=x; i++)
        {
            printf("%d ",i);
        }
    }
    else
    {
         for ( i = x; i <=0 ; i++)
         {
            printf("%d ",i);
         }
    }
    return 0;
}