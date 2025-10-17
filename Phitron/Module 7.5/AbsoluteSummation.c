#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum= sum+ a[i];
    }
    if (sum<0)
    {
        sum= sum*(-1);
        printf("%d\n",sum);
    }
    else
    {
        printf("%d\n",sum);
    }

    return 0;
}