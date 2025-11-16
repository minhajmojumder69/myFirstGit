#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d",&n);
            int ar[n];
        int ars[n];
        int arc[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&ar[i]);
        }
        for (int i = 0; i < n; i++)
        {
            ars[i]=ar[i];
        }
        for (int i = 0; i< n-1 ; i++)
        {
            for (int j = i+1; j <n; j++)
            {
                if (ars[i]>ars[j])
                {
                    int temp = ars[j];
                    ars[j] = ars[i];
                    ars[i] = temp;
                }
            }
        
        }
        for (int i = 0; i < n; i++)
        {
            arc[i]= (ar[i]-ars[i]);
            if (arc[i]<0)
            {
                arc[i] *= (-1);
                printf("%d ",arc[i]);
            }
            else
            {
                printf("%d ",arc[i]);
            }
        
        }
        printf("\n");
    }
    
    return 0;
}
