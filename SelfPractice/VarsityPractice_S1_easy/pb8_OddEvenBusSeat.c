#include<stdio.h>
int main(){
    int x;
    scanf ("%d",&x);
    if (x<=45 && x%2==0)
    {
        printf("Not a Window Seat\n");
    }
    else{
        printf ("Window Seat\n");
    }
    
    return 0;
}