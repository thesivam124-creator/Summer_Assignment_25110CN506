#include <stdio.h>
int main() {
    printf("enter the number:");
    int n,i,mul=0;
    scanf("%d",&n);
    for (i=1;i<=10;i++) {
        mul=i*n;  
       printf("%d*%d=%d \n",n,i,mul);
    }
}