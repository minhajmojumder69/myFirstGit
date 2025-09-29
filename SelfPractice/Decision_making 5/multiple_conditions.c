#include<stdio.h>
int main()
{
    int x;
    printf ("Enter a number");
    scanf ("%d",&x);
    // if(99 < x  < 1000){
    //    printf ("its a three digit number");}
    // else{
    //     printf("its not a three digit number");
    // }

   if (x>99 && x<1000)
   {
    printf("its a three digit number");
   }
   else{
    printf("its not a three digit number");
   }

return 0;
}