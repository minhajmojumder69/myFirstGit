#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    float ar[n];
    float avg=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%f",&ar[i]);
        avg= avg + ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((avg/n)<ar[i])
        {
            count++;
        }
        
    }
    printf("Days with above average temperature: %d",count);
  
    return 0;
}