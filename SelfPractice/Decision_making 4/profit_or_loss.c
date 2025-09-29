#include<stdio.h>
int main()
{
    int cp;
    printf ("Enter Cost Price");
    scanf ("%d",&cp);
    int sp;
    printf ("Enter Selling Price");
    scanf ("%d",&sp);
    int pf= sp-cp;
    int ls= cp-sp;
    if (cp<sp)
    {
       printf("Profit; %d",pf);
    }
   if (cp>sp)
   {
    printf ("Loss : %d",ls);
   }
   if (cp==sp)
   {
    printf ("No Profit,No loss");
   }
   


return 0;
}