#include <stdio.h>
int main() {
    int n,sum=0,dig;
    printf("enter the num:");
    scanf("%d",&n);
    while(n>0) {
        dig=n%10;
        sum+=dig;
        n/=10;
    }
    printf("sum of digits of the number is %d",sum);
}
