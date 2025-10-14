#include<stdio.h>
int main(){
    int x,y,y1,m,d;
    scanf("%d",&x);
    y= x/365;
    y1= x%365;

    m= y1/30;
    d= y1%30;

    printf ("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y,m,d);
    return 0;
}