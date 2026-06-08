#include <stdio.h>

int sod(int n) {
    return (n==0) ? 0 : (n%10) + sod(n/10);
}
int main() {
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("%d\n",sod(num));
    
}