#include <stdio.h>

int fibonacci(int n) {
    return (n==0) ? 0 : (n==1) ? 1 : fibonacci(n-1) + fibonacci(n-2);

}
int main() {
    int n;
    printf("enter the integer:");
    scanf("%d",&n);
    printf("%d\n",fibonacci(n));
    
}