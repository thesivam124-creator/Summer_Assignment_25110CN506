#include <stdio.h>
int main() {
    int n,prod=1,dig;
    printf("enter the num:");
    scanf("%d",&n);
    while(n>0) {
        dig=n%10;
        prod *=dig;
        n/=10;
    }
    printf("product of digits is %d",prod);
}
