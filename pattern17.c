#include <stdio.h>
int main() {
    int n = 5;
   
    for (int i = 1; i <=n; i++) 
    {
         int num=65-i+5; 
        for (int j =1;j<=i; j++) {
            printf("%c",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}