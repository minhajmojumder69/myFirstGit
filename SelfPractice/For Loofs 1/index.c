#include<stdio.h>
int main(){
int x;
printf ("Enter a Number :");
scanf ("%d",&x);
for (int i = 1; i <= 10; i++) {
        printf(" %d" ,x * i);
    }
    
    return 0;
}