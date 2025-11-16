#include<stdio.h>
int main(){
    int x,multi;
    scanf ("%d",&x);
    for (int i = 1; i <= 12; i++)
    {
        multi= x*i;
        printf("%d * %d = %d\n",x,i,multi);
    }
    
    return 0;
}