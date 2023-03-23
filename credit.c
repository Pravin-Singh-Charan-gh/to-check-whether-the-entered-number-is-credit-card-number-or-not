#include <stdio.h>
int main() {
    long long int n;
    int i,sum1=0,sum2=0,a;
    printf("Enter 16 digit number:");
    scanf("%lld",&n);
    if(n<1000000000000000||n>9999999999999999){
        printf("Not a 16 digit number\n");
        return 0;
    }
    for(i=1;i<=8;i++){
        sum1+=n%10;
        n/=10;
        a=(n%10)*2;
        if(a>9)
        a=a-9;
        sum2+=a;
        n/=10;
    }
    if((sum1+sum2)%10==0)
    printf("Valid credit card number\n");
    else
    printf("Invalid credit card number\n");
}
