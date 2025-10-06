#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(-1000<=N && N <=1000){
        if(N==0){
            printf ("Zero");
        }
        else{
            printf("Non Zero");
        }
    }
    return 0;
}