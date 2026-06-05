#include <stdio.h>
  int factorial(int x) {
        int f=1;
        for(int i=1;i<=x;i++) {
            f*=i;
        }
         return f;
        }





int main() {
    int n,temp,s=0;
    printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    while(temp>0) {
        int d = temp % 10;
        s+= factorial(d);
        temp /=10;

    }
    if (s == n) {
        printf("strong number");
    }
    else{
        printf("not a strong number");
    }
  
}