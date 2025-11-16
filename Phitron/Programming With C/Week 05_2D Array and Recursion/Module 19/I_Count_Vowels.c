#include<stdio.h>
int rec(char ar[],int i)
{
    if (ar[i]=='\0')
    {
        return 0;
    }
    int sum = rec(ar,i+1);
    if (ar[i]=='a' || ar[i]=='e' || ar[i]=='i' || ar[i]=='o' || ar[i]=='u' || ar[i]=='A' || ar[i]=='E' || ar[i]=='I' || ar[i]=='O' || ar[i]=='U')
    {
        return sum+1;
    }
    else
    {
        return sum;
    }
    

}
int main(){
    char ar[201];
    fgets(ar,201,stdin);
    int ans = rec(ar,0);
    printf("%d",ans);
    return 0;
}