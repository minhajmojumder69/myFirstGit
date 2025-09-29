#include<stdio.h>
int main()
{
 int a,b,c,d;
    printf ("Enter 1st number");
    scanf ("%d",&a);
    printf ("Enter 2nd number");
    scanf ("%d",&b);
    printf ("Enter 3rd number");
    scanf ("%d",&c);
    printf ("Enter 4th number");
    scanf ("%d",&d);
    if (a>b && a>c && a>d)
    {
        printf("%d is the greatest Number",a);
    }
    if (b>a && b>c && b>d)
    {
        printf("%d is the greatest Number",b);
    }
    if (c>b && c>a && c>d)
    {
        printf("%d is the greatest Number",c);
    }
    if (d>b && d>c && d>a)
    {
        printf("%d is the greatest Number",a);
    }
    

    return 0;
}