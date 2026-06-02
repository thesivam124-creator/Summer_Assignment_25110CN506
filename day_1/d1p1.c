#include <stdio.h>
int main() {
    printf("enter the number:");
    int n,i,sum=0;
    scanf("%d",&n);
    for (i=0;i<=n;i++) {
     sum+=i; 
    }
printf("%d",sum);
}