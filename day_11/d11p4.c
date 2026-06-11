#include <stdio.h>
int factorial(int num) {
    if(num==1) {
        return 1;
    }
    else{
        return num * factorial(num-1);
    }
}

int main() {
    int n;
    printf("enter the non negative number:");
    scanf("%d",&n);
    if(n==0) {
        printf("factorial of entered number is 1");
    }
    if(n>1){
         printf("factorial of entered number is %d",factorial(n));

    }

}