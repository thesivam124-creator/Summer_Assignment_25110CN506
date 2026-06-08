#include <stdio.h>
int fac(int n) {
    return (n==0 || n==1)?1:n*fac(n-1); 
}
int main() {
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("%d\n",fac(num));

}