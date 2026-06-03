#include <stdio.h>
#include <math.h>
int prime(int n) {
    if (n<=1) {
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i ==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int start,end;
    printf("enter range for prime numbers:");
    scanf("%d%d",&start,&end);
    printf("prime numbers between %D and %d are:",start,end);
    for(int i=start;i<=end;i++) {
        if(prime(i)) {
            printf("%d",i);
        }
    }
    
}