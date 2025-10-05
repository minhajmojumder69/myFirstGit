#include<stdio.h>
int main(){
    double t,s,d,fuel;
    scanf ("%lf %lf",&t,&s);
    d = t*s;
    fuel = d/12;
    printf ("%.3lf\n",fuel);
    return 0;
}