#include <stdio.h>
#include <math.h>
int prime(int x) {
    if(x<2) {
        return 0;
    }
    for(int i=2;i<=sqrt(x);i++) {
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main() {
    int n,mp=-1;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++) {
        if(n%i == 0 && prime(i)) {
            mp = i;
        }
    }
    if(mp != -1) {
        printf("%d",mp);
    }
    else{
        printf("not prime factors found");
    }

}
