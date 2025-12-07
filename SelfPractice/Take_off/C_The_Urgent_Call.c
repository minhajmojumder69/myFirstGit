#include<stdio.h>
int main()
{
    int p,i,e,t;
    int chrg;
    int fx=30;
    scanf("%d %d %d %d",&p,&i,&e,&t);
    
    if (t > i)
    {
        chrg= t-i;
        
        while (chrg>0)
        {
           p+=e;
           chrg-=30; 
        }
        
        
        printf("%d\n",p);
        
    }
    else
    {
        printf("%d\n",p);
    }
    
    return 0;
}