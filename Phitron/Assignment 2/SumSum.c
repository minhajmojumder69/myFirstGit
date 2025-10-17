#include<stdio.h>
int main(){
    int x,i;
    int sum1= 0,sum2= 0;
    scanf("%d",&x);
    int ar[x];
    for ( i = 0; i < x; i++)
    {
        scanf("%d",&ar[i]);
        if (ar[i]>0)
    {
        sum1= sum1 + ar[i];  
    }
    if (ar[i]<0)
    {
        sum2= sum2 + ar[i];
        
    }
    }

    printf("%d %d",sum1,sum2);
    return 0;
}