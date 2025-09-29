#include<stdio.h>
int main()
{
    int x;
    printf ("Enter a number");
    scanf ("%d",&x);

   if (x%3==0 || x%5==0)
   {
    printf("the number is disivle");
   }
   else{
    printf("the number is not disivle");
   }

return 0;
}