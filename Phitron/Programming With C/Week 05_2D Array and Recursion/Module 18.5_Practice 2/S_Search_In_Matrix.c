#include<stdio.h>
int main(){
    int r,c,sum=0;
    scanf("%d %d",&r,&c);
    int ar[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&ar[i][j]);
        }
        
    }
    int x;
    scanf("%d",&x);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (ar[i][j]==x)  
            {
                sum++;
            }
            
        }
    }

    if (sum==0)
    {
        printf("will take number\n");
    }
    else
    {
        printf("will not take number\n");
    }
    
    return 0;
}