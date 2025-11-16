#include<stdio.h>
int main(){
    int x,y;
    scanf("%d",&x);
    y = x/1000;
    if (y%2==0)
    {
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}