#include <stdio.h>
int gcd(int m,int n) {
    while(n!=0) {
        int temp=n;
        n=m%n;
        m=temp;
    }
    return m;
}
int main() {
    int a,b;
    printf("enter the two numbers:");
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d is %d",a,b,gcd(a,b));
}