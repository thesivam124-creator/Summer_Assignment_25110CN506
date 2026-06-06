#include <stdio.h>
int main() {
    int x,n;
    long long res=1;
    printf("enter the base and exponent:");
    scanf("%d%d",&x,&n);
    if(n<0) {
        printf("it is negative integer");
        return 0;
    }
    for(int i=1;i<=n;i++) {
        res *=x;
    }
    printf("%d",res);
    
}