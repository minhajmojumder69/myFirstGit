#include<stdio.h>
int main(){
    char ar[1001];
    scanf("%s",ar);
    int lg= strlen(ar);
    int sp=1;
    for (int i = 0, j= lg-1; i <=j; i++,j--)
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