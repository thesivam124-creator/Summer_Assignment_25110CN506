#include <stdio.h>
int main() {
    int n,i,prime=0;
    printf("enter the positive integer:");
    scanf("%d",&n);
    if (n<=1) {
        printf("%d is not a prime number",&n);
    }
    for(i=2;i<=n/2;i++) {
        if (n%i==0) {
            prime=1;
        }
    }
    if(prime==0) {
        printf("%d is a prime number",n);
}
else{
    printf("%d is not a prime number",n);
}
}