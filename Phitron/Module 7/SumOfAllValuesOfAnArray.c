#include<stdio.h>
int main(){
     int n;
     int sum=0;
     scanf("%d",&n);
     int nm[n];
     for (int i = 0; i < n; i++)
     {
        scanf("%d",&nm[i]);
        sum= sum + nm[i];
     }
     printf("%d ",sum);
     
    return 0;
}