#include <stdio.h>
#include <math.h>

int main() {
    int m, n, i, temp, dig;
    
    printf("Enter the range limits: ");
    scanf("%d%d", &m, &n);
    

    for(i = m; i <= n; i++) {
        temp = i;   
        dig = 0;     
        
        
        while (temp > 0) {
            dig++;
            temp /= 10;
        }
        
        temp = i;
        int s = 0;
        
       
        while (temp > 0) {
            int r = temp % 10;
            s += (int)round(pow(r, dig));
            temp /= 10;
        }
        
     
        if(s == i) {
            printf("%d ", i);
        }
    } 
    
    printf("\n");
    return 0;
}
