#include<stdio.h>
int main(){
    int x;
    scanf ("%d",&x);
    if (x>=50)
    {
        printf("Discount Applicable\n");
    }
    else if (x<50)
    {
        printf ("No Discount\n");
    }
    
    return 0;
}