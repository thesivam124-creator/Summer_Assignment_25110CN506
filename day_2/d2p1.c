#include <stdio.h>
int main() {
    int n,rev=0,dig;
    printf("enter the num: ");
    scanf("%d",&n);
    while(n>0) {
        dig=n%10;
        rev=rev*10+dig;
        n/=10;
    }
    printf("reversed number = %d\n",rev);
}
