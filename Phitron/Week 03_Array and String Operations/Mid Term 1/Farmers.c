#include<stdio.h>
int main(){
    int t,m1,m2,d,exd;
    scanf("%d",&t);
    int ar[t];
   for (int i = 0; i < t; i++)
   {
        scanf("%d %d %d",&m1,&m2,&d);
        exd= d - ((m1*d)/(m1+m2));
        ar[i]= exd;
   }
   for (int i = 0; i < t; i++)
   {
        printf("%d\n",ar[i]);
   }
   
    return 0;
}