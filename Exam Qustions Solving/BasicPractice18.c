#include<stdio.h>
int main(){
    int days,year,y1,month,m1;
    scanf("%d",&days);
    year= days/365;
    y1= days%365;
    month= y1/30;
    m1= y1%30;
    days= m1;
    printf("Year =%d\nMonth =%d\nDay =%d\n",year,month,days);
    return 0;
}