#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if (0<=x && x< 40)
    {
        printf ("Fail\n");
    }
    else if (x>= 40 && x<=100)
    {
        printf ("Pass\n");
    }
    
    
    return 0;
}