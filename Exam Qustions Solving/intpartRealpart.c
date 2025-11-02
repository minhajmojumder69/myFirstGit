#include<stdio.h>
int main(){
    float x,y;
    scanf("%f",&x);
    y=x;
    int ipart= x;
    float rpart= y-ipart;
    printf("%d\n",ipart);
    printf("%f\n",rpart);
    return 0;
}