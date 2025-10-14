#include<stdio.h>
int main(){
    int x,h,h1,m,s;
    scanf("%d",&x);
    h= x/3600;
    h1= x%3600;

    m= h1/60;
    s= h1%60;

    printf ("%d:%d:%d\n", h,m,s);
    return 0;
}