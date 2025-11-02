#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int sp=1;
    for (int i = 0, j= n-1; i <=j; i++,j--)
    {
        if (ar[i]!=ar[j])
        {
            sp=0;
            break;
        }
        
    }
   if (sp==1)
   {
        printf("YES");
   }
   else{
        printf("NO");
   }
    
    return 0;
}