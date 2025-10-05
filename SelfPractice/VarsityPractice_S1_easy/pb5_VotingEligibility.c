#include<stdio.h>
int main(){
    int x;
    scanf ("%d",&x);
    if (x>=18)
    {
        printf("Eligible to Vote\n");
    }
    else{
        printf ("Not Eligible\n");
    }
    
    return 0;
}