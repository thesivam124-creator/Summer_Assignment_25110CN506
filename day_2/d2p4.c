#include <stdio.h>
int main() {
    int n,old,rev=0,dig;
    printf("enter the num:");
    scanf("%d",&n);
    old=n;
    while(n>0)  {
        dig=n%10;
        rev=rev*10+dig;
        n/=10;
    }
    if(old==rev){
        printf("palindrome number\n");
    }
    else{
        printf("not a palindrome\n");
    }

}