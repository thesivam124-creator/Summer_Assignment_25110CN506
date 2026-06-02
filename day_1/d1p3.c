#include <stdio.h>
int main() {
    printf("enter the number:");
    int i,n,factorial=1;
    scanf("%d",&n);
    if(n>0){
    for(i=1;i<=n;i++) {
        factorial*=i;
    }
    printf("%d",factorial);
    }
    if(n<0){
        printf("factorial does not exist for given number");
    }
    if(n==0) {
        printf("%d",factorial);
    }
}
