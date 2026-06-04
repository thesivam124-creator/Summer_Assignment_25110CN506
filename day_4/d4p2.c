#include <stdio.h>
int main() {
    int n,i;
    int a=0,b=1,next;
    printf("enter the position of term:");
    scanf("%d",&n);
    if(n==1) {
        printf("%d",a);
    }
 if(n==2) {
    printf("%d",b);
}
if(n>2) {
    for(i=0;i<n;i++) {
        next = a+b;
        a=b;
        b=next;
    }
    printf("%d",b);
}
}