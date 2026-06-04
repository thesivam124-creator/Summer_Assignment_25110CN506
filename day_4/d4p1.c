#include <stdio.h>
int main() {
    int n,i,a=0,b=1,next;
    printf("enter the number of terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
     next=a+b;
     printf("%d\t",a);
     a=b;
     b=next;
     
    }
}