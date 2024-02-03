#include<stdio.h>
void num(long int n){
    char ch[100][100]={{""},{"one"},{"two"},{"three"},{"four"},{"five"},{"six"},{"seven"},{"eight"},{"nine"},{"ten"},{"eleven"},{"twelve"},{"thirteen"},{"fourteen"},{"fifteen"},{"sixteen"},{"seventeen"},{"eighteen"},{"nineteen"},{"twenty"},{"thirty"},{"fourty"},{"fifty"},{"sixty"},{"seventy"},{"eighty"},{"ninty"}};
    if(n<=20){
        printf("%s ",ch[n]);
    }
    else{
        printf("%s %s ",ch[n/10+18],ch[n%10]);
    }
}
void main(){
    long int n,n2=1;double n1;
    printf("Enter any no.");
    scanf("%lf",&n1);
    n = (int)n1;
    if(n==0)
    printf("Zero ");
    else{
        if(n>0 && n<100)
        num(n);
        else if(n>=100 && n<1000){
            num(n/100);
            printf("hundred ");
            num(n-((n/100)*100));
        }
        else if(n>=1000 && n<100000){
            num(n/1000);
            printf("thousand ");
            int b=n/100-((n/1000)*10);
            num(b);
            if((n/100)%10!=0){
            printf("hundred ");}
            num(n-((n/100)*100));
        }
        else if(n>=100000 && n<10000000){
            num(n/100000);
            printf("lakh ");
            n=n%100000;
            num(n/1000);
            if((n/1000)%100!=0){
            printf("thousand ");}
            n=n%1000;
            num(n/100);
            if((n/100)%10!=0){
            printf("hundred ");}
            num(n-((n/100)*100));
        }
        else if(n>=10000000 && n<10000000000){
            num(n/10000000);
            printf("crore ");
            n=n%10000000;
            num(n/100000);
            if((n/100000)%10000!=0){
            printf("lakh ");}
            n=n%100000;
            num(n/1000);
            if((n/1000)%100!=0){
            printf("thousand ");}
            n=n%1000;
            num(n/100);
            if((n/100)%10!=0){
            printf("hundred ");}
            num(n-((n/100)*100));
        }
    }
    n = (int)n1;
    n1=n1-n;
    n1=n1+0.0000009;
    int n3=(int)(n1*1000000),n4=0;
    while(n3!=0){
        n4=n4*10+(n3%10);
        n3=n3/10;
    }
    if(n1>0){
    printf("point ");
    while(n4!=0){
        num(n4%10);
        n4=n4/10;
    }
}
}