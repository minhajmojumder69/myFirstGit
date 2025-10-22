#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sp;
    sp = a;
    a=b;
    b=sp;
    printf("a = %d\nb = %d",a,b);
    return 0;
}