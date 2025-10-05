#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if (x==0)
    {
        printf ("Zero\n");
    }
    else if (x>=0)
    {
        printf ("Positive\n");
    }
    else if (x<=0)
    {
        printf ("Negative\n");
    }
    
    
    return 0;
}