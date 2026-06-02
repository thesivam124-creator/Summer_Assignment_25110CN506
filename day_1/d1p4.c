#include <stdio.h>
int main() {
    printf("enter the number:");
    int n,count=0;
    scanf("%d",&n);
    while(n>0) {
        n=n/10;
        count+=1;
    }
    while(n==0) {
        count=1;
    }
    printf("the number of digits in entered number is %d",count);
}