#include<stdio.h>
int main(){
    int r,sum1=0,sum2=0;
    scanf("%d",&r);
    int ar[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d",&ar[i][j]);
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i==j)  //for primary diagonal
            {
                sum1= sum1+ ar[i][j];
            }
            
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i+j==r-1)  // For secondary diagonal.
            {
                sum2= sum2+ ar[i][j];
            }
            
        }
    }
    
    int diff= (sum1)-(sum2);
    if (diff<0)
    {
        diff*=(-1);
    }
    
    printf("%d",diff);

    return 0;
}