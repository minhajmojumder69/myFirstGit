#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,g1,g2;
    scanf("%d %d %d",&a,&b,&c);
    g1=(a+b+abs(a-b))/2;
    g2=(g1+c+abs(g1-c))/2;
    printf ("%d eh o maior\n",g2);

    return 0;
}