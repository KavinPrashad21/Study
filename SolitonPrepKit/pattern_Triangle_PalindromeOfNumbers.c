/*
   1
  121
 12321
1234321

*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            printf("  ");
        }
        for(int j=0; j<=i; j++){
            printf("%d ", j+1);
        }
        for(int j=0; j<i; j++){
            printf("%d ", i-j);
        }
        printf("\n");
    }
}
