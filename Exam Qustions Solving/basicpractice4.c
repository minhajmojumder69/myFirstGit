#include<stdio.h>
int main(){
    int a;
    float b;
    double c;
    char ch;
    // scanf("%d",&a);
    // scanf("%f",&b);
    // scanf("%lf",&c);
    scanf(" %c",&ch);
    ch+=32;
    // printf ("Integer value : %d\n",a);
    // printf ("Float value : %.3f\n",b);
    // printf ("Double value : %lf\n",c);
    printf ("Character value : %c\n",ch);
    return 0;
}