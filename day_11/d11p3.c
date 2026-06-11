#include <stdio.h>
int main() {
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<=1) {
        printf("is not prime");
    }
    for(int i=2;i<=n/2;i++) {
        if(n%i==0){
            printf("is not prime");
        }
        else{
            printf("is prime");
        }
    }
}