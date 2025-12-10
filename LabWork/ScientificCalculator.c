#include<stdio.h>
#include<math.h>

int sum(int a,int b){
 printf("%d\n",a+b);
 return a+b;
}
int subtraction(int a,int b){
     if(a>b){
     printf("%d\n",a-b);
     return a-b;
}
    else{
     printf("%d\n",b-a);
     return b-a;
}
 return 0;
}
int Multiplication(int a,int b){
      printf("%d\n",a*b);
      return a*b;
}
float Division(int a,int b){
      if(b!=0){
      printf("%f\n",(float)a/b);
      return a/b;
}
}
double Power(int x,int y){
      double result=pow(x,y);
      printf("%lf\n",result);
      return result;
}
double Square_root(int x){
      printf("%.2lf\n",sqrt(x));
      return sqrt(x);
}
double Cube_root(int x){
      printf("%.2lf\n",cbrt(x));
      return cbrt(x);
}

double Exponential(int x){
      printf("%.2lf\n",exp(x));
      return exp(x);
}

int Modulo_OPeration(int a, int b){
     printf("%d\n",a%b);
     return a%b;
}
void Absolute_Value(int a){
      if(a>=0){
        printf("%d\n",a);
      }
      else if(a<0){
        printf("%d\n",(-(a)));
      }
}

long long int Factorial(int n){
       int fact=n;
       for(int i=1; i<n && n>1; i++){
       fact=fact*i;
}
printf("%d! = %lld\n",n,fact);
return fact;
}



int main(){
while(1){


  int O,O1,O2,d1,d2,d6,d7,d8,d9,a,b,x,y,l,n,fact;
  double A,X;

  printf(" For Arithmetic Press 1\n For Advance Math Functions Press 2\n For Modulo Operations Press 3\n For Absolute Value Press 4\n For Factorial Press 5\n For Trigonometric Functions Press 6\n");
  scanf("%d",&O);

switch(O){

case 1:
        printf(" For Addition Press 1\n For Subtraction Press 2\n For Multiplication Press 3\n For Division Press 4\n");
        scanf("%d",&O1);
             switch(O1){

            case 1:
                scanf("%d %d",&a,&b);
                sum(a,b);
                break;

            case 2:
                scanf("%d %d",&a,&b);
                subtraction(a,b);
                break;
            case 3:
                scanf("%d %d",&a,&b);
                Multiplication(a,b);
                break;

            case 4:
                scanf("%d %d",&a,&b);
                Division(a,b);
                break;
                  }



       break;

case 2:
         printf(" For Power /Square Root /Cube Root Press 1\n Logarithm 2\n Exponential 3\n");
         scanf("%d",&O2);
         switch(O2){
             case 1:
                     printf(" Power 1\n Square Root 2\n Exponential 3\n");
                     scanf("%d",&d1);
                       switch(d1){
                        case 1:
                            scanf("%d %d",&x,&y);
                            Power(x,y);
                            break;

                        case 2:
                            scanf("%d",&x);
                            Square_root(x);
                            break;

                        case 3:
                            scanf("%d",&x);
                            Cube_root(x);
                            break;

                       }
                   break;

             case 2:
                    printf(" Log base e /ln 1\n Log base Ten 2\n Log base two 3\n");
                    scanf("%d",&d2);
                      switch(d2){

                       case 1:
                           scanf("%d",&x);
                           printf("%.2lf\n",log(x));
                           break;

                       case 2:
                           scanf("%d",&x);
                           printf("%.2lf\n",log10(x));
                           break;

                       case 3:
                           scanf("%d",&x);
                           printf("%.2lf\n",log2(x));
                           break;

                      }
                  break;

             case 3:
                  scanf("%d",&x);
                  Exponential(x);
                  break;

            }

        break;

case 3:
       scanf("%d %d",&a,&b);
       Modulo_OPeration(a,b);
       break;

case 4:
       scanf("%d",&a);
       Absolute_Value(a);
       break;

case 5:
        scanf("%d",&n);
        Factorial(n);
        break;


case 6:
       printf(" Trigonomeric Ratio 1\n Inverse Trigonometric Functions 2\n Hyperbolic Functions 3\n");
       scanf("%d",&d6);
       switch(d6){
            case 1:
                 printf(" Sine 1\n Cosine 2\n Tangent 3\n");
                    scanf("%d",&d7);
                      switch(d7){
                        case 1:
                            scanf("%lf",&A);
                            X=A*(3.1416/180);
                            printf("%.2lf\n",sin(X));
                            break;

                        case 2:
                            scanf("%lf",&A);
                            X=A*(3.1416/180);
                            printf("%.2lf\n",cos(X));
                            break;

                        case 3:
                            scanf("%lf",&A);
                            X=A*(3.1416/180);
                            printf("%.2lf\n",tan(X));
                            break;

                           }
                      break;

            case 2:
                 printf(" Sine Inverse 1\n Cosine Inverse 2\n Tangent Inverse 3\n");
                    scanf("%d",&d8);
                      switch(d8){
                        case 1:
                            scanf("%lf",&A);
                            X=asin(A);
                            printf("%.2lf\n",X*(180/3.1416));
                            break;

                        case 2:
                            scanf("%lf",&A);
                            X=acos(A);
                            printf("%.2lf\n",X*(180/3.1416));
                            break;

                        case 3:
                            scanf("%lf",&A);
                            X=atan(A);
                            printf("%.2lf\n",X*(180/3.1416));
                            break;

                           }
                      break;


            case 3:
                 printf(" Sinh 1\n Cosh 2\n Tanh 3\n");
                    scanf("%d",&d9);
                      switch(d9){
                        case 1:
                            scanf("%lf",&A);

                            printf("%.2lf\n",sinh(A));
                            break;

                        case 2:
                            scanf("%lf",&A);

                            printf("%.2lf\n",cosh(A));
                            break;

                        case 3:
                            scanf("%lf",&A);

                            printf("%.2lf\n",tanh(A));
                            break;

                           }
                      break;

             }
         break;

      }


}
return 0;

}