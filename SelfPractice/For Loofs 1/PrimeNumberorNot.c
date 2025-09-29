#include<stdio.h>
int main (){
    int x;
    printf ("Enter a number ");
    scanf ("%d",&x);
    int a=0;
    for (int i = 2; i <=x-1; i++)
    {

        if (x%i==0)
        {
             a=1;
            break;
        }
        
    }
    if (x==1)
        {
            printf ("Neither Prime nor Composite\n");
        }
    else if (a==0)
    {
        printf("prime number\n");
    }
    else{
            printf("Not a prime number\n");
           
        }
    
    return 0;
}