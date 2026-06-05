#include <stdio.h>
int main() {
    int n,s=0;
    printf("enter the number: ");
    scanf("%d",&n);
    for (int i=1;i<=n/2;i++) {
        if(n%i==0) {
            s+=i;
        }
    }
    if(s==n) {
        printf("entered number is a perfect number");
    }
    else{
        printf("entered number is not a perfect number");
    }
    }
