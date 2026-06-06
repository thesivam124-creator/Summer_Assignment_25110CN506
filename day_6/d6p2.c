#include <stdio.h>
int bindec(int n) {
    int decnum=0,base=1,r;
    while (n>0)
    {
        r=n%10;
        decnum=decnum+r*base;
        n=n/10;
        base=base*2;
    }
    return decnum;
    
}
int main() {
    int bin;
    printf("enter the binary number:");
    if(scanf("%d",&bin)==1) {
        printf("%d",bindec(bin));
    }
}