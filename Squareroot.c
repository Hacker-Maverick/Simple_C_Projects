#include <stdio.h>
double fn(double n, double a,double d);
int main(){
    double b,m=0.1;
    double n,a=1;
    printf("Enter a no. to find the squarerroot\n");
    scanf("%lf",&n);
    while(a*a<=n){
        a=a+1;
    }
    a=a-1;
    if(a*a==n){
        printf("%lf",a);
    }
    else{
        while(b*b!=n&&m>0.00000001){
        b= fn(n,a,m);
        a=b;
        m=m*0.1;
        }
        printf("%lf",b);
    }
    return 0;
}
double fn(double n, double a,double d){
    while(a*a<=n){
        a=a+d;
    }
    a=a-d;
    return a;
}