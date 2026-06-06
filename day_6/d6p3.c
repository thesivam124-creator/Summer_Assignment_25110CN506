#include <stdio.h>
int countbit(int n) {
    int c=0;
    while(n>0) {
        n= n & (n-1);
        c++;
    }
    return c;
}
int main() {
    int num;
    printf("enter the integer:");
    if(scanf("%d",&num)==1) {
        printf("%d",countbit(num));
    }
}