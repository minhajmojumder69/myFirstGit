#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int max= ar[0];
    int min=ar[0];
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
        {
            min= ar[i];
        } 
        if (ar[i] > max)
        {
            max= ar[i];
        } 
    }
   int n1= min;
   int n2= max;
   int c;
   while (min != 0)
   {
        c= max % min;
        max = min;
        min = c;

   }
   int gcd= max;
   int lcm= (n1*n2)/gcd;
    printf("LCM : %d\n",lcm);
    printf("GCD : %d\n", gcd);

    return 0;
}