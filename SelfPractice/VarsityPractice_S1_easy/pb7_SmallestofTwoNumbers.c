#include<stdio.h>
int main(){
    int x,y;
    scanf ("%d %d",&x, &y);
    if (x<y)
    {
        printf("First is younger\n");
    }
    else if (x>y)
    {
        printf ("Second is younger\n");
    }
    
    
    return 0;
}