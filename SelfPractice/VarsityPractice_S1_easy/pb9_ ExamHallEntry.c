 #include<stdio.h>
int main(){
    int x;
    scanf ("%d",&x);
    if (x==0)
    {
        printf(" Entry Denied\n");
    }
    else if (x>0)
    {
         printf(" Entry Allowed\n");
    }
    
    return 0;
}