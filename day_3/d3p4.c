#include <stdio.h>
int gcd(int m,int n) {
    while (n!=0)
    {
        int temp = n;
        n = m%n;
        m=temp;
    }
    return m;
}
int lcm(int a, int b) {
    return (a*b)/gcd(a,b);
}
int main() {
int num1,num2;
printf("enter two numbers:");
scanf("%d%d",&num1,&num2);
printf("LCM of entered numbers is %d",lcm(num1,num2));
}