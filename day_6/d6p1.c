#include <stdio.h>
int decbin(int n) {
    int binum[32];
    int i = 0;
    if(n==0) {
        printf("0");
        
    }

while(n>0) {
    binum[i] = n%2;
    n = n/2;
    i++;
}
for(int j=i-1;j>=0;j--) {
    printf("%d",binum[j]);
}
}
int main() {
    int dec;
    printf("enter the dec number:");
    scanf("%d",&dec);
    decbin(dec);
}